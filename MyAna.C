//  .  may 30, 2013
// ..: tony thompson, philip chang, university of illinois at urbana-champaign

#define MyAna_cxx

//KLFitter
#include "KLFitter/library/include/Fitter.h"
#include "KLFitter/library/include/DetectorAtlas_8TeV.h"
#include "KLFitter/library/include/LikelihoodBase.h"
#include "KLFitter/library/include/LikelihoodTTH_hadronic.h"
#include "KLFitter/library/include/PhysicsConstants.h"
#include "KLFitter/library/include/Particles.h"
#include "KLFitter/library/include/Permutations.h"


// C++
#include <iostream>
#include <cmath>
#include <time.h>
#include <algorithm>
// Moudle header
#include "MyAna.h"


// ROOT include (alphabetical order)
#include "TCanvas.h"
#include "TH1F.h"
#include "TStyle.h"
#include "TString.h"
#include "TLorentzVector.h"
#include "TH2F.h"

#define GeV 1000.
#define luminosity       20693.7  //luminosity of data in pb-1
#define CrossSection     0.027993      //need to find this out: SM cross section of event in question in pb
#define FilterEfficiency 1.0      //
#define kFactor          1.0      //need to find this out: higher order correction to cross section
#define m_top            172900.  //mass of top quark in MeV
#define m_higgs          125000.  //mass of higgs in MeV
#define m_W              80385.0  //mass of W in MeV
#define W_width          2085.0   //width of W mass in MeV
#define T_width          1290.0   //width of top quark in MeV (from pdg)

struct varHist_info_t  //stolen from Mark's code because I like it: All Histogram info
{
  TString name;
  TString title;
  int     nbins;
  double  xlow;
  double  xhigh;
};



const int numPlots = 15;
const varHist_info_t _v[] = {  //put vector paramaters after single parameters (assumed in FillHists())
  {"MT_Histo"       , "MT_Histo"       , 100 , 0       , 250    },
  {"lepPt0Histo"    , "lepPt0Histo"    , 100 , 0       , 250    },
  {"lepPt1Histo"    , "lepPt1Histo"    , 100 , 0       , 250    },  //bin size may be hard set in MakeHistograms()
  {"lepEta0Histo"   , "lepEta0Histo"   , 100 , -2.5    , 2.5    },
  {"lepEta1Histo"   , "lepEta1Histo"   , 100 , -2.5    , 2.5    },
  {"lepPhi0Histo"   , "lepPhi0Histo"   , 100 , -3.1415 , 3.1415 },  //I want to be able to extract
  {"lepPhi1Histo"   , "lepPhi1Histo"   , 100 , -3.1415 , 3.1415 },  //the variable name from the 
  {"MET_Histo"      , "MET_Histo"      , 100 , 0       , 250    },  //histogram name for FillHists()
  {"DPhillHisto"    , "DPhillHisto"    , 100 , 0       , 3.1415 },  //or put the varible somehow in
  {"MllHisto"       , "MllHisto"       , 100 , 0       , 150    },  //this structure for ease of use
  {"DRlep0jetHisto" , "DRlep0jetHisto" , 100 , 0       , 8      },  //Maybe impossible in c++
  {"DRlep1jetHisto" , "DRlep1jetHisto" , 100 , 0       , 8      },  //Hi Tony, take a look at TTreeFormula 
  {"m_jet_ptHisto"  , "m_jet_ptHisto"  , 100 , 0       , 150000 },  //or TTree::Draw().
  {"m_jet_etaHisto" , "m_jet_etaHisto" , 100 , -2.5    , 2.5    },
  {"m_jet_phiHisto" , "m_jet_phiHisto" , 100 , -3.1415 , 3.1415 }
};


vector<TH1F *> MakeHistograms(Long_t cut)
{
  vector<TH1F *> Histograms(numPlots);
  for(Int_t i=0;i<numPlots;i++)
  {
    TString name=_v[i].name+"_"+cut;
    TString title=_v[i].title+"_"+cut;
    Histograms[i]=new TH1F(name,title,25,_v[i].xlow,_v[i].xhigh);
    Histograms[i]->Sumw2();  //makes sure errors are propagated correctly
  }
  return Histograms;
}

void SaveHists(vector<TH1F *> histograms)
{
  gStyle->SetOptStat(0);
  for(Int_t i=0;i<numPlots;i++)
  {
//    Printf("Saving Histogram #%i",i);
    TCanvas* c1 =new TCanvas("","",0,0,900,900);
    histograms[i]->Draw("hist");
    c1->SaveAs(TString::Format("plots/%s.eps", histograms[i]->GetName()));
    c1->SaveAs(TString::Format("plots/%s.pdf", histograms[i]->GetName()));
    c1->SaveAs(TString::Format("plots/%s.C"  , histograms[i]->GetName()));
    delete c1;
  }
}
void MyAna::FillHists(vector<TH1F *> histograms,Double_t weight)
{
  int singleVars=12;
  int vectorVars=3;

  Double_t singleParams[]= {MT/GeV,lepPt0/GeV,lepPt1/GeV,lepEta0,lepEta1,lepPhi0,lepPhi1,MET/GeV,DPhill,Mll/GeV,DRlep0jet,DRlep1jet};
  vector<float>  vectorParams[]={*m_jet_pt,*m_jet_eta,*m_jet_phi};

  for(int i=0;i<singleVars;i++)
  {
    histograms[i]->Fill(singleParams[i],weight);
  }

  for(int i=0;i<vectorVars;i++)
  {
    for(int j=0;j<m_jet_n;j++)
    {
      histograms[i+singleVars]->Fill(vectorParams[i][j],weight);
    }
  } 
}
Double_t MyAna::EventWeight(Long64_t nentries)
{
  return (mcEventWeight*CrossSection*kFactor*FilterEfficiency*luminosity)/nentries;
}

Double_t GetClosest_bjj_invMassTo(Double_t target, vector<TLorentzVector> jets,vector<float> jetFlavorWeights,int * jet1, int * jet2, int * jet3)
{
    Int_t Njets = jets.size();
    Double_t closest=HUGE_VAL;  
    
    for(Int_t k=0;k<Njets;k++)
    {
      for(Int_t i=0;i<Njets;i++)
      {
        for(Int_t j=0;j<Njets;j++)
        {
            if(i !=j && i!=k && j !=k )  //don't add up same jets
            {
              TLorentzVector sum=jets[i]+jets[j]+jets[k];
              Double_t current=sum.Mag();
              if(abs(current-target)<abs(closest-target))
              {
                closest=current;
                if(jet1 !=NULL)
                {
                  *jet1=i;
                  *jet2=j;
                  *jet3=k;
                }
              }
               
            }
        }
      }
    }
    return closest;   //note: returns inf when Njets <3
   
}


void MyAna::Loop() 
{
  //skeleton loop
   if (fChain == 0) return;
 
   Long64_t nentries = fChain->GetEntries();
   // TODO: Extract this
   if (nentries==0) 
   {
      std::cout << "ERROR - Empty tree! Please check the input files" << std::endl;
      return;
   }
      
  KLFitter::Fitter * myFitter = new KLFitter::Fitter(); 
 
  KLFitter::DetectorBase * myDetector = new KLFitter::DetectorAtlas_8TeV("/home/atlas/thomps51/ttH/Test/KLFitter/transferfunctions/8TeV/ttbar/mc12_LCJets_v1");
  myFitter->SetDetector(myDetector);

  KLFitter::LikelihoodTTH_hadronic * myLikelihood = new KLFitter::LikelihoodTTH_hadronic();
  myFitter->SetLikelihood(myLikelihood);

  vector<TH1F *> hists(9); 
  hists[0] = new TH1F("M_thad_W_jj","M_t_W_jj",25,0,160);
  hists[1] = new TH1F("M_H_W_jj","M_H_W_jj",50,0,200);
  hists[2] = new TH1F("M_thad_Wb","M_thad_Wb",25,0,240);
  hists[3] = new TH1F("M_tlep_Wb","M_tlep_Wb",25,0,240);
  hists[4] = new TH1F("M_tlep_W","M_tlep_W",25,0,160);
  hists[5] = new TH1F("M_tlep_W_lnu","M_tlep_W_lnu",25,0,160);
  hists[6] = new TH1F("M_Higgs","M_Higgs",100,0,1000);
  hists[7] = new TH1F("M_H_W_lnu","M_H_W_lnu",50,0,200);
  hists[8] = new TH1F("loglikelihood","loglikelihood",50,-100,0);

  TH2F * scatter = new TH2F("W W scatter","W W scatter", 25, 0 , 200, 25 , 0, 200);
  scatter->GetXaxis()->SetTitle("W 1");
  scatter->GetXaxis()->SetTitle("W 2");
  int j=0;
//  cout<<"Starting Event Loop"<<endl;

  long eventsNotFit=0;


  for (Long64_t jentry=0; jentry<nentries;jentry++) 
  { 
//    Long64_t ientry = LoadTree(jentry);
//    if (ientry < 0) break;
      GetEntry(jentry);
    if(lepID0*lepID1<0 && m_jet_n >=6 && MET > 20. )
    {

      vector<TLorentzVector> v=MakeJet4Vectors();

//      for(int i =0; i<m_jet_n;i++)
//      {
//        cout << m_jet_flavor_weight_MV1->at(i) << " ";
//      }
//      cout<<endl;
//      for(int i=0;i<m_jet_n;i++)
//      {
//        cout<<v[i].E()<< " " ;
//      }
//      cout<<endl;

      //remove 2 highest MV1 jets  m_jet_flavor_weight_MV1
      vector<int> highestIndicies(2,0);
      vector<double> highestWeights(2,0);
      for(int i =0;i < m_jet_n ; i++)
      {
        if(m_jet_flavor_weight_MV1->at(i) > highestWeights[0] && m_jet_flavor_weight_MV1->at(i) > highestWeights[1])
        {
          if(highestWeights[0]>highestWeights[1])
          {
            highestWeights[1]=m_jet_flavor_weight_MV1->at(i);
            highestIndicies[1]=i;
          }
          else if(highestWeights[0]<=highestWeights[1])
          {
            highestWeights[0]=m_jet_flavor_weight_MV1->at(i);
            highestIndicies[0]=i;
          }
        }
        else if(m_jet_flavor_weight_MV1->at(i) > highestWeights[0])
        {
          highestWeights[0]=m_jet_flavor_weight_MV1->at(i);
          highestIndicies[0]=i;
        }
        else if(m_jet_flavor_weight_MV1->at(i) > highestWeights[1])
        {
          highestWeights[1]=m_jet_flavor_weight_MV1->at(i);
          highestIndicies[1]=i;
        }
      }

      std::sort(highestIndicies.begin(), highestIndicies.end());

//      cout<<"Highest Indicies: "<<highestIndicies[0]<<" "<<highestIndicies[1]<<endl;
//      cout<<"Highest Weights:  "<<highestWeights[0]<<" "<<highestWeights[1]<<endl; 
 
      v.erase(v.begin()+highestIndicies[1]); //erase highest index number first
      v.erase(v.begin()+highestIndicies[0]);

//      for(int i=0;i<m_jet_n-2;i++)
//      {
//        cout<<v[i].E()<< " " ;
//      }
//      cout<<endl;


      KLFitter::Particles * myParticles = new KLFitter::Particles();
      for(int i=0;i<m_jet_n-2;i++)
      {
        if(v[i].Eta()<2.5 && v[i].Eta()>-2.5 )
          myParticles->AddParticle(&v[i],KLFitter::Particles::kParton);
        if(myParticles->NPartons() == 6 )   //only use up to this number of jets for fitting
        {
          break;
        }
      }
      if(myParticles->NPartons() < 4)  //need to stop loop if not 6 jets in eta range
      {
        cout<<"not 4 jets in eta range: event thrown out"<<endl;
        continue;
      }

      myFitter->SetParticles(myParticles);
      myFitter->Likelihood()->RemoveInvariantParticlePermutations();
      double bestLikelihood=-HUGE_VAL;
      int bestPerm=-1;

      myFitter->Permutations()->SetPermutation(0);
      KLFitter::Particles * InputParts = *myFitter->Likelihood()->PParticlesPermuted();

      for (int iPerm = 0, nPerms(myFitter->Permutations()->NPermutations()); iPerm < nPerms; ++iPerm) {
        myFitter->Fit(iPerm);
        myFitter->Permutations()->SetPermutation(iPerm);
        KLFitter::Particles * InputParticles = *myFitter->Likelihood()->PParticlesPermuted();
        double LogLikelihood = myFitter->Likelihood()->LogLikelihood(myFitter->Likelihood()->GetBestFitParameters());
        if(bestLikelihood<LogLikelihood)  
        {
          bestPerm=iPerm;
          bestLikelihood=LogLikelihood;
        }

      }
      if(bestPerm == -1)
      {
//        cout<<"Error: no best permutation found"<<endl;
        eventsNotFit++;
        continue;
      }
        
//      cout<<"Best Permutation: "<<bestPerm<<endl;
//      cout<<"Best Likelihood: "<<bestLikelihood<<endl;

      hists[8]->Fill(bestLikelihood);

      // go back to the best permutation
      myFitter->Permutations()->SetPermutation(bestPerm);
      myFitter->Fit(bestPerm);
      KLFitter::Particles * myModelParticles = myFitter->Likelihood()->ParticlesModel();
        // Minuit Output 
        KLFitter::Particles * OutputParticles = myFitter->Likelihood()->ParticlesModel(); 
        KLFitter::Particles * InputParticles = *myFitter->Likelihood()->PParticlesPermuted();
	std::vector<double> Par = myFitter->Likelihood()->GetBestFitParameters();
        std::vector<double> ParErrors = myFitter->Likelihood()->GetBestFitParameterErrors();
	unsigned int ConvergenceStatusBitWord = myFitter->ConvergenceStatus();
/*	printf("----------------------------------------------------------------------------------------------\n");
	printf("----------------------------------------Best Permutation---------------------------------------\n");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("                  | hadronic b quark | leptonic b quark  |  light quark 1   |  light quark 2  | light quark 3 | light quark 4 | top electron | higgs electron |\n");
	printf("Input Energies    | %16.2f | %17.2f | %16.2f | %15.2f | %16.2f | %16.2f | %16.2f | %16.2f |\n",
	InputParticles->Parton(0)->E(), InputParticles->Parton(1)->E(),
	InputParticles->Parton(2)->E(), InputParticles->Parton(3)->E(),InputParticles->Parton(4)->E(),InputParticles->Parton(5)->E(), 
        InputParticles->Electron(0)->E(), InputParticles->Electron(1)->E() );
	printf("Output Energies   | %16.2f | %17.2f | %16.2f | %15.2f | %16.2f | %16.2f | %16.2f | %16.2f |\n",
	OutputParticles->Parton(0)->E(), OutputParticles->Parton(1)->E(),
	OutputParticles->Parton(2)->E(), OutputParticles->Parton(3)->E() ,OutputParticles->Parton(4)->E(),OutputParticles->Parton(5)->E(),
        OutputParticles->Electron(0)->E(), OutputParticles->Electron(1)->E() );
	printf("----------------------------------------------------------------------------------------------\n");
	printf("                  |  Log(Likelihood) | Event Probability |   Higgs N px   | Higgs N py | Higgs N pz | top N px| top N py | top N pz |\n");
	printf("Fitting Variables | %16.2f | %17.2E | %6.2f +- %6.2f | %6.2f +- %5.2f |  %6.2f +- %5.2f |  %6.2f +- %5.2f |  %6.2f +- %5.2f |  %6.2f +- %5.2f |\n",
	myFitter->Likelihood()->LogLikelihood(myFitter->Likelihood()->GetBestFitParameters()),
	exp(myFitter->Likelihood()->LogEventProbability()),
	Par[8],ParErrors[8],
	Par[9],ParErrors[9],
        Par[10], ParErrors[10],
        Par[11], ParErrors[11],
        Par[12], ParErrors[12],
        Par[13], ParErrors[13]);
	printf("----------------------------------------------------------------------------------------------\n");
	printf("                  | Minuit Not Conv. | Fit Aborted: NaN  | >=1 Par at Limit | Invalid TF@Conv.|\n");
	printf("Status Code       | %16i | %17i | %16i | %15i |\n",
	bool((ConvergenceStatusBitWord & KLFitter::Fitter::MinuitDidNotConvergeMask) != 0), 
	bool((ConvergenceStatusBitWord & KLFitter::Fitter::FitAbortedDueToNaNMask) != 0),
	bool((ConvergenceStatusBitWord & KLFitter::Fitter::AtLeastOneFitParameterAtItsLimitMask) != 0),
	bool((ConvergenceStatusBitWord & KLFitter::Fitter::InvalidTransferFunctionAtConvergenceMask) != 0));
*/

     //hadronic top
/*
      TLorentzVector * thad_W_j1  = InputParticles->Parton(2); //myModelParticles->Particle("light quark 1");
      TLorentzVector * thad_W_j2  = InputParticles->Parton(3); //myModelParticles->Particle("light quark 2");
      TLorentzVector * thad_b     = InputParticles->Parton(0); //myModelParticles->Particle("hadronic b quark");
      //leptonic top
      TLorentzVector * tlep_W_l   = InputParticles->Electron(0); //myModelParticles->Particle("electron 1");
      TLorentzVector * tlep_W_v   = myModelParticles->Particle("neutrino 1");
      TLorentzVector * tlep_b     = InputParticles->Parton(1); //myModelParticles->Particle("leptonic b quark");;
*/      //higgs
      TLorentzVector * H_W_j1     = InputParticles->Parton(0); 
      TLorentzVector * H_W_j2     = InputParticles->Parton(1);
      TLorentzVector * H_W_j3     = InputParticles->Parton(2); //myModelParticles->Particle("light quark 3");
      TLorentzVector * H_W_j4     = InputParticles->Parton(3); //myModelParticles->Particle("light quark 4");

//      cout<<"filling histograms"<<endl;



//      cout<<"Composite Particle Masses:"<<endl;
      // W 1 from higgs
      TLorentzVector Wstar= *H_W_j1+*H_W_j2;
      hists[1]->Fill(Wstar.Mag()); 
//      cout<<"W 1 mass: "<<Wstar.Mag()<<endl;
      // W 2 from higgs
      TLorentzVector Whiggs= *H_W_j3+*H_W_j4;
      hists[7]->Fill(Whiggs.Mag());
//      cout<<"W 2 mass: "<<Whiggs.Mag()<<endl;
      // Higgs
      TLorentzVector Hm=Wstar+Whiggs;
      hists[6]->Fill(Hm.Mag());
//      cout<<"Higgs mass: "<<Hm.Mag()<<endl;
//      delete myParticles;
      scatter->Fill(Wstar.Mag(),Whiggs.Mag());
    if(bestLikelihood>-30&&false)
    {
      cout<<"W 1 mass: "<<Wstar.Mag()<<endl;
      cout<<"W 2 mass: "<<Whiggs.Mag()<<endl;
      cout<<"Higgs mass: "<<Hm.Mag()<<endl;
    }
    if(Hm.Mag()>120 && Hm.Mag()<130)
    {
      cout<<"W 1 mass: "<<Wstar.Mag()<<endl;
      cout<<"W 2 mass: "<<Whiggs.Mag()<<endl;
      cout<<"Higgs mass: "<<Hm.Mag()<<endl;
    }

    } 
  }
  cout<<"Events not fit: "<<eventsNotFit<<endl;


  for(int k=0;k<hists.size();k++)
  {
    TCanvas* c1 =new TCanvas("","",0,0,900,900);
    hists[k]->Draw();
    c1->SaveAs(TString::Format("KL_plots/%s.eps", hists[k]->GetName()));
    c1->SaveAs(TString::Format("KL_plots/%s.C", hists[k]->GetName()));
    c1->SaveAs(TString::Format("KL_plots/%s.pdf", hists[k]->GetName()));
    delete c1;
  }
  TCanvas* c1 = new TCanvas("","",0,0,900,900);
  scatter->Draw("COL");
  c1->SaveAs(TString::Format("KL_plots/%s.eps", scatter->GetName()));
  c1->SaveAs(TString::Format("KL_plots/%s.C", scatter->GetName()));
  c1->SaveAs(TString::Format("KL_plots/%s.pdf", scatter->GetName()));
  delete c1;
  // clean up memory
//  delete myLikelihood;
//  delete myDetector;

}

void MyAna::Cutflow()
{
  Int_t numCuts=3;
  vector<Double_t> eventsAfterCut(numCuts+1,0);// +1 to include 0 cuts

  vector<vector<TH1F *> > histograms(numCuts+1);
  for(int i=0;i<=numCuts;i++)
  {
    histograms[i]=MakeHistograms(i);
  } 
 
  Long64_t nentries = fChain->GetEntries(); 
  for (Long64_t jentry=0; jentry<nentries;jentry++) 
  {
      Long64_t ientry = LoadTree(jentry);


      if (ientry < 0) break;

      GetEntry(jentry);

      Double_t EventWeight=(mcEventWeight*CrossSection*kFactor*FilterEfficiency*luminosity)/nentries;

      //current cuts: SameSignDilepton, OppSignDilepton
      vector<Bool_t> cuts=SameSignDilepton();
      for(int i=0;i<=numCuts;i++)
      {
        if(cuts[i])
        {
          FillHists(histograms[i],EventWeight);
          eventsAfterCut[i]+=EventWeight;
        }
      }

  }
  
  for(int i=0;i<=numCuts;i++)
  {
    printf("Number of events after cut #%i: %f\n",i,eventsAfterCut[i]);
  } 
  for(int i=0;i<=numCuts;i++)
  {
    SaveHists(histograms[i]);
  }

}
vector<Bool_t> MyAna::SameSignDilepton()
{
  vector<Bool_t> cuts;
  cuts.push_back(true);
  cuts.push_back(lepID0*lepID1>0);
  cuts.push_back(lepID0*lepID1>0 && m_jet_n >=6);
  cuts.push_back(lepID0*lepID1>0 && m_jet_n >=6 && nJets_Pt25_MV1_85 >= 2);
  return cuts;
}
vector<Bool_t> MyAna::OppSignDilepton()
{
  vector<Bool_t> cuts;
  cuts.push_back(true);
  cuts.push_back(lepID0*lepID1<0);
  cuts.push_back(lepID0*lepID1<0 && m_jet_n >=6);
  cuts.push_back(lepID0*lepID1<0 && m_jet_n >=6 && nJets_Pt25_MV1_85 >= 2);
  return cuts;

}
vector<TLorentzVector> MyAna::MakeJet4Vectors()
{
    vector<TLorentzVector> jetLorentzVectors(m_jet_n); 
    for(Int_t i=0;i<m_jet_n;i++)
    {
      jetLorentzVectors[i].SetPtEtaPhiE(m_jet_pt->at(i)/GeV,m_jet_eta->at(i),m_jet_phi->at(i),m_jet_E->at(i)/GeV);
    }
    return jetLorentzVectors;
}

vector<TLorentzVector> MyAna::MakeLep4Vectors()
{
    vector<TLorentzVector> lepLorentzVectors(2);
    lepLorentzVectors[0].SetPtEtaPhiM(lepPt0/GeV,lepEta0,lepPhi0,0);
    lepLorentzVectors[1].SetPtEtaPhiM(lepPt1/GeV,lepEta1,lepPhi1,0);
    return lepLorentzVectors;
}

void MyAna::CreateNewTree()
{
  TFile hFile("massvariable__161305.root","RECREATE");
  TTree *tree=new TTree("HWWTree_em","description");

  if (fChain == 0) return;

  Double_t Mbjj_closeTop; 
  tree->Branch("Mbjj_closeTop",&Mbjj_closeTop,"Mbjj_closeTop/D"); 
   
  Long64_t nentries = fChain->GetEntries();
 
   // TODO: Extract this
  if (nentries==0) 
  {
     std::cout << "ERROR - Empty tree! Please check the input files" << std::endl;
     return;   
  }
 
   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {   
      Long64_t ientry = LoadTree(jentry);
 
      if (ientry < 0) break;
   
      GetEntry(jentry);

      //calculate closest b+j+j invarient mass to top quark for each event  
      Mbjj_closeTop=GetClosest_bjj_invMassTo(m_top/GeV,MakeJet4Vectors(),*m_jet_flavor_weight_MV1,NULL,NULL,NULL); 

 
      if(lepID0*lepID1>0 && m_jet_n >=6 && nJets_Pt25_MV1_85 >= 2)  //calculation doesn't make sense without >2 jets (don't fill tree with inf value)
        tree->Fill();
   }
  tree->Write();
}


//eof
