// root -q -x -l 'PrepareWorkspace_Poisson.C()'

void PrepareWorkspace_Poisson( TString fileName = "WS_Poisson.root" )
{
  // In this macro a PDF model is built for a counting analysis.  A
  // certain number of events are observed (this can be enforced or
  // left free) while a number of background events is expected.  In
  // this macro, no systematic uncertainty is considered (see
  // PrepareWorkspace_Poisson_withSystematics.C) The parameter of
  // interest is the signal yield and we assume for it a flat prior.
  // All needed objects are stored in a ROOT file (within a
  // RooWorkspace container); this ROOT file can then be fed as input
  // to various statistical methods.

  using namespace RooFit;
  using namespace RooStats;

  // use an observable for this shape-based analysis
  RooRealVar* x = new RooRealVar("x","dummy discriminating variable for event count",0,0,1);
  x->setBins(1);
  RooArgSet* observables = new RooArgSet(*x,"observables");

  // signal and background PDF are flat (they are constant whatever the actual value of the observable)
  RooAbsPdf* sigPdf = new RooPolynomial("sigPdf","signal PDF",*x,RooFit::RooConst(0));
  RooAbsPdf* bkgPdf = new RooPolynomial("bkgPdf","background PDF",*x,RooFit::RooConst(0));
  
  // S+B model: the sum of both shapes weighted with the yields
  RooRealVar* S = new RooRealVar("S","signal yield",0,0,60);
  RooRealVar* B = new RooRealVar("B","background yield",10);
  RooAbsPdf* model = new RooAddPdf("model","S+B PDF",RooArgList(*sigPdf,*bkgPdf),RooArgList(*S,*B));
  
  // B-only model: the same as with a signal yield fixed to 0
  RooAbsPdf* modelBkg = new RooExtendPdf("modelBkg","B-only PDF",*bkgPdf,*B);

  // assume a flat prior on our parameter of interest (POI) which is the signal yield
  RooAbsPdf* priorPOI = new RooPolynomial("priorPOI","flat prior on the POI",*S,RooFit::RooConst(0));
  RooArgSet* POI = new RooArgSet(*S,"POI");
  
  // different options are shown for the data generation from the model

  // binned data with a fixed number of events
//   RooAbsData* data = (RooDataHist*) model->generateBinned(*observables,S->getVal(),Name("data"));

  // binned data with Poisson fluctuations
//   RooAbsData* data = (RooDataHist*) model->generateBinned(*observables,Extended(),Name("data"));
  
  // binned without any fluctuations (average case)
  RooAbsData* data = (RooDataHist*) model->generateBinned(*observables,Name("data"),ExpectedData());

  // control plot of the generated data
//   RooPlot* plot = x->frame();
//   data->plotOn(plot);
//   plot->Draw();

  // use a RooWorkspace to store the pdf models, prior informations, list of parameters,...
  RooWorkspace myWS("myWS");
  myWS.import(*data,Rename("data"));
  myWS.import(*model,RecycleConflictNodes());
  myWS.import(*modelBkg,RecycleConflictNodes());
  myWS.import(*priorPOI,RecycleConflictNodes());
  myWS.defineSet("observables",*observables,kTRUE);
  myWS.defineSet("POI",*POI,kTRUE);

  // store the workspace in a ROOT file  
  TFile file(fileName,"RECREATE");
  file.cd();
  myWS.Write();
  file.Write();
  file.Close();
  
  std::cout << "\nRooFit model initialized and stored in " << fileName << std::endl;
}
