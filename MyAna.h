//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 28 15:27:24 2013 by ROOT version 5.34/07
// from TTree HWWTree_em/HWW DilepNtuple_em
// found on file: 161305.root
//////////////////////////////////////////////////////////

#ifndef MyAna_h
#define MyAna_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>
// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include "TLorentzVector.h"
// Fixed size dimensions of array or collections stored in the TTree if any.

class MyAna {
  public :
    TTree          *fChain;   //!pointer to the analyzed TTree or TChain
    Int_t           fCurrent; //!current Tree number in a TChain

    // Declaration of leaf types
    Float_t         higgsPt;
    Int_t           isLowPtCand;
    Int_t           isBlinded;
    Float_t         Mll;
    Float_t         MT;
    Float_t         MTtruth;
    Float_t         MTup;
    Float_t         MTdown;
    Float_t         MTrans;
    Float_t         gammaStar_weight;
    Float_t         m_gammaStar;
    Float_t         smt_muon_pt;
    Float_t         smt_muon_sf;
    Float_t         smt_muon_mistag_sf_up;
    Float_t         smt_muon_mistag_sf_dw;
    Float_t         smt_muon_chi2_sf_up;
    Float_t         smt_muon_chi2_sf_dw;
    Float_t         smt_muon_id_sf_up;
    Float_t         smt_muon_id_sf_dw;
    Float_t         Ptll;
    Float_t         Ptlljets;
    Float_t         DPhill;
    Float_t         DPhillMET;
    Float_t         DRll;
    Float_t         DEtall;
    Float_t         Yll;
    Float_t         Pttot;
    Float_t         Mjj;
    Float_t         Ptjj;
    Float_t         DPhijj;
    Float_t         DRjj;
    Float_t         DEtajj;
    Float_t         DYjj;
    Float_t         Mtt;
    Float_t         x1;
    Float_t         x2;
    Float_t         BDT_1jet_4vars;
    Float_t         BLayer_hit0;
    Float_t         BLayer_hit1;
    Float_t         conv0;
    Float_t         conv1;
    Int_t           RandomRunNumber;
    Float_t         DPhiSubLeadLepMET;
    Float_t         DPhiLeadLepMET;
    Float_t         MinDPhi;
    Float_t         MinDPhi_noJVF;
    Float_t         MET;
    Float_t         MET_x;
    Float_t         MET_y;
    Float_t         MET_phi;
    Float_t         METRel;
    Float_t         METRel_x;
    Float_t         METRel_y;
    Float_t         METRel_noJets;
    Float_t         DPhiSubLeadLepMET_STVF;
    Float_t         DPhiLeadLepMET_STVF;
    Float_t         MinDPhi_STVF;
    Float_t         MinDPhi_noJVF_STVF;
    Float_t         MT_STVF;
    Float_t         MTrans_STVF;
    Float_t         Mtt_STVF;
    Float_t         x1_STVF;
    Float_t         x2_STVF;
    Float_t         Pttot_STVF;
    Float_t         MET_STVF;
    Float_t         MET_x_STVF;
    Float_t         MET_y_STVF;
    Float_t         MET_phi_STVF;
    Float_t         METRel_STVF;
    Float_t         METRel_x_STVF;
    Float_t         METRel_y_STVF;
    Float_t         METRel_noJets_STVF;
    Float_t         MET_TrackHWW_Cl;
    Float_t         MET_x_TrackHWW_Cl;
    Float_t         MET_y_TrackHWW_Cl;
    Float_t         MET_phi_TrackHWW_Cl;
    Float_t         MinDPhi_TrackHWW_Cl;
    Float_t         MinDPhi_noJVF_TrackHWW_Cl;
    Float_t         METRel_TrackHWW_Cl;
    Float_t         METRel_x_TrackHWW_Cl;
    Float_t         METRel_y_TrackHWW_Cl;
    Float_t         DPhi_CaloTrackHWW_Cl;
    Float_t         MT_TrackHWW_Cl;
    Float_t         PtTrack_TrackHWW_Cl;
    Float_t         MTrans_TrackHWW_Cl;
    Float_t         Mtt_TrackHWW_Cl;
    Float_t         x1_TrackHWW_Cl;
    Float_t         x2_TrackHWW_Cl;
    Float_t         DPhiSubLeadLepMET_TrackHWW_Cl;
    Float_t         DPhiLeadLepMET_TrackHWW_Cl;
    Float_t         Pttot_TrackHWW_Cl;
    Float_t         METRel_noJets_TrackHWW_Cl;
    Float_t         HighTrackPt_TrackHWW_Cl;
    Int_t           MET_TrackHWW_Nmu;
    Int_t           MET_TrackHWW_NmuMatched;
    Int_t           MET_TrackHWW_Nel;
    Int_t           MET_TrackHWW_NelMatched;
    Int_t           MET_TrackHWW_Ntracks;
    Float_t         sumTrackPt_TotHem_Proj;
    Float_t         sumTrackPt_SameHem_Proj;
    Float_t         sumTrackPt_OppHem_Proj;
    Float_t         sumJetPt15_TotHem_Proj;
    Float_t         sumJetPt15_SameHem_Proj;
    Float_t         sumJetPt15_OppHem_Proj;
    Float_t         LepPt0_Proj;
    Float_t         LepPt1_Proj;
    Float_t         LepTrackPt0_Proj;
    Float_t         LepTrackPt1_Proj;
    Int_t           n_SubJet10JVF_OppDilep;
    Int_t           n_SubJet10JVF_CloseDilep;
    Int_t           n_SubJet10JVF_PerpPosDilep;
    Int_t           n_SubJet10JVF_PerpNegDilep;
    Float_t         SumPtSca_SubJet10JVF_OppDilep;
    Float_t         SumPtSca_SubJet10JVF_CloseDilep;
    Float_t         SumPtSca_SubJet10JVF_PerpPosDilep;
    Float_t         SumPtSca_SubJet10JVF_PerpNegDilep;
    Float_t         SumPtVec_SubJet10JVF_OppDilep;
    Float_t         SumPtVec_SubJet10JVF_CloseDilep;
    Float_t         SumPtVec_SubJet10JVF_PerpPosDilep;
    Float_t         SumPtVec_SubJet10JVF_PerpNegDilep;
    Float_t         SumJVFPtSca_SubJet10_OppDilep;
    Float_t         SumJVFPtSca_SubJet10_CloseDilep;
    Float_t         SumJVFPtSca_SubJet10_PerpPosDilep;
    Float_t         SumJVFPtSca_SubJet10_PerpNegDilep;
    Float_t         SumJVFPtVec_SubJet10_OppDilep;
    Float_t         SumJVFPtVec_SubJet10_CloseDilep;
    Float_t         SumJVFPtVec_SubJet10_PerpPosDilep;
    Float_t         SumJVFPtVec_SubJet10_PerpNegDilep;
    Float_t         SumPtVec_SubJet10JVF_OppDilepjets;
    Float_t         SumPtVec_SubJet10JVF_CloseDilepjets;
    Float_t         SumPtVec_SubJet10JVF_PerpPosDilepjets;
    Float_t         SumPtVec_SubJet10JVF_PerpNegDilepjets;
    Float_t         SumJVFPtVec_SubJet10_OppDilepjets;
    Float_t         SumJVFPtVec_SubJet10_CloseDilepjets;
    Float_t         SumJVFPtVec_SubJet10_PerpPosDilepjets;
    Float_t         SumJVFPtVec_SubJet10_PerpNegDilepjets;
    Float_t         SumJVFPtVec_SubJet10_OppDilepjets_OvrlpRem;
    Float_t         SumJVFPtVec_SubJet10_CloseDilepjets_OvrlpRem;
    Float_t         SumJVFPtVec_SubJet10_PerpPosDilepjets_OvrlpRem;
    Float_t         SumJVFPtVec_SubJet10_PerpNegDilepjets_OvrlpRem;
    Int_t           n_Tracks_OppDilep;
    Int_t           n_Tracks_CloseDilep;
    Int_t           n_Tracks_PerpPosDilep;
    Int_t           n_Tracks_PerpNegDilep;
    Float_t         SumPtSca_Tracks_OppDilep;
    Float_t         SumPtSca_Tracks_CloseDilep;
    Float_t         SumPtSca_Tracks_PerpPosDilep;
    Float_t         SumPtSca_Tracks_PerpNegDilep;
    Float_t         SumPtVec_Tracks_OppDilep;
    Float_t         SumPtVec_Tracks_CloseDilep;
    Float_t         SumPtVec_Tracks_PerpPosDilep;
    Float_t         SumPtVec_Tracks_PerpNegDilep;
    Float_t         SumPtVec_TracksOutsideJets_OppDilep;
    Float_t         SumPtVec_TracksOutsideJets_CloseDilep;
    Float_t         SumPtVec_TracksOutsideJets_PerpPosDilep;
    Float_t         SumPtVec_TracksOutsideJets_PerpNegDilep;
    Float_t         lepID0;
    Float_t         lepID1;
    Float_t         lepPt0;
    Float_t         lepPt1;
    Float_t         lepPx0;
    Float_t         lepPx1;
    Float_t         lepPy0;
    Float_t         lepPy1;
    Float_t         lepPz0;
    Float_t         lepPz1;
    Float_t         lepEta0;
    Float_t         lepEta1;
    Float_t         lepPhi0;
    Float_t         lepPhi1;
    Float_t         MlMetLead;
    Float_t         MinMljj;
    Float_t         DeltaPhiljMin;
    Float_t         TR_ratio0;
    Float_t         TR_ratio1;
    Float_t         eoverp0;
    Float_t         eoverp1;
    Float_t         lepEtcone30_0;
    Float_t         lepPtcone30_0;
    Float_t         lepPtcone40_0;
    Float_t         lepz0PV0;
    Float_t         lepsigd0PV0;
    Float_t         lepEtcone30_1;
    Float_t         lepPtcone30_1;
    Float_t         lepPtcone40_1;
    Float_t         lepz0PV1;
    Float_t         lepsigd0PV1;
    Float_t         lepD0_0;
    Float_t         lepD0_1;
    Float_t         lepMagD0_0;
    Float_t         lepMagD0_1;
    Float_t         DRlep0jet;
    Float_t         DRlep1jet;
    Int_t           singleLepTrig;
    Bool_t          lepMatch_EF_mu24i_tight_0;
    Bool_t          lepMatch_EF_mu24i_tight_1;
    Bool_t          lepMatch_EF_mu36_tight_0;
    Bool_t          lepMatch_EF_mu36_tight_1;
    Bool_t          lepMatch_EF_e24vhi_medium1_0;
    Bool_t          lepMatch_EF_e24vhi_medium1_1;
    Bool_t          lepMatch_EF_e60_medium1_0;
    Bool_t          lepMatch_EF_e60_medium1_1;
    Bool_t          lepMatch_EF_e12Tvh_medium1_0;
    Bool_t          lepMatch_EF_e12Tvh_medium1_1;
    Double_t        pileupEventWeight;
    Double_t        pileupEventWeight_094;
    Double_t        pileupEventWeight_080;
    Double_t        pileupEventWeight_090;
    Double_t        pileupEventWeight_088;
    Double_t        pileupEventWeight_075;
    Double_t        pileupEventWeight_103;
    Double_t        mcEventWeight;
    Double_t        WgStarEventWeight;
    Double_t        WgStarEventWeightError;
    Bool_t          overlapWZ;
    Bool_t          passedVBFFilter;
    Bool_t          didEJoverlap;
    Bool_t          didMJoverlap;
    Bool_t          didEEoverlap;
    Bool_t          didEMoverlap;
    Double_t        vertexPosWeight;
    Double_t        trigEventWeight;
    Double_t        lepTrigSFEventWeight;
    Double_t        lepTrigSFEventWeightUp;
    Double_t        lepTrigSFEventWeightDown;
    Double_t        lepTrigSF0EventWeight;
    Double_t        lepTrigSF1EventWeight;
    Double_t        lepTrigSF0Error;
    Double_t        lepTrigSF1Error;
    Double_t        lepSF0EventWeight;
    Double_t        lepSF1EventWeight;
    Double_t        lepSF0Error;
    Double_t        lepSF1Error;
    Double_t        lepSF0ErrorIso;
    Double_t        lepSF1ErrorIso;
    Double_t        lepSF0ErrorSys;
    Double_t        lepSF1ErrorSys;
    Int_t           nJets_Pt20_JetCombNN_80;
    Double_t        JetCombNN20_80_EventWeight;
    Double_t        JetCombNN20_80_BJetWeight;
    Double_t        JetCombNN20_80_CTJetWeight;
    Double_t        JetCombNN20_80_MisTagWeight;
    Double_t        JetCombNN20_80_BJetWeightUp;
    Double_t        JetCombNN20_80_CTJetWeightUp;
    Double_t        JetCombNN20_80_MisTagWeightUp;
    Double_t        JetCombNN20_80_BJetWeightDown;
    Double_t        JetCombNN20_80_CTJetWeightDown;
    Double_t        JetCombNN20_80_MisTagWeightDown;
    Double_t        MV1_75_EventWeight;
    Double_t        MV1_85_EventWeight;
    Double_t        MV1_80_EventWeight;
    Double_t        MV120_85_EventWeight;
    Double_t        MV120_80_EventWeight;
    Double_t        MV120_75_EventWeight;
    Double_t        MV1_75_BJetWeight;
    Double_t        MV1_85_BJetWeight;
    Double_t        MV1_80_BJetWeight;
    Double_t        MV120_85_BJetWeight;
    Double_t        MV120_80_BJetWeight;
    Double_t        MV120_75_BJetWeight;
    Double_t        MV1_75_CTJetWeight;
    Double_t        MV1_85_CTJetWeight;
    Double_t        MV1_80_CTJetWeight;
    Double_t        MV120_85_CTJetWeight;
    Double_t        MV120_80_CTJetWeight;
    Double_t        MV120_75_CTJetWeight;
    Double_t        MV1_75_MisTagWeight;
    Double_t        MV1_85_MisTagWeight;
    Double_t        MV1_80_MisTagWeight;
    Double_t        MV120_85_MisTagWeight;
    Double_t        MV120_80_MisTagWeight;
    Double_t        MV120_75_MisTagWeight;
    Double_t        MV1_85_BJetWeightEV_1_Up;
    Double_t        MV1_85_BJetWeightEV_2_Up;
    Double_t        MV1_85_BJetWeightEV_3_Up;
    Double_t        MV1_85_BJetWeightEV_4_Up;
    Double_t        MV1_85_BJetWeightEV_5_Up;
    Double_t        MV1_85_BJetWeightEV_6_Up;
    Double_t        MV1_85_BJetWeightEV_7_Up;
    Double_t        MV1_85_BJetWeightEV_8_Up;
    Double_t        MV1_85_BJetWeightEV_9_Up;
    Double_t        MV1_85_BJetWeightEV_1_Down;
    Double_t        MV1_85_BJetWeightEV_2_Down;
    Double_t        MV1_85_BJetWeightEV_3_Down;
    Double_t        MV1_85_BJetWeightEV_4_Down;
    Double_t        MV1_85_BJetWeightEV_5_Down;
    Double_t        MV1_85_BJetWeightEV_6_Down;
    Double_t        MV1_85_BJetWeightEV_7_Down;
    Double_t        MV1_85_BJetWeightEV_8_Down;
    Double_t        MV1_85_BJetWeightEV_9_Down;
    Double_t        MV1_80_BJetWeightEV_1_Up;
    Double_t        MV1_80_BJetWeightEV_2_Up;
    Double_t        MV1_80_BJetWeightEV_3_Up;
    Double_t        MV1_80_BJetWeightEV_4_Up;
    Double_t        MV1_80_BJetWeightEV_5_Up;
    Double_t        MV1_80_BJetWeightEV_6_Up;
    Double_t        MV1_80_BJetWeightEV_7_Up;
    Double_t        MV1_80_BJetWeightEV_8_Up;
    Double_t        MV1_80_BJetWeightEV_9_Up;
    Double_t        MV1_80_BJetWeightEV_1_Down;
    Double_t        MV1_80_BJetWeightEV_2_Down;
    Double_t        MV1_80_BJetWeightEV_3_Down;
    Double_t        MV1_80_BJetWeightEV_4_Down;
    Double_t        MV1_80_BJetWeightEV_5_Down;
    Double_t        MV1_80_BJetWeightEV_6_Down;
    Double_t        MV1_80_BJetWeightEV_7_Down;
    Double_t        MV1_80_BJetWeightEV_8_Down;
    Double_t        MV1_80_BJetWeightEV_9_Down;
    Double_t        MV1_75_BJetWeightUp;
    Double_t        MV1_85_BJetWeightUp;
    Double_t        MV1_80_BJetWeightUp;
    Double_t        MV120_80_BJetWeightUp;
    Double_t        MV120_85_BJetWeightUp;
    Double_t        MV120_75_BJetWeightUp;
    Double_t        MV1_75_CTJetWeightUp;
    Double_t        MV1_85_CTJetWeightUp;
    Double_t        MV1_80_CTJetWeightUp;
    Double_t        MV120_85_CTJetWeightUp;
    Double_t        MV120_80_CTJetWeightUp;
    Double_t        MV120_75_CTJetWeightUp;
    Double_t        MV1_75_MisTagWeightUp;
    Double_t        MV1_85_MisTagWeightUp;
    Double_t        MV1_80_MisTagWeightUp;
    Double_t        MV120_85_MisTagWeightUp;
    Double_t        MV120_80_MisTagWeightUp;
    Double_t        MV120_75_MisTagWeightUp;
    Double_t        MV1_75_BJetWeightDown;
    Double_t        MV1_85_BJetWeightDown;
    Double_t        MV1_80_BJetWeightDown;
    Double_t        MV120_85_BJetWeightDown;
    Double_t        MV120_75_BJetWeightDown;
    Double_t        MV1_75_CTJetWeightDown;
    Double_t        MV1_85_CTJetWeightDown;
    Double_t        MV1_80_CTJetWeightDown;
    Double_t        MV120_85_CTJetWeightDown;
    Double_t        MV120_75_CTJetWeightDown;
    Double_t        MV1_75_MisTagWeightDown;
    Double_t        MV1_85_MisTagWeightDown;
    Double_t        MV1_80_MisTagWeightDown;
    Double_t        MV120_85_MisTagWeightDown;
    Double_t        MV120_80_MisTagWeightDown;
    Double_t        MV120_75_MisTagWeightDown;
    Int_t           nJets_Pt25_MV1_75;
    Int_t           nJets_Pt25_MV1_85;
    Int_t           nJets_Pt25_MV1_80;
    Int_t           nJets_Pt20_MV1_75;
    Int_t           nJets_Pt20_MV1_85;
    Int_t           nJets_Pt20_MV1_80;
    Int_t           nJets_Pt20;
    Float_t         nJetsProbing_JetCombNN_80;
    Float_t         nJetsProbing_JetCombNN_70;
    Float_t         nJetsProbing_MV1_85;
    Float_t         nJetsProbing_MV1_80;
    Float_t         nJetsProbing_MV1_75;
    Int_t           Nvxp;
    Float_t         centralJetVeto_leadPt;
    Float_t         centralJetVeto_leadPt_central;
    Float_t         centralJetVeto_leadPt_forward;
    Float_t         jetPt0;
    Float_t         jetPt1;
    Float_t         jetEta0;
    Float_t         jetEta1;
    Float_t         jetE0;
    Float_t         jetE1;
    Float_t         jetY0;
    Float_t         jetY1;
    Float_t         jetM0;
    Float_t         jetM1;
    Float_t         jetPhi0;
    Float_t         jetPhi1;
    Float_t         jetMV10;
    Float_t         jetMV11;
    Float_t         jetCombNN0;
    Float_t         jetCombNN1;
    Float_t         z0Vtx;
    Int_t           bpos;
    Int_t           blen;
    Int_t           bgap;
    Float_t         BDPhill;
    Float_t         BDPsill;
    Float_t         BpsiLep0;
    Float_t         BpsiLep1;
    Float_t         BPLeadLep;
    Float_t         BPSubLeadLep;
    Float_t         BELeadNeu;
    Float_t         BESubLeadNeu;
    Float_t         MWLead;
    Float_t         MWSubLead;
    Float_t         Hpt;
    UInt_t          RunNumber;
    UInt_t          EventNumber;
    UInt_t          lbn;
    UInt_t          bcid;
    Float_t         actualIntPerXing;
    Float_t         averageIntPerXing;
    UInt_t          mc_channel_number;
    UInt_t          larError;
    Int_t           top_hfor_type;
    Float_t         MET_CellOut_Eflow_STVF_phi;
    Float_t         MET_CellOut_Eflow_STVF_et;
    Float_t         MET_CellOut_Eflow_STVF_sumet;
    Float_t         MET_CellOut_Eflow_JetArea_phi;
    Float_t         MET_CellOut_Eflow_JetArea_et;
    Float_t         MET_CellOut_Eflow_JetArea_sumet;
    Float_t         MET_CellOut_Eflow_JetAreaJVF_phi;
    Float_t         MET_CellOut_Eflow_JetAreaJVF_et;
    Float_t         MET_CellOut_Eflow_JetAreaJVF_sumet;
    Float_t         MET_CellOut_Eflow_JetAreaRhoEta5JVF_phi;
    Float_t         MET_CellOut_Eflow_JetAreaRhoEta5JVF_et;
    Float_t         MET_CellOut_Eflow_JetAreaRhoEta5JVF_sumet;
    Float_t         MET_CellOut_Eflow_phi;
    Float_t         MET_CellOut_Eflow_et;
    Float_t         MET_CellOut_Eflow_sumet;
    Float_t         MET_Truth_NonInt_phi;
    Float_t         MET_Truth_NonInt_et;
    Float_t         MET_Truth_NonInt_sumet;
    Int_t           in_jet_n;
    vector<float>   *in_jet_pt;
    vector<float>   *in_jet_eta;
    vector<float>   *in_jet_phi;
    vector<float>   *in_jet_jvtxf;
    Int_t           m_mu_n;
    vector<float>   *m_mu_pt;
    vector<float>   *m_mu_matchchi2;
    vector<int>     *m_mu_matchndof;
    vector<float>   *m_mu_energyLossPar;
    vector<float>   *m_mu_etCore;
    vector<float>   *m_mu_id_theta_exPV;
    vector<float>   *m_mu_id_qoverp_exPV;
    vector<float>   *m_mu_me_theta_exPV;
    vector<float>   *m_mu_me_qoverp_exPV;
    vector<vector<float> > *m_mu_MET_wpx;
    vector<vector<float> > *m_mu_MET_wpy;
    vector<vector<float> > *m_mu_MET_wet;
    Int_t           m_el_n;
    vector<vector<float> > *m_el_MET_wpx;
    vector<vector<float> > *m_el_MET_wpy;
    vector<vector<float> > *m_el_MET_wet;
    Int_t           m_jetTruth_n;
    vector<float>   *m_jetTruth_E;
    vector<float>   *m_jetTruth_pt;
    vector<float>   *m_jetTruth_eta;
    vector<float>   *m_jetTruth_phi;
    Int_t           m_jet_n;
    vector<float>   *m_jet_E;
    vector<float>   *m_jet_pt;
    vector<float>   *m_jet_eta;
    vector<float>   *m_jet_phi;
    vector<float>   *m_jet_LArQuality;
    vector<float>   *m_jet_sumPtTrk;
    vector<float>   *m_jet_emfrac;
    vector<float>   *m_jet_jvtxf;
    vector<float>   *m_jet_flavor_weight_MV1;
    vector<int>     *m_jet_flavor_truth_label;
    Int_t           m_vxp_n;
    vector<int>     *m_vxp_nTracks;
    Int_t           cen_jet_n;
    vector<float>   *cen_jet_E;
    vector<float>   *cen_jet_pt;
    vector<float>   *cen_jet_eta;
    vector<float>   *cen_jet_phi;
    vector<float>   *cen_jet_sumPtTrk;
    vector<float>   *cen_jet_jvtxf;
    vector<float>   *cen_jet_flavor_weight_JetFitterCOMBNN;
    vector<int>     *cen_jet_flavor_truth_label;
    vector<int>     *m_mcevt_pdf_id1;
    vector<int>     *m_mcevt_pdf_id2;
    vector<double>  *m_mcevt_pdf_x1;
    vector<double>  *m_mcevt_pdf_x2;
    vector<double>  *m_mcevt_pdf_scale;

    // List of branches
    TBranch        *b_higgsPt;   //!
    TBranch        *b_isLowPtCand;   //!
    TBranch        *b_isBlinded;   //!
    TBranch        *b_Mll;   //!
    TBranch        *b_MT;   //!
    TBranch        *b_MTtruth;   //!
    TBranch        *b_MTup;   //!
    TBranch        *b_MTdown;   //!
    TBranch        *b_MTrans;   //!
    TBranch        *b_gammaStar_weight;   //!
    TBranch        *b_m_gammaStar;   //!
    TBranch        *b_smt_muon_pt;   //!
    TBranch        *b_smt_muon_sf;   //!
    TBranch        *b_smt_muon_mistag_sf_up;   //!
    TBranch        *b_smt_muon_mistag_sf_dw;   //!
    TBranch        *b_smt_muon_chi2_sf_up;   //!
    TBranch        *b_smt_muon_chi2_sf_dw;   //!
    TBranch        *b_smt_muon_id_sf_up;   //!
    TBranch        *b_smt_muon_id_sf_dw;   //!
    TBranch        *b_Ptll;   //!
    TBranch        *b_Ptlljets;   //!
    TBranch        *b_DPhill;   //!
    TBranch        *b_DPhillMET;   //!
    TBranch        *b_DRll;   //!
    TBranch        *b_DEtall;   //!
    TBranch        *b_Yll;   //!
    TBranch        *b_Pttot;   //!
    TBranch        *b_Mjj;   //!
    TBranch        *b_Ptjj;   //!
    TBranch        *b_DPhijj;   //!
    TBranch        *b_DRjj;   //!
    TBranch        *b_DEtajj;   //!
    TBranch        *b_DYjj;   //!
    TBranch        *b_Mtt;   //!
    TBranch        *b_x1;   //!
    TBranch        *b_x2;   //!
    TBranch        *b_BDT_1jet_4vars;   //!
    TBranch        *b_BLayer_hit0;   //!
    TBranch        *b_BLayer_hit1;   //!
    TBranch        *b_conv0;   //!
    TBranch        *b_conv1;   //!
    TBranch        *b_RandomRunNumber;   //!
    TBranch        *b_DPhiSubLeadLepMET;   //!
    TBranch        *b_DPhiLeadLepMET;   //!
    TBranch        *b_MinDPhi;   //!
    TBranch        *b_MinDPhi_noJVF;   //!
    TBranch        *b_MET;   //!
    TBranch        *b_MET_x;   //!
    TBranch        *b_MET_y;   //!
    TBranch        *b_MET_phi;   //!
    TBranch        *b_METRel;   //!
    TBranch        *b_METRel_x;   //!
    TBranch        *b_METRel_y;   //!
    TBranch        *b_METRel_noJets;   //!
    TBranch        *b_DPhiSubLeadLepMET_STVF;   //!
    TBranch        *b_DPhiLeadLepMET_STVF;   //!
    TBranch        *b_MinDPhi_STVF;   //!
    TBranch        *b_MinDPhi_noJVF_STVF;   //!
    TBranch        *b_MT_STVF;   //!
    TBranch        *b_MTrans_STVF;   //!
    TBranch        *b_Mtt_STVF;   //!
    TBranch        *b_x1_STVF;   //!
    TBranch        *b_x2_STVF;   //!
    TBranch        *b_Pttot_STVF;   //!
    TBranch        *b_MET_STVF;   //!
    TBranch        *b_MET_x_STVF;   //!
    TBranch        *b_MET_y_STVF;   //!
    TBranch        *b_MET_phi_STVF;   //!
    TBranch        *b_METRel_STVF;   //!
    TBranch        *b_METRel_x_STVF;   //!
    TBranch        *b_METRel_y_STVF;   //!
    TBranch        *b_METRel_noJets_STVF;   //!
    TBranch        *b_MET_TrackHWW_Cl;   //!
    TBranch        *b_MET_x_TrackHWW_Cl;   //!
    TBranch        *b_MET_y_TrackHWW_Cl;   //!
    TBranch        *b_MET_phi_TrackHWW_Cl;   //!
    TBranch        *b_MinDPhi_TrackHWW_Cl;   //!
    TBranch        *b_MinDPhi_noJVF_TrackHWW_Cl;   //!
    TBranch        *b_METRel_Track_HWW_Cl;   //!
    TBranch        *b_METRel_x_TrackHWW_Cl;   //!
    TBranch        *b_METRel_y_TrackHWW_Cl;   //!
    TBranch        *b_DPhi_CaloTrackHWW_Cl;   //!
    TBranch        *b_MT_TrackHWW_Cl;   //!
    TBranch        *b_PtTrack_TrackHWW_Cl;   //!
    TBranch        *b_MTrans_TrackHWW_Cl;   //!
    TBranch        *b_Mtt_TrackHWW_Cl;   //!
    TBranch        *b_x1_TrackHWW_Cl;   //!
    TBranch        *b_x2_TrackHWW_Cl;   //!
    TBranch        *b_DPhiSubLeadLepMET_TrackHWW_Cl;   //!
    TBranch        *b_DPhiLeadLepMET_TrackHWW_Cl;   //!
    TBranch        *b_Pttot_TrackHWW_Cl;   //!
    TBranch        *b_METRel_noJets_TrackHWW_Cl;   //!
    TBranch        *b_HighTrackPt_TrackHWW_Cl;   //!
    TBranch        *b_MET_TrackHWW_Nmu;   //!
    TBranch        *b_MET_TrackHWW_NmuMatched;   //!
    TBranch        *b_MET_TrackHWW_Nel;   //!
    TBranch        *b_MET_TrackHWW_NelMatched;   //!
    TBranch        *b_MET_TrackHWW_Ntracks;   //!
    TBranch        *b_sumTrackPt_TotHem_Proj;   //!
    TBranch        *b_sumTrackPt_SameHem_Proj;   //!
    TBranch        *b_sumTrackPt_OppHem_Proj;   //!
    TBranch        *b_sumJetPt15_TotHem_Proj;   //!
    TBranch        *b_sumJetPt15_SameHem_Proj;   //!
    TBranch        *b_sumJetPt15_OppHem_Proj;   //!
    TBranch        *b_LepPt0_Proj;   //!
    TBranch        *b_LepPt1_Proj;   //!
    TBranch        *b_LepTrackPt0_Proj;   //!
    TBranch        *b_LepTrackPt1_Proj;   //!
    TBranch        *b_n_SubJet10JVF_OppDilep;   //!
    TBranch        *b_n_SubJet10JVF_CloseDilep;   //!
    TBranch        *b_n_SubJet10JVF_PerpPosDilep;   //!
    TBranch        *b_n_SubJet10JVF_PerpNegDilep;   //!
    TBranch        *b_SumPtSca_SubJet10JVF_OppDilep;   //!
    TBranch        *b_SumPtSca_SubJet10JVF_CloseDilep;   //!
    TBranch        *b_SumPtSca_SubJet10JVF_PerpPosDilep;   //!
    TBranch        *b_SumPtSca_SubJet10JVF_PerpNegDilep;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_OppDilep;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_CloseDilep;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_PerpPosDilep;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_PerpNegDilep;   //!
    TBranch        *b_SumJVFPtSca_SubJet10_OppDilep;   //!
    TBranch        *b_SumJVFPtSca_SubJet10_CloseDilep;   //!
    TBranch        *b_SumJVFPtSca_SubJet10_PerpPosDilep;   //!
    TBranch        *b_SumJVFPtSca_SubJet10_PerpNegDilep;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_OppDilep;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_CloseDilep;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpPosDilep;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpNegDilep;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_OppDilepjets;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_CloseDilepjets;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_PerpPosDilepjets;   //!
    TBranch        *b_SumPtVec_SubJet10JVF_PerpNegDilepjets;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_OppDilepjets;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_CloseDilepjets;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpPosDilepjets;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpNegDilepjets;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_OppDilepjets_OvrlpRem;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_CloseDilepjets_OvrlpRem;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpPosDilepjets_OvrlpRem;   //!
    TBranch        *b_SumJVFPtVec_SubJet10_PerpNegDilepjets_OvrlpRem;   //!
    TBranch        *b_n_Tracks_OppDilep;   //!
    TBranch        *b_n_Tracks_CloseDilep;   //!
    TBranch        *b_n_Tracks_PerpPosDilep;   //!
    TBranch        *b_n_Tracks_PerpNegDilep;   //!
    TBranch        *b_SumPtSca_Tracks_OppDilep;   //!
    TBranch        *b_SumPtSca_Tracks_CloseDilep;   //!
    TBranch        *b_SumPtSca_Tracks_PerpPosDilep;   //!
    TBranch        *b_SumPtSca_Tracks_PerpNegDilep;   //!
    TBranch        *b_SumPtVec_Tracks_OppDilep;   //!
    TBranch        *b_SumPtVec_Tracks_CloseDilep;   //!
    TBranch        *b_SumPtVec_Tracks_PerpPosDilep;   //!
    TBranch        *b_SumPtVec_Tracks_PerpNegDilep;   //!
    TBranch        *b_SumPtVec_TracksOutsideJets_OppDilep;   //!
    TBranch        *b_SumPtVec_TracksOutsideJets_CloseDilep;   //!
    TBranch        *b_SumPtVec_TracksOutsideJets_PerpPosDilep;   //!
    TBranch        *b_SumPtVec_TracksOutsideJets_PerpNegDilep;   //!
    TBranch        *b_lepID0;   //!
    TBranch        *b_lepID1;   //!
    TBranch        *b_lepPt0;   //!
    TBranch        *b_lepPt1;   //!
    TBranch        *b_lepPx0;   //!
    TBranch        *b_lepPx1;   //!
    TBranch        *b_lepPy0;   //!
    TBranch        *b_lepPy1;   //!
    TBranch        *b_lepPz0;   //!
    TBranch        *b_lepPz1;   //!
    TBranch        *b_lepEta0;   //!
    TBranch        *b_lepEta1;   //!
    TBranch        *b_lepPhi0;   //!
    TBranch        *b_lepPhi1;   //!
    TBranch        *b_MlMetLead;   //!
    TBranch        *b_MinMljj;   //!
    TBranch        *b_DeltaPhiljMin;   //!
    TBranch        *b_TR_ratio0;   //!
    TBranch        *b_TR_ratio1;   //!
    TBranch        *b_eoverp0;   //!
    TBranch        *b_eoverp1;   //!
    TBranch        *b_lepEtcone30_0;   //!
    TBranch        *b_lepPtcone30_0;   //!
    TBranch        *b_lepPtcone40_0;   //!
    TBranch        *b_lepz0PV0;   //!
    TBranch        *b_lepsigd0PV0;   //!
    TBranch        *b_lepEtcone30_1;   //!
    TBranch        *b_lepPtcone30_1;   //!
    TBranch        *b_lepPtcone40_1;   //!
    TBranch        *b_lepz0PV1;   //!
    TBranch        *b_lepsigd0PV1;   //!
    TBranch        *b_lepD0_0;   //!
    TBranch        *b_lepD0_1;   //!
    TBranch        *b_lepMagD0_0;   //!
    TBranch        *b_lepMagD0_1;   //!
    TBranch        *b_DRlep0jet;   //!
    TBranch        *b_DRlep1jet;   //!
    TBranch        *b_singleLepTrig;   //!
    TBranch        *b_lepMatch_EF_mu24i_tight_0;   //!
    TBranch        *b_lepMatch_EF_mu24i_tight_1;   //!
    TBranch        *b_lepMatch_EF_mu36_tight_0;   //!
    TBranch        *b_lepMatch_EF_mu36_tight_1;   //!
    TBranch        *b_lepMatch_EF_e24vhi_medium1_0;   //!
    TBranch        *b_lepMatch_EF_e24vhi_medium1_1;   //!
    TBranch        *b_lepMatch_EF_e60_medium1_0;   //!
    TBranch        *b_lepMatch_EF_e60_medium1_1;   //!
    TBranch        *b_lepMatch_EF_e12Tvh_medium1_0;   //!
    TBranch        *b_lepMatch_EF_e12Tvh_medium1_1;   //!
    TBranch        *b_pileupEventWeight;   //!
    TBranch        *b_pileupEventWeight_094;   //!
    TBranch        *b_pileupEventWeight_080;   //!
    TBranch        *b_pileupEventWeight_090;   //!
    TBranch        *b_pileupEventWeight_088;   //!
    TBranch        *b_pileupEventWeight_075;   //!
    TBranch        *b_pileupEventWeight_103;   //!
    TBranch        *b_mcEventWeight;   //!
    TBranch        *b_WgStarEventWeight;   //!
    TBranch        *b_WgStarEventWeightError;   //!
    TBranch        *b_overlapWZ;   //!
    TBranch        *b_passedVBFFilter;   //!
    TBranch        *b_didEJoverlap;   //!
    TBranch        *b_didMJoverlap;   //!
    TBranch        *b_didEEoverlap;   //!
    TBranch        *b_didEMoverlap;   //!
    TBranch        *b_vertexPosWeight;   //!
    TBranch        *b_trigEventWeight;   //!
    TBranch        *b_lepTrigSFEventWeight;   //!
    TBranch        *b_lepTrigSFEventWeightUp;   //!
    TBranch        *b_lepTrigSFEventWeightDown;   //!
    TBranch        *b_lepTrigSF0EventWeight;   //!
    TBranch        *b_lepTrigSF1EventWeight;   //!
    TBranch        *b_lepTrigSF0Error;   //!
    TBranch        *b_lepTrigSF1Error;   //!
    TBranch        *b_lepSF0EventWeight;   //!
    TBranch        *b_lepSF1EventWeight;   //!
    TBranch        *b_lepSF0Error;   //!
    TBranch        *b_lepSF1Error;   //!
    TBranch        *b_lepSF0ErrorIso;   //!
    TBranch        *b_lepSF1ErrorIso;   //!
    TBranch        *b_lepSF0ErrorSys;   //!
    TBranch        *b_lepSF1ErrorSys;   //!
    TBranch        *b_nJets_Pt20_JetCombNN_80;   //!
    TBranch        *b_JetCombNN20_80_EventWeight;   //!
    TBranch        *b_JetCombNN20_80_BJetWeight;   //!
    TBranch        *b_JetCombNN20_80_CTJetWeight;   //!
    TBranch        *b_JetCombNN20_80_MisTagWeight;   //!
    TBranch        *b_JetCombNN20_80_BJetWeightUp;   //!
    TBranch        *b_JetCombNN20_80_CTJetWeightUp;   //!
    TBranch        *b_JetCombNN20_80_MisTagWeightUp;   //!
    TBranch        *b_JetCombNN20_80_BJetWeightDown;   //!
    TBranch        *b_JetCombNN20_80_CTJetWeightDown;   //!
    TBranch        *b_JetCombNN20_80_MisTagWeightDown;   //!
    TBranch        *b_MV1_75_EventWeight;   //!
    TBranch        *b_MV1_85_EventWeight;   //!
    TBranch        *b_MV1_80_EventWeight;   //!
    TBranch        *b_MV120_85_EventWeight;   //!
    TBranch        *b_MV120_80_EventWeight;   //!
    TBranch        *b_MV120_75_EventWeight;   //!
    TBranch        *b_MV1_75_BJetWeight;   //!
    TBranch        *b_MV1_85_BJetWeight;   //!
    TBranch        *b_MV1_80_BJetWeight;   //!
    TBranch        *b_MV120_85_BJetWeight;   //!
    TBranch        *b_MV120_80_BJetWeight;   //!
    TBranch        *b_MV120_75_BJetWeight;   //!
    TBranch        *b_MV1_75_CTJetWeight;   //!
    TBranch        *b_MV1_85_CTJetWeight;   //!
    TBranch        *b_MV1_80_CTJetWeight;   //!
    TBranch        *b_MV120_85_CTJetWeight;   //!
    TBranch        *b_MV120_80_CTJetWeight;   //!
    TBranch        *b_MV120_75_CTJetWeight;   //!
    TBranch        *b_MV1_75_MisTagWeight;   //!
    TBranch        *b_MV1_85_MisTagWeight;   //!
    TBranch        *b_MV1_80_MisTagWeight;   //!
    TBranch        *b_MV120_85_MisTagWeight;   //!
    TBranch        *b_MV120_80_MisTagWeight;   //!
    TBranch        *b_MV120_75_MisTagWeight;   //!
    TBranch        *b_MV1_85_BJetWeightEV_1_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_2_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_3_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_4_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_5_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_6_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_7_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_8_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_9_Up;   //!
    TBranch        *b_MV1_85_BJetWeightEV_1_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_2_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_3_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_4_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_5_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_6_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_7_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_8_Down;   //!
    TBranch        *b_MV1_85_BJetWeightEV_9_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_1_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_2_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_3_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_4_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_5_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_6_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_7_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_8_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_9_Up;   //!
    TBranch        *b_MV1_80_BJetWeightEV_1_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_2_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_3_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_4_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_5_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_6_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_7_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_8_Down;   //!
    TBranch        *b_MV1_80_BJetWeightEV_9_Down;   //!
    TBranch        *b_MV1_75_BJetWeightUp;   //!
    TBranch        *b_MV1_85_BJetWeightUp;   //!
    TBranch        *b_MV1_80_BJetWeightUp;   //!
    TBranch        *b_MV120_80_BJetWeightUp;   //!
    TBranch        *b_MV120_85_BJetWeightUp;   //!
    TBranch        *b_MV120_75_BJetWeightUp;   //!
    TBranch        *b_MV1_75_CTJetWeightUp;   //!
    TBranch        *b_MV1_85_CTJetWeightUp;   //!
    TBranch        *b_MV1_80_CTJetWeightUp;   //!
    TBranch        *b_MV120_85_CTJetWeightUp;   //!
    TBranch        *b_MV120_80_CTJetWeightUp;   //!
    TBranch        *b_MV120_75_CTJetWeightUp;   //!
    TBranch        *b_MV1_75_MisTagWeightUp;   //!
    TBranch        *b_MV1_85_MisTagWeightUp;   //!
    TBranch        *b_MV1_80_MisTagWeightUp;   //!
    TBranch        *b_MV120_85_MisTagWeightUp;   //!
    TBranch        *b_MV120_80_MisTagWeightUp;   //!
    TBranch        *b_MV120_75_MisTagWeightUp;   //!
    TBranch        *b_MV1_75_BJetWeightDown;   //!
    TBranch        *b_MV1_85_BJetWeightDown;   //!
    TBranch        *b_MV1_80_BJetWeightDown;   //!
    TBranch        *b_MV120_85_BJetWeightDown;   //!
    TBranch        *b_MV120_75_BJetWeightDown;   //!
    TBranch        *b_MV1_75_CTJetWeightDown;   //!
    TBranch        *b_MV1_85_CTJetWeightDown;   //!
    TBranch        *b_MV1_80_CTJetWeightDown;   //!
    TBranch        *b_MV120_85_CTJetWeightDown;   //!
    TBranch        *b_MV120_75_CTJetWeightDown;   //!
    TBranch        *b_MV1_75_MisTagWeightDown;   //!
    TBranch        *b_MV1_85_MisTagWeightDown;   //!
    TBranch        *b_MV1_80_MisTagWeightDown;   //!
    TBranch        *b_MV120_85_MisTagWeightDown;   //!
    TBranch        *b_MV120_80_MisTagWeightDown;   //!
    TBranch        *b_MV120_75_MisTagWeightDown;   //!
    TBranch        *b_nJets_Pt25_MV1_75;   //!
    TBranch        *b_nJets_Pt25_MV1_85;   //!
    TBranch        *b_nJets_Pt25_MV1_80;   //!
    TBranch        *b_nJets_Pt20_MV1_75;   //!
    TBranch        *b_nJets_Pt20_MV1_85;   //!
    TBranch        *b_nJets_Pt20_MV1_80;   //!
    TBranch        *b_nJets_Pt20;   //!
    TBranch        *b_nJetsProbing_JetCombNN_80;   //!
    TBranch        *b_nJetsProbing_JetCombNN_70;   //!
    TBranch        *b_nJetsProbing_MV1_85;   //!
    TBranch        *b_nJetsProbing_MV1_80;   //!
    TBranch        *b_nJetsProbing_MV1_75;   //!
    TBranch        *b_Nvxp;   //!
    TBranch        *b_centralJetVeto_leadPt;   //!
    TBranch        *b_centralJetVeto_leadPt_central;   //!
    TBranch        *b_centralJetVeto_leadPt_forward;   //!
    TBranch        *b_jetPt0;   //!
    TBranch        *b_jetPt1;   //!
    TBranch        *b_jetEta0;   //!
    TBranch        *b_jetEta1;   //!
    TBranch        *b_jetE0;   //!
    TBranch        *b_jetE1;   //!
    TBranch        *b_jetY0;   //!
    TBranch        *b_jetY1;   //!
    TBranch        *b_jetM0;   //!
    TBranch        *b_jetM1;   //!
    TBranch        *b_jetPhi0;   //!
    TBranch        *b_jetPhi1;   //!
    TBranch        *b_jetMV10;   //!
    TBranch        *b_jetMV11;   //!
    TBranch        *b_jetCombNN0;   //!
    TBranch        *b_jetCombNN1;   //!
    TBranch        *b_z0Vtx;   //!
    TBranch        *b_bpos;   //!
    TBranch        *b_blen;   //!
    TBranch        *b_bgap;   //!
    TBranch        *b_BDPhill;   //!
    TBranch        *b_BDPsill;   //!
    TBranch        *b_BpsiLep0;   //!
    TBranch        *b_BpsiLep1;   //!
    TBranch        *b_BPLeadLep;   //!
    TBranch        *b_BPSubLeadLep;   //!
    TBranch        *b_BELeadNeu;   //!
    TBranch        *b_BESubLeadNeu;   //!
    TBranch        *b_MWLead;   //!
    TBranch        *b_MWSubLead;   //!
    TBranch        *b_Hpt;   //!
    TBranch        *b_RunNumber;   //!
    TBranch        *b_EventNumber;   //!
    TBranch        *b_lbn;   //!
    TBranch        *b_bcid;   //!
    TBranch        *b_actualIntPerXing;   //!
    TBranch        *b_averageIntPerXing;   //!
    TBranch        *b_mc_channel_number;   //!
    TBranch        *b_larError;   //!
    TBranch        *b_top_hfor_type;   //!
    TBranch        *b_MET_CellOut_Eflow_STVF_phi;   //!
    TBranch        *b_MET_CellOut_Eflow_STVF_et;   //!
    TBranch        *b_MET_CellOut_Eflow_STVF_sumet;   //!
    TBranch        *b_MET_CellOut_Eflow_JetArea_phi;   //!
    TBranch        *b_MET_CellOut_Eflow_JetArea_et;   //!
    TBranch        *b_MET_CellOut_Eflow_JetArea_sumet;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaJVF_phi;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaJVF_et;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaJVF_sumet;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_phi;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_et;   //!
    TBranch        *b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_sumet;   //!
    TBranch        *b_MET_CellOut_Eflow_phi;   //!
    TBranch        *b_MET_CellOut_Eflow_et;   //!
    TBranch        *b_MET_CellOut_Eflow_sumet;   //!
    TBranch        *b_MET_Truth_NonInt_phi;   //!
    TBranch        *b_MET_Truth_NonInt_et;   //!
    TBranch        *b_MET_Truth_NonInt_sumet;   //!
    TBranch        *b_in_jet_n;   //!
    TBranch        *b_in_jet_pt;   //!
    TBranch        *b_in_jet_eta;   //!
    TBranch        *b_in_jet_phi;   //!
    TBranch        *b_in_jet_jvtxf;   //!
    TBranch        *b_m_mu_n;   //!
    TBranch        *b_m_mu_pt;   //!
    TBranch        *b_m_mu_matchchi2;   //!
    TBranch        *b_m_mu_matchndof;   //!
    TBranch        *b_m_mu_energyLossPar;   //!
    TBranch        *b_m_mu_etCore;   //!
    TBranch        *b_m_mu_id_theta_exPV;   //!
    TBranch        *b_m_mu_id_qoverp_exPV;   //!
    TBranch        *b_m_mu_me_theta_exPV;   //!
    TBranch        *b_m_mu_me_qoverp_exPV;   //!
    TBranch        *b_m_mu_MET_wpx;   //!
    TBranch        *b_m_mu_MET_wpy;   //!
    TBranch        *b_m_mu_MET_wet;   //!
    TBranch        *b_m_el_n;   //!
    TBranch        *b_m_el_MET_wpx;   //!
    TBranch        *b_m_el_MET_wpy;   //!
    TBranch        *b_m_el_MET_wet;   //!
    TBranch        *b_m_jetTruth_n;   //!
    TBranch        *b_m_jetTruth_E;   //!
    TBranch        *b_m_jetTruth_pt;   //!
    TBranch        *b_m_jetTruth_eta;   //!
    TBranch        *b_m_jetTruth_phi;   //!
    TBranch        *b_m_jet_n;   //!
    TBranch        *b_m_jet_E;   //!
    TBranch        *b_m_jet_pt;   //!
    TBranch        *b_m_jet_eta;   //!
    TBranch        *b_m_jet_phi;   //!
    TBranch        *b_m_jet_LArQuality;   //!
    TBranch        *b_m_jet_sumPtTrk;   //!
    TBranch        *b_m_jet_emfrac;   //!
    TBranch        *b_m_jet_jvtxf;   //!
    TBranch        *b_m_jet_flavor_weight_MV1;   //!
    TBranch        *b_m_jet_flavor_truth_label;   //!
    TBranch        *b_m_vxp_n;   //!
    TBranch        *b_m_vxp_nTracks;   //!
    TBranch        *b_cen_jet_n;   //!
    TBranch        *b_cen_jet_E;   //!
    TBranch        *b_cen_jet_pt;   //!
    TBranch        *b_cen_jet_eta;   //!
    TBranch        *b_cen_jet_phi;   //!
    TBranch        *b_cen_jet_sumPtTrk;   //!
    TBranch        *b_cen_jet_jvtxf;   //!
    TBranch        *b_cen_jet_flavor_weight_JetFitterCOMBNN;   //!
    TBranch        *b_cen_jet_flavor_truth_label;   //!
    TBranch        *b_m_mcevt_pdf_id1;   //!
    TBranch        *b_m_mcevt_pdf_id2;   //!
    TBranch        *b_m_mcevt_pdf_x1;   //!
    TBranch        *b_m_mcevt_pdf_x2;   //!
    TBranch        *b_m_mcevt_pdf_scale;   //!

    MyAna(TTree *tree=0);
    virtual ~MyAna();
    virtual Int_t    Cut(Long64_t entry);
    virtual Int_t    GetEntry(Long64_t entry);
    virtual Long64_t LoadTree(Long64_t entry);
    virtual void     Init(TTree *tree);
    virtual void     Loop();
    virtual Bool_t   Notify();
    virtual void     Show(Long64_t entry = -1);
    virtual void     Cutflow();
    void             FillHists(vector<TH1F *> histograms,Double_t weight);
    vector<Bool_t>   SameSignDilepton();
    vector<Bool_t>   OppSignDilepton();
    void             CreateNewTree();
    vector<TLorentzVector> MakeJet4Vectors();
    vector<TLorentzVector> MakeLep4Vectors();
    Double_t         EventWeight(Long64_t nentries);
};

#endif

#ifdef MyAna_cxx
MyAna::MyAna(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("161305.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("161305.root");
    }
    f->GetObject("HWWTree_me",tree);

  }
  Init(tree);
}

MyAna::~MyAna()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t MyAna::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t MyAna::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
    Notify();
  }
  return centry;
}

void MyAna::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  // Set object pointer
  in_jet_pt = 0;
  in_jet_eta = 0;
  in_jet_phi = 0;
  in_jet_jvtxf = 0;
  m_mu_pt = 0;
  m_mu_matchchi2 = 0;
  m_mu_matchndof = 0;
  m_mu_energyLossPar = 0;
  m_mu_etCore = 0;
  m_mu_id_theta_exPV = 0;
  m_mu_id_qoverp_exPV = 0;
  m_mu_me_theta_exPV = 0;
  m_mu_me_qoverp_exPV = 0;
  m_mu_MET_wpx = 0;
  m_mu_MET_wpy = 0;
  m_mu_MET_wet = 0;
  m_el_MET_wpx = 0;
  m_el_MET_wpy = 0;
  m_el_MET_wet = 0;
  m_jetTruth_E = 0;
  m_jetTruth_pt = 0;
  m_jetTruth_eta = 0;
  m_jetTruth_phi = 0;
  m_jet_E = 0;
  m_jet_pt = 0;
  m_jet_eta = 0;
  m_jet_phi = 0;
  m_jet_LArQuality = 0;
  m_jet_sumPtTrk = 0;
  m_jet_emfrac = 0;
  m_jet_jvtxf = 0;
  m_jet_flavor_weight_MV1 = 0;
  m_jet_flavor_truth_label = 0;
  m_vxp_nTracks = 0;
  cen_jet_E = 0;
  cen_jet_pt = 0;
  cen_jet_eta = 0;
  cen_jet_phi = 0;
  cen_jet_sumPtTrk = 0;
  cen_jet_jvtxf = 0;
  cen_jet_flavor_weight_JetFitterCOMBNN = 0;
  cen_jet_flavor_truth_label = 0;
  m_mcevt_pdf_id1 = 0;
  m_mcevt_pdf_id2 = 0;
  m_mcevt_pdf_x1 = 0;
  m_mcevt_pdf_x2 = 0;
  m_mcevt_pdf_scale = 0;
  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("higgsPt", &higgsPt, &b_higgsPt);
  fChain->SetBranchAddress("isLowPtCand", &isLowPtCand, &b_isLowPtCand);
  fChain->SetBranchAddress("isBlinded", &isBlinded, &b_isBlinded);
  fChain->SetBranchAddress("Mll", &Mll, &b_Mll);
  fChain->SetBranchAddress("MT", &MT, &b_MT);
  fChain->SetBranchAddress("MTtruth", &MTtruth, &b_MTtruth);
  fChain->SetBranchAddress("MTup", &MTup, &b_MTup);
  fChain->SetBranchAddress("MTdown", &MTdown, &b_MTdown);
  fChain->SetBranchAddress("MTrans", &MTrans, &b_MTrans);
  fChain->SetBranchAddress("gammaStar_weight", &gammaStar_weight, &b_gammaStar_weight);
  fChain->SetBranchAddress("m_gammaStar", &m_gammaStar, &b_m_gammaStar);
  fChain->SetBranchAddress("smt_muon_pt", &smt_muon_pt, &b_smt_muon_pt);
  fChain->SetBranchAddress("smt_muon_sf", &smt_muon_sf, &b_smt_muon_sf);
  fChain->SetBranchAddress("smt_muon_mistag_sf_up", &smt_muon_mistag_sf_up, &b_smt_muon_mistag_sf_up);
  fChain->SetBranchAddress("smt_muon_mistag_sf_dw", &smt_muon_mistag_sf_dw, &b_smt_muon_mistag_sf_dw);
  fChain->SetBranchAddress("smt_muon_chi2_sf_up", &smt_muon_chi2_sf_up, &b_smt_muon_chi2_sf_up);
  fChain->SetBranchAddress("smt_muon_chi2_sf_dw", &smt_muon_chi2_sf_dw, &b_smt_muon_chi2_sf_dw);
  fChain->SetBranchAddress("smt_muon_id_sf_up", &smt_muon_id_sf_up, &b_smt_muon_id_sf_up);
  fChain->SetBranchAddress("smt_muon_id_sf_dw", &smt_muon_id_sf_dw, &b_smt_muon_id_sf_dw);
  fChain->SetBranchAddress("Ptll", &Ptll, &b_Ptll);
  fChain->SetBranchAddress("Ptlljets", &Ptlljets, &b_Ptlljets);
  fChain->SetBranchAddress("DPhill", &DPhill, &b_DPhill);
  fChain->SetBranchAddress("DPhillMET", &DPhillMET, &b_DPhillMET);
  fChain->SetBranchAddress("DRll", &DRll, &b_DRll);
  fChain->SetBranchAddress("DEtall", &DEtall, &b_DEtall);
  fChain->SetBranchAddress("Yll", &Yll, &b_Yll);
  fChain->SetBranchAddress("Pttot", &Pttot, &b_Pttot);
  fChain->SetBranchAddress("Mjj", &Mjj, &b_Mjj);
  fChain->SetBranchAddress("Ptjj", &Ptjj, &b_Ptjj);
  fChain->SetBranchAddress("DPhijj", &DPhijj, &b_DPhijj);
  fChain->SetBranchAddress("DRjj", &DRjj, &b_DRjj);
  fChain->SetBranchAddress("DEtajj", &DEtajj, &b_DEtajj);
  fChain->SetBranchAddress("DYjj", &DYjj, &b_DYjj);
  fChain->SetBranchAddress("Mtt", &Mtt, &b_Mtt);
  fChain->SetBranchAddress("x1", &x1, &b_x1);
  fChain->SetBranchAddress("x2", &x2, &b_x2);
  fChain->SetBranchAddress("BDT_1jet_4vars", &BDT_1jet_4vars, &b_BDT_1jet_4vars);
  fChain->SetBranchAddress("BLayer_hit0", &BLayer_hit0, &b_BLayer_hit0);
  fChain->SetBranchAddress("BLayer_hit1", &BLayer_hit1, &b_BLayer_hit1);
  fChain->SetBranchAddress("conv0", &conv0, &b_conv0);
  fChain->SetBranchAddress("conv1", &conv1, &b_conv1);
  fChain->SetBranchAddress("RandomRunNumber", &RandomRunNumber, &b_RandomRunNumber);
  fChain->SetBranchAddress("DPhiSubLeadLepMET", &DPhiSubLeadLepMET, &b_DPhiSubLeadLepMET);
  fChain->SetBranchAddress("DPhiLeadLepMET", &DPhiLeadLepMET, &b_DPhiLeadLepMET);
  fChain->SetBranchAddress("MinDPhi", &MinDPhi, &b_MinDPhi);
  fChain->SetBranchAddress("MinDPhi_noJVF", &MinDPhi_noJVF, &b_MinDPhi_noJVF);
  fChain->SetBranchAddress("MET", &MET, &b_MET);
  fChain->SetBranchAddress("MET_x", &MET_x, &b_MET_x);
  fChain->SetBranchAddress("MET_y", &MET_y, &b_MET_y);
  fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
  fChain->SetBranchAddress("METRel", &METRel, &b_METRel);
  fChain->SetBranchAddress("METRel_x", &METRel_x, &b_METRel_x);
  fChain->SetBranchAddress("METRel_y", &METRel_y, &b_METRel_y);
  fChain->SetBranchAddress("METRel_noJets", &METRel_noJets, &b_METRel_noJets);
  fChain->SetBranchAddress("DPhiSubLeadLepMET_STVF", &DPhiSubLeadLepMET_STVF, &b_DPhiSubLeadLepMET_STVF);
  fChain->SetBranchAddress("DPhiLeadLepMET_STVF", &DPhiLeadLepMET_STVF, &b_DPhiLeadLepMET_STVF);
  fChain->SetBranchAddress("MinDPhi_STVF", &MinDPhi_STVF, &b_MinDPhi_STVF);
  fChain->SetBranchAddress("MinDPhi_noJVF_STVF", &MinDPhi_noJVF_STVF, &b_MinDPhi_noJVF_STVF);
  fChain->SetBranchAddress("MT_STVF", &MT_STVF, &b_MT_STVF);
  fChain->SetBranchAddress("MTrans_STVF", &MTrans_STVF, &b_MTrans_STVF);
  fChain->SetBranchAddress("Mtt_STVF", &Mtt_STVF, &b_Mtt_STVF);
  fChain->SetBranchAddress("x1_STVF", &x1_STVF, &b_x1_STVF);
  fChain->SetBranchAddress("x2_STVF", &x2_STVF, &b_x2_STVF);
  fChain->SetBranchAddress("Pttot_STVF", &Pttot_STVF, &b_Pttot_STVF);
  fChain->SetBranchAddress("MET_STVF", &MET_STVF, &b_MET_STVF);
  fChain->SetBranchAddress("MET_x_STVF", &MET_x_STVF, &b_MET_x_STVF);
  fChain->SetBranchAddress("MET_y_STVF", &MET_y_STVF, &b_MET_y_STVF);
  fChain->SetBranchAddress("MET_phi_STVF", &MET_phi_STVF, &b_MET_phi_STVF);
  fChain->SetBranchAddress("METRel_STVF", &METRel_STVF, &b_METRel_STVF);
  fChain->SetBranchAddress("METRel_x_STVF", &METRel_x_STVF, &b_METRel_x_STVF);
  fChain->SetBranchAddress("METRel_y_STVF", &METRel_y_STVF, &b_METRel_y_STVF);
  fChain->SetBranchAddress("METRel_noJets_STVF", &METRel_noJets_STVF, &b_METRel_noJets_STVF);
  fChain->SetBranchAddress("MET_TrackHWW_Cl", &MET_TrackHWW_Cl, &b_MET_TrackHWW_Cl);
  fChain->SetBranchAddress("MET_x_TrackHWW_Cl", &MET_x_TrackHWW_Cl, &b_MET_x_TrackHWW_Cl);
  fChain->SetBranchAddress("MET_y_TrackHWW_Cl", &MET_y_TrackHWW_Cl, &b_MET_y_TrackHWW_Cl);
  fChain->SetBranchAddress("MET_phi_TrackHWW_Cl", &MET_phi_TrackHWW_Cl, &b_MET_phi_TrackHWW_Cl);
  fChain->SetBranchAddress("MinDPhi_TrackHWW_Cl", &MinDPhi_TrackHWW_Cl, &b_MinDPhi_TrackHWW_Cl);
  fChain->SetBranchAddress("MinDPhi_noJVF_TrackHWW_Cl", &MinDPhi_noJVF_TrackHWW_Cl, &b_MinDPhi_noJVF_TrackHWW_Cl);
  fChain->SetBranchAddress("METRel_TrackHWW_Cl", &METRel_TrackHWW_Cl, &b_METRel_Track_HWW_Cl);
  fChain->SetBranchAddress("METRel_x_TrackHWW_Cl", &METRel_x_TrackHWW_Cl, &b_METRel_x_TrackHWW_Cl);
  fChain->SetBranchAddress("METRel_y_TrackHWW_Cl", &METRel_y_TrackHWW_Cl, &b_METRel_y_TrackHWW_Cl);
  fChain->SetBranchAddress("DPhi_CaloTrackHWW_Cl", &DPhi_CaloTrackHWW_Cl, &b_DPhi_CaloTrackHWW_Cl);
  fChain->SetBranchAddress("MT_TrackHWW_Cl", &MT_TrackHWW_Cl, &b_MT_TrackHWW_Cl);
  fChain->SetBranchAddress("PtTrack_TrackHWW_Cl", &PtTrack_TrackHWW_Cl, &b_PtTrack_TrackHWW_Cl);
  fChain->SetBranchAddress("MTrans_TrackHWW_Cl", &MTrans_TrackHWW_Cl, &b_MTrans_TrackHWW_Cl);
  fChain->SetBranchAddress("Mtt_TrackHWW_Cl", &Mtt_TrackHWW_Cl, &b_Mtt_TrackHWW_Cl);
  fChain->SetBranchAddress("x1_TrackHWW_Cl", &x1_TrackHWW_Cl, &b_x1_TrackHWW_Cl);
  fChain->SetBranchAddress("x2_TrackHWW_Cl", &x2_TrackHWW_Cl, &b_x2_TrackHWW_Cl);
  fChain->SetBranchAddress("DPhiSubLeadLepMET_TrackHWW_Cl", &DPhiSubLeadLepMET_TrackHWW_Cl, &b_DPhiSubLeadLepMET_TrackHWW_Cl);
  fChain->SetBranchAddress("DPhiLeadLepMET_TrackHWW_Cl", &DPhiLeadLepMET_TrackHWW_Cl, &b_DPhiLeadLepMET_TrackHWW_Cl);
  fChain->SetBranchAddress("Pttot_TrackHWW_Cl", &Pttot_TrackHWW_Cl, &b_Pttot_TrackHWW_Cl);
  fChain->SetBranchAddress("METRel_noJets_TrackHWW_Cl", &METRel_noJets_TrackHWW_Cl, &b_METRel_noJets_TrackHWW_Cl);
  fChain->SetBranchAddress("HighTrackPt_TrackHWW_Cl", &HighTrackPt_TrackHWW_Cl, &b_HighTrackPt_TrackHWW_Cl);
  fChain->SetBranchAddress("MET_TrackHWW_Nmu", &MET_TrackHWW_Nmu, &b_MET_TrackHWW_Nmu);
  fChain->SetBranchAddress("MET_TrackHWW_NmuMatched", &MET_TrackHWW_NmuMatched, &b_MET_TrackHWW_NmuMatched);
  fChain->SetBranchAddress("MET_TrackHWW_Nel", &MET_TrackHWW_Nel, &b_MET_TrackHWW_Nel);
  fChain->SetBranchAddress("MET_TrackHWW_NelMatched", &MET_TrackHWW_NelMatched, &b_MET_TrackHWW_NelMatched);
  fChain->SetBranchAddress("MET_TrackHWW_Ntracks", &MET_TrackHWW_Ntracks, &b_MET_TrackHWW_Ntracks);
  fChain->SetBranchAddress("sumTrackPt_TotHem_Proj", &sumTrackPt_TotHem_Proj, &b_sumTrackPt_TotHem_Proj);
  fChain->SetBranchAddress("sumTrackPt_SameHem_Proj", &sumTrackPt_SameHem_Proj, &b_sumTrackPt_SameHem_Proj);
  fChain->SetBranchAddress("sumTrackPt_OppHem_Proj", &sumTrackPt_OppHem_Proj, &b_sumTrackPt_OppHem_Proj);
  fChain->SetBranchAddress("sumJetPt15_TotHem_Proj", &sumJetPt15_TotHem_Proj, &b_sumJetPt15_TotHem_Proj);
  fChain->SetBranchAddress("sumJetPt15_SameHem_Proj", &sumJetPt15_SameHem_Proj, &b_sumJetPt15_SameHem_Proj);
  fChain->SetBranchAddress("sumJetPt15_OppHem_Proj", &sumJetPt15_OppHem_Proj, &b_sumJetPt15_OppHem_Proj);
  fChain->SetBranchAddress("LepPt0_Proj", &LepPt0_Proj, &b_LepPt0_Proj);
  fChain->SetBranchAddress("LepPt1_Proj", &LepPt1_Proj, &b_LepPt1_Proj);
  fChain->SetBranchAddress("LepTrackPt0_Proj", &LepTrackPt0_Proj, &b_LepTrackPt0_Proj);
  fChain->SetBranchAddress("LepTrackPt1_Proj", &LepTrackPt1_Proj, &b_LepTrackPt1_Proj);
  fChain->SetBranchAddress("n_SubJet10JVF_OppDilep", &n_SubJet10JVF_OppDilep, &b_n_SubJet10JVF_OppDilep);
  fChain->SetBranchAddress("n_SubJet10JVF_CloseDilep", &n_SubJet10JVF_CloseDilep, &b_n_SubJet10JVF_CloseDilep);
  fChain->SetBranchAddress("n_SubJet10JVF_PerpPosDilep", &n_SubJet10JVF_PerpPosDilep, &b_n_SubJet10JVF_PerpPosDilep);
  fChain->SetBranchAddress("n_SubJet10JVF_PerpNegDilep", &n_SubJet10JVF_PerpNegDilep, &b_n_SubJet10JVF_PerpNegDilep);
  fChain->SetBranchAddress("SumPtSca_SubJet10JVF_OppDilep", &SumPtSca_SubJet10JVF_OppDilep, &b_SumPtSca_SubJet10JVF_OppDilep);
  fChain->SetBranchAddress("SumPtSca_SubJet10JVF_CloseDilep", &SumPtSca_SubJet10JVF_CloseDilep, &b_SumPtSca_SubJet10JVF_CloseDilep);
  fChain->SetBranchAddress("SumPtSca_SubJet10JVF_PerpPosDilep", &SumPtSca_SubJet10JVF_PerpPosDilep, &b_SumPtSca_SubJet10JVF_PerpPosDilep);
  fChain->SetBranchAddress("SumPtSca_SubJet10JVF_PerpNegDilep", &SumPtSca_SubJet10JVF_PerpNegDilep, &b_SumPtSca_SubJet10JVF_PerpNegDilep);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_OppDilep", &SumPtVec_SubJet10JVF_OppDilep, &b_SumPtVec_SubJet10JVF_OppDilep);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_CloseDilep", &SumPtVec_SubJet10JVF_CloseDilep, &b_SumPtVec_SubJet10JVF_CloseDilep);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_PerpPosDilep", &SumPtVec_SubJet10JVF_PerpPosDilep, &b_SumPtVec_SubJet10JVF_PerpPosDilep);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_PerpNegDilep", &SumPtVec_SubJet10JVF_PerpNegDilep, &b_SumPtVec_SubJet10JVF_PerpNegDilep);
  fChain->SetBranchAddress("SumJVFPtSca_SubJet10_OppDilep", &SumJVFPtSca_SubJet10_OppDilep, &b_SumJVFPtSca_SubJet10_OppDilep);
  fChain->SetBranchAddress("SumJVFPtSca_SubJet10_CloseDilep", &SumJVFPtSca_SubJet10_CloseDilep, &b_SumJVFPtSca_SubJet10_CloseDilep);
  fChain->SetBranchAddress("SumJVFPtSca_SubJet10_PerpPosDilep", &SumJVFPtSca_SubJet10_PerpPosDilep, &b_SumJVFPtSca_SubJet10_PerpPosDilep);
  fChain->SetBranchAddress("SumJVFPtSca_SubJet10_PerpNegDilep", &SumJVFPtSca_SubJet10_PerpNegDilep, &b_SumJVFPtSca_SubJet10_PerpNegDilep);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_OppDilep", &SumJVFPtVec_SubJet10_OppDilep, &b_SumJVFPtVec_SubJet10_OppDilep);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_CloseDilep", &SumJVFPtVec_SubJet10_CloseDilep, &b_SumJVFPtVec_SubJet10_CloseDilep);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpPosDilep", &SumJVFPtVec_SubJet10_PerpPosDilep, &b_SumJVFPtVec_SubJet10_PerpPosDilep);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpNegDilep", &SumJVFPtVec_SubJet10_PerpNegDilep, &b_SumJVFPtVec_SubJet10_PerpNegDilep);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_OppDilepjets", &SumPtVec_SubJet10JVF_OppDilepjets, &b_SumPtVec_SubJet10JVF_OppDilepjets);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_CloseDilepjets", &SumPtVec_SubJet10JVF_CloseDilepjets, &b_SumPtVec_SubJet10JVF_CloseDilepjets);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_PerpPosDilepjets", &SumPtVec_SubJet10JVF_PerpPosDilepjets, &b_SumPtVec_SubJet10JVF_PerpPosDilepjets);
  fChain->SetBranchAddress("SumPtVec_SubJet10JVF_PerpNegDilepjets", &SumPtVec_SubJet10JVF_PerpNegDilepjets, &b_SumPtVec_SubJet10JVF_PerpNegDilepjets);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_OppDilepjets", &SumJVFPtVec_SubJet10_OppDilepjets, &b_SumJVFPtVec_SubJet10_OppDilepjets);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_CloseDilepjets", &SumJVFPtVec_SubJet10_CloseDilepjets, &b_SumJVFPtVec_SubJet10_CloseDilepjets);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpPosDilepjets", &SumJVFPtVec_SubJet10_PerpPosDilepjets, &b_SumJVFPtVec_SubJet10_PerpPosDilepjets);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpNegDilepjets", &SumJVFPtVec_SubJet10_PerpNegDilepjets, &b_SumJVFPtVec_SubJet10_PerpNegDilepjets);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_OppDilepjets_OvrlpRem", &SumJVFPtVec_SubJet10_OppDilepjets_OvrlpRem, &b_SumJVFPtVec_SubJet10_OppDilepjets_OvrlpRem);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_CloseDilepjets_OvrlpRem", &SumJVFPtVec_SubJet10_CloseDilepjets_OvrlpRem, &b_SumJVFPtVec_SubJet10_CloseDilepjets_OvrlpRem);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpPosDilepjets_OvrlpRem", &SumJVFPtVec_SubJet10_PerpPosDilepjets_OvrlpRem, &b_SumJVFPtVec_SubJet10_PerpPosDilepjets_OvrlpRem);
  fChain->SetBranchAddress("SumJVFPtVec_SubJet10_PerpNegDilepjets_OvrlpRem", &SumJVFPtVec_SubJet10_PerpNegDilepjets_OvrlpRem, &b_SumJVFPtVec_SubJet10_PerpNegDilepjets_OvrlpRem);
  fChain->SetBranchAddress("n_Tracks_OppDilep", &n_Tracks_OppDilep, &b_n_Tracks_OppDilep);
  fChain->SetBranchAddress("n_Tracks_CloseDilep", &n_Tracks_CloseDilep, &b_n_Tracks_CloseDilep);
  fChain->SetBranchAddress("n_Tracks_PerpPosDilep", &n_Tracks_PerpPosDilep, &b_n_Tracks_PerpPosDilep);
  fChain->SetBranchAddress("n_Tracks_PerpNegDilep", &n_Tracks_PerpNegDilep, &b_n_Tracks_PerpNegDilep);
  fChain->SetBranchAddress("SumPtSca_Tracks_OppDilep", &SumPtSca_Tracks_OppDilep, &b_SumPtSca_Tracks_OppDilep);
  fChain->SetBranchAddress("SumPtSca_Tracks_CloseDilep", &SumPtSca_Tracks_CloseDilep, &b_SumPtSca_Tracks_CloseDilep);
  fChain->SetBranchAddress("SumPtSca_Tracks_PerpPosDilep", &SumPtSca_Tracks_PerpPosDilep, &b_SumPtSca_Tracks_PerpPosDilep);
  fChain->SetBranchAddress("SumPtSca_Tracks_PerpNegDilep", &SumPtSca_Tracks_PerpNegDilep, &b_SumPtSca_Tracks_PerpNegDilep);
  fChain->SetBranchAddress("SumPtVec_Tracks_OppDilep", &SumPtVec_Tracks_OppDilep, &b_SumPtVec_Tracks_OppDilep);
  fChain->SetBranchAddress("SumPtVec_Tracks_CloseDilep", &SumPtVec_Tracks_CloseDilep, &b_SumPtVec_Tracks_CloseDilep);
  fChain->SetBranchAddress("SumPtVec_Tracks_PerpPosDilep", &SumPtVec_Tracks_PerpPosDilep, &b_SumPtVec_Tracks_PerpPosDilep);
  fChain->SetBranchAddress("SumPtVec_Tracks_PerpNegDilep", &SumPtVec_Tracks_PerpNegDilep, &b_SumPtVec_Tracks_PerpNegDilep);
  fChain->SetBranchAddress("SumPtVec_TracksOutsideJets_OppDilep", &SumPtVec_TracksOutsideJets_OppDilep, &b_SumPtVec_TracksOutsideJets_OppDilep);
  fChain->SetBranchAddress("SumPtVec_TracksOutsideJets_CloseDilep", &SumPtVec_TracksOutsideJets_CloseDilep, &b_SumPtVec_TracksOutsideJets_CloseDilep);
  fChain->SetBranchAddress("SumPtVec_TracksOutsideJets_PerpPosDilep", &SumPtVec_TracksOutsideJets_PerpPosDilep, &b_SumPtVec_TracksOutsideJets_PerpPosDilep);
  fChain->SetBranchAddress("SumPtVec_TracksOutsideJets_PerpNegDilep", &SumPtVec_TracksOutsideJets_PerpNegDilep, &b_SumPtVec_TracksOutsideJets_PerpNegDilep);
  fChain->SetBranchAddress("lepID0", &lepID0, &b_lepID0);
  fChain->SetBranchAddress("lepID1", &lepID1, &b_lepID1);
  fChain->SetBranchAddress("lepPt0", &lepPt0, &b_lepPt0);
  fChain->SetBranchAddress("lepPt1", &lepPt1, &b_lepPt1);
  fChain->SetBranchAddress("lepPx0", &lepPx0, &b_lepPx0);
  fChain->SetBranchAddress("lepPx1", &lepPx1, &b_lepPx1);
  fChain->SetBranchAddress("lepPy0", &lepPy0, &b_lepPy0);
  fChain->SetBranchAddress("lepPy1", &lepPy1, &b_lepPy1);
  fChain->SetBranchAddress("lepPz0", &lepPz0, &b_lepPz0);
  fChain->SetBranchAddress("lepPz1", &lepPz1, &b_lepPz1);
  fChain->SetBranchAddress("lepEta0", &lepEta0, &b_lepEta0);
  fChain->SetBranchAddress("lepEta1", &lepEta1, &b_lepEta1);
  fChain->SetBranchAddress("lepPhi0", &lepPhi0, &b_lepPhi0);
  fChain->SetBranchAddress("lepPhi1", &lepPhi1, &b_lepPhi1);
  fChain->SetBranchAddress("MlMetLead", &MlMetLead, &b_MlMetLead);
  fChain->SetBranchAddress("MinMljj", &MinMljj, &b_MinMljj);
  fChain->SetBranchAddress("DeltaPhiljMin", &DeltaPhiljMin, &b_DeltaPhiljMin);
  fChain->SetBranchAddress("TR_ratio0", &TR_ratio0, &b_TR_ratio0);
  fChain->SetBranchAddress("TR_ratio1", &TR_ratio1, &b_TR_ratio1);
  fChain->SetBranchAddress("eoverp0", &eoverp0, &b_eoverp0);
  fChain->SetBranchAddress("eoverp1", &eoverp1, &b_eoverp1);
  fChain->SetBranchAddress("lepEtcone30_0", &lepEtcone30_0, &b_lepEtcone30_0);
  fChain->SetBranchAddress("lepPtcone30_0", &lepPtcone30_0, &b_lepPtcone30_0);
  fChain->SetBranchAddress("lepPtcone40_0", &lepPtcone40_0, &b_lepPtcone40_0);
  fChain->SetBranchAddress("lepz0PV0", &lepz0PV0, &b_lepz0PV0);
  fChain->SetBranchAddress("lepsigd0PV0", &lepsigd0PV0, &b_lepsigd0PV0);
  fChain->SetBranchAddress("lepEtcone30_1", &lepEtcone30_1, &b_lepEtcone30_1);
  fChain->SetBranchAddress("lepPtcone30_1", &lepPtcone30_1, &b_lepPtcone30_1);
  fChain->SetBranchAddress("lepPtcone40_1", &lepPtcone40_1, &b_lepPtcone40_1);
  fChain->SetBranchAddress("lepz0PV1", &lepz0PV1, &b_lepz0PV1);
  fChain->SetBranchAddress("lepsigd0PV1", &lepsigd0PV1, &b_lepsigd0PV1);
  fChain->SetBranchAddress("lepD0_0", &lepD0_0, &b_lepD0_0);
  fChain->SetBranchAddress("lepD0_1", &lepD0_1, &b_lepD0_1);
  fChain->SetBranchAddress("lepMagD0_0", &lepMagD0_0, &b_lepMagD0_0);
  fChain->SetBranchAddress("lepMagD0_1", &lepMagD0_1, &b_lepMagD0_1);
  fChain->SetBranchAddress("DRlep0jet", &DRlep0jet, &b_DRlep0jet);
  fChain->SetBranchAddress("DRlep1jet", &DRlep1jet, &b_DRlep1jet);
  fChain->SetBranchAddress("singleLepTrig", &singleLepTrig, &b_singleLepTrig);
  fChain->SetBranchAddress("lepMatch_EF_mu24i_tight_0", &lepMatch_EF_mu24i_tight_0, &b_lepMatch_EF_mu24i_tight_0);
  fChain->SetBranchAddress("lepMatch_EF_mu24i_tight_1", &lepMatch_EF_mu24i_tight_1, &b_lepMatch_EF_mu24i_tight_1);
  fChain->SetBranchAddress("lepMatch_EF_mu36_tight_0", &lepMatch_EF_mu36_tight_0, &b_lepMatch_EF_mu36_tight_0);
  fChain->SetBranchAddress("lepMatch_EF_mu36_tight_1", &lepMatch_EF_mu36_tight_1, &b_lepMatch_EF_mu36_tight_1);
  fChain->SetBranchAddress("lepMatch_EF_e24vhi_medium1_0", &lepMatch_EF_e24vhi_medium1_0, &b_lepMatch_EF_e24vhi_medium1_0);
  fChain->SetBranchAddress("lepMatch_EF_e24vhi_medium1_1", &lepMatch_EF_e24vhi_medium1_1, &b_lepMatch_EF_e24vhi_medium1_1);
  fChain->SetBranchAddress("lepMatch_EF_e60_medium1_0", &lepMatch_EF_e60_medium1_0, &b_lepMatch_EF_e60_medium1_0);
  fChain->SetBranchAddress("lepMatch_EF_e60_medium1_1", &lepMatch_EF_e60_medium1_1, &b_lepMatch_EF_e60_medium1_1);
  fChain->SetBranchAddress("lepMatch_EF_e12Tvh_medium1_0", &lepMatch_EF_e12Tvh_medium1_0, &b_lepMatch_EF_e12Tvh_medium1_0);
  fChain->SetBranchAddress("lepMatch_EF_e12Tvh_medium1_1", &lepMatch_EF_e12Tvh_medium1_1, &b_lepMatch_EF_e12Tvh_medium1_1);
  fChain->SetBranchAddress("pileupEventWeight", &pileupEventWeight, &b_pileupEventWeight);
  fChain->SetBranchAddress("pileupEventWeight_094", &pileupEventWeight_094, &b_pileupEventWeight_094);
  fChain->SetBranchAddress("pileupEventWeight_080", &pileupEventWeight_080, &b_pileupEventWeight_080);
  fChain->SetBranchAddress("pileupEventWeight_090", &pileupEventWeight_090, &b_pileupEventWeight_090);
  fChain->SetBranchAddress("pileupEventWeight_088", &pileupEventWeight_088, &b_pileupEventWeight_088);
  fChain->SetBranchAddress("pileupEventWeight_075", &pileupEventWeight_075, &b_pileupEventWeight_075);
  fChain->SetBranchAddress("pileupEventWeight_103", &pileupEventWeight_103, &b_pileupEventWeight_103);
  fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
  fChain->SetBranchAddress("WgStarEventWeight", &WgStarEventWeight, &b_WgStarEventWeight);
  fChain->SetBranchAddress("WgStarEventWeightError", &WgStarEventWeightError, &b_WgStarEventWeightError);
  fChain->SetBranchAddress("overlapWZ", &overlapWZ, &b_overlapWZ);
  fChain->SetBranchAddress("passedVBFFilter", &passedVBFFilter, &b_passedVBFFilter);
  fChain->SetBranchAddress("didEJoverlap", &didEJoverlap, &b_didEJoverlap);
  fChain->SetBranchAddress("didMJoverlap", &didMJoverlap, &b_didMJoverlap);
  fChain->SetBranchAddress("didEEoverlap", &didEEoverlap, &b_didEEoverlap);
  fChain->SetBranchAddress("didEMoverlap", &didEMoverlap, &b_didEMoverlap);
  fChain->SetBranchAddress("vertexPosWeight", &vertexPosWeight, &b_vertexPosWeight);
  fChain->SetBranchAddress("trigEventWeight", &trigEventWeight, &b_trigEventWeight);
  fChain->SetBranchAddress("lepTrigSFEventWeight", &lepTrigSFEventWeight, &b_lepTrigSFEventWeight);
  fChain->SetBranchAddress("lepTrigSFEventWeightUp", &lepTrigSFEventWeightUp, &b_lepTrigSFEventWeightUp);
  fChain->SetBranchAddress("lepTrigSFEventWeightDown", &lepTrigSFEventWeightDown, &b_lepTrigSFEventWeightDown);
  fChain->SetBranchAddress("lepTrigSF0EventWeight", &lepTrigSF0EventWeight, &b_lepTrigSF0EventWeight);
  fChain->SetBranchAddress("lepTrigSF1EventWeight", &lepTrigSF1EventWeight, &b_lepTrigSF1EventWeight);
  fChain->SetBranchAddress("lepTrigSF0Error", &lepTrigSF0Error, &b_lepTrigSF0Error);
  fChain->SetBranchAddress("lepTrigSF1Error", &lepTrigSF1Error, &b_lepTrigSF1Error);
  fChain->SetBranchAddress("lepSF0EventWeight", &lepSF0EventWeight, &b_lepSF0EventWeight);
  fChain->SetBranchAddress("lepSF1EventWeight", &lepSF1EventWeight, &b_lepSF1EventWeight);
  fChain->SetBranchAddress("lepSF0Error", &lepSF0Error, &b_lepSF0Error);
  fChain->SetBranchAddress("lepSF1Error", &lepSF1Error, &b_lepSF1Error);
  fChain->SetBranchAddress("lepSF0ErrorIso", &lepSF0ErrorIso, &b_lepSF0ErrorIso);
  fChain->SetBranchAddress("lepSF1ErrorIso", &lepSF1ErrorIso, &b_lepSF1ErrorIso);
  fChain->SetBranchAddress("lepSF0ErrorSys", &lepSF0ErrorSys, &b_lepSF0ErrorSys);
  fChain->SetBranchAddress("lepSF1ErrorSys", &lepSF1ErrorSys, &b_lepSF1ErrorSys);
  fChain->SetBranchAddress("nJets_Pt20_JetCombNN_80", &nJets_Pt20_JetCombNN_80, &b_nJets_Pt20_JetCombNN_80);
  fChain->SetBranchAddress("JetCombNN20_80_EventWeight", &JetCombNN20_80_EventWeight, &b_JetCombNN20_80_EventWeight);
  fChain->SetBranchAddress("JetCombNN20_80_BJetWeight", &JetCombNN20_80_BJetWeight, &b_JetCombNN20_80_BJetWeight);
  fChain->SetBranchAddress("JetCombNN20_80_CTJetWeight", &JetCombNN20_80_CTJetWeight, &b_JetCombNN20_80_CTJetWeight);
  fChain->SetBranchAddress("JetCombNN20_80_MisTagWeight", &JetCombNN20_80_MisTagWeight, &b_JetCombNN20_80_MisTagWeight);
  fChain->SetBranchAddress("JetCombNN20_80_BJetWeightUp", &JetCombNN20_80_BJetWeightUp, &b_JetCombNN20_80_BJetWeightUp);
  fChain->SetBranchAddress("JetCombNN20_80_CTJetWeightUp", &JetCombNN20_80_CTJetWeightUp, &b_JetCombNN20_80_CTJetWeightUp);
  fChain->SetBranchAddress("JetCombNN20_80_MisTagWeightUp", &JetCombNN20_80_MisTagWeightUp, &b_JetCombNN20_80_MisTagWeightUp);
  fChain->SetBranchAddress("JetCombNN20_80_BJetWeightDown", &JetCombNN20_80_BJetWeightDown, &b_JetCombNN20_80_BJetWeightDown);
  fChain->SetBranchAddress("JetCombNN20_80_CTJetWeightDown", &JetCombNN20_80_CTJetWeightDown, &b_JetCombNN20_80_CTJetWeightDown);
  fChain->SetBranchAddress("JetCombNN20_80_MisTagWeightDown", &JetCombNN20_80_MisTagWeightDown, &b_JetCombNN20_80_MisTagWeightDown);
  fChain->SetBranchAddress("MV1_75_EventWeight", &MV1_75_EventWeight, &b_MV1_75_EventWeight);
  fChain->SetBranchAddress("MV1_85_EventWeight", &MV1_85_EventWeight, &b_MV1_85_EventWeight);
  fChain->SetBranchAddress("MV1_80_EventWeight", &MV1_80_EventWeight, &b_MV1_80_EventWeight);
  fChain->SetBranchAddress("MV120_85_EventWeight", &MV120_85_EventWeight, &b_MV120_85_EventWeight);
  fChain->SetBranchAddress("MV120_80_EventWeight", &MV120_80_EventWeight, &b_MV120_80_EventWeight);
  fChain->SetBranchAddress("MV120_75_EventWeight", &MV120_75_EventWeight, &b_MV120_75_EventWeight);
  fChain->SetBranchAddress("MV1_75_BJetWeight", &MV1_75_BJetWeight, &b_MV1_75_BJetWeight);
  fChain->SetBranchAddress("MV1_85_BJetWeight", &MV1_85_BJetWeight, &b_MV1_85_BJetWeight);
  fChain->SetBranchAddress("MV1_80_BJetWeight", &MV1_80_BJetWeight, &b_MV1_80_BJetWeight);
  fChain->SetBranchAddress("MV120_85_BJetWeight", &MV120_85_BJetWeight, &b_MV120_85_BJetWeight);
  fChain->SetBranchAddress("MV120_80_BJetWeight", &MV120_80_BJetWeight, &b_MV120_80_BJetWeight);
  fChain->SetBranchAddress("MV120_75_BJetWeight", &MV120_75_BJetWeight, &b_MV120_75_BJetWeight);
  fChain->SetBranchAddress("MV1_75_CTJetWeight", &MV1_75_CTJetWeight, &b_MV1_75_CTJetWeight);
  fChain->SetBranchAddress("MV1_85_CTJetWeight", &MV1_85_CTJetWeight, &b_MV1_85_CTJetWeight);
  fChain->SetBranchAddress("MV1_80_CTJetWeight", &MV1_80_CTJetWeight, &b_MV1_80_CTJetWeight);
  fChain->SetBranchAddress("MV120_85_CTJetWeight", &MV120_85_CTJetWeight, &b_MV120_85_CTJetWeight);
  fChain->SetBranchAddress("MV120_80_CTJetWeight", &MV120_80_CTJetWeight, &b_MV120_80_CTJetWeight);
  fChain->SetBranchAddress("MV120_75_CTJetWeight", &MV120_75_CTJetWeight, &b_MV120_75_CTJetWeight);
  fChain->SetBranchAddress("MV1_75_MisTagWeight", &MV1_75_MisTagWeight, &b_MV1_75_MisTagWeight);
  fChain->SetBranchAddress("MV1_85_MisTagWeight", &MV1_85_MisTagWeight, &b_MV1_85_MisTagWeight);
  fChain->SetBranchAddress("MV1_80_MisTagWeight", &MV1_80_MisTagWeight, &b_MV1_80_MisTagWeight);
  fChain->SetBranchAddress("MV120_85_MisTagWeight", &MV120_85_MisTagWeight, &b_MV120_85_MisTagWeight);
  fChain->SetBranchAddress("MV120_80_MisTagWeight", &MV120_80_MisTagWeight, &b_MV120_80_MisTagWeight);
  fChain->SetBranchAddress("MV120_75_MisTagWeight", &MV120_75_MisTagWeight, &b_MV120_75_MisTagWeight);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_1_Up", &MV1_85_BJetWeightEV_1_Up, &b_MV1_85_BJetWeightEV_1_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_2_Up", &MV1_85_BJetWeightEV_2_Up, &b_MV1_85_BJetWeightEV_2_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_3_Up", &MV1_85_BJetWeightEV_3_Up, &b_MV1_85_BJetWeightEV_3_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_4_Up", &MV1_85_BJetWeightEV_4_Up, &b_MV1_85_BJetWeightEV_4_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_5_Up", &MV1_85_BJetWeightEV_5_Up, &b_MV1_85_BJetWeightEV_5_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_6_Up", &MV1_85_BJetWeightEV_6_Up, &b_MV1_85_BJetWeightEV_6_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_7_Up", &MV1_85_BJetWeightEV_7_Up, &b_MV1_85_BJetWeightEV_7_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_8_Up", &MV1_85_BJetWeightEV_8_Up, &b_MV1_85_BJetWeightEV_8_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_9_Up", &MV1_85_BJetWeightEV_9_Up, &b_MV1_85_BJetWeightEV_9_Up);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_1_Down", &MV1_85_BJetWeightEV_1_Down, &b_MV1_85_BJetWeightEV_1_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_2_Down", &MV1_85_BJetWeightEV_2_Down, &b_MV1_85_BJetWeightEV_2_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_3_Down", &MV1_85_BJetWeightEV_3_Down, &b_MV1_85_BJetWeightEV_3_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_4_Down", &MV1_85_BJetWeightEV_4_Down, &b_MV1_85_BJetWeightEV_4_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_5_Down", &MV1_85_BJetWeightEV_5_Down, &b_MV1_85_BJetWeightEV_5_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_6_Down", &MV1_85_BJetWeightEV_6_Down, &b_MV1_85_BJetWeightEV_6_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_7_Down", &MV1_85_BJetWeightEV_7_Down, &b_MV1_85_BJetWeightEV_7_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_8_Down", &MV1_85_BJetWeightEV_8_Down, &b_MV1_85_BJetWeightEV_8_Down);
  fChain->SetBranchAddress("MV1_85_BJetWeightEV_9_Down", &MV1_85_BJetWeightEV_9_Down, &b_MV1_85_BJetWeightEV_9_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_1_Up", &MV1_80_BJetWeightEV_1_Up, &b_MV1_80_BJetWeightEV_1_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_2_Up", &MV1_80_BJetWeightEV_2_Up, &b_MV1_80_BJetWeightEV_2_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_3_Up", &MV1_80_BJetWeightEV_3_Up, &b_MV1_80_BJetWeightEV_3_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_4_Up", &MV1_80_BJetWeightEV_4_Up, &b_MV1_80_BJetWeightEV_4_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_5_Up", &MV1_80_BJetWeightEV_5_Up, &b_MV1_80_BJetWeightEV_5_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_6_Up", &MV1_80_BJetWeightEV_6_Up, &b_MV1_80_BJetWeightEV_6_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_7_Up", &MV1_80_BJetWeightEV_7_Up, &b_MV1_80_BJetWeightEV_7_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_8_Up", &MV1_80_BJetWeightEV_8_Up, &b_MV1_80_BJetWeightEV_8_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_9_Up", &MV1_80_BJetWeightEV_9_Up, &b_MV1_80_BJetWeightEV_9_Up);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_1_Down", &MV1_80_BJetWeightEV_1_Down, &b_MV1_80_BJetWeightEV_1_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_2_Down", &MV1_80_BJetWeightEV_2_Down, &b_MV1_80_BJetWeightEV_2_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_3_Down", &MV1_80_BJetWeightEV_3_Down, &b_MV1_80_BJetWeightEV_3_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_4_Down", &MV1_80_BJetWeightEV_4_Down, &b_MV1_80_BJetWeightEV_4_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_5_Down", &MV1_80_BJetWeightEV_5_Down, &b_MV1_80_BJetWeightEV_5_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_6_Down", &MV1_80_BJetWeightEV_6_Down, &b_MV1_80_BJetWeightEV_6_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_7_Down", &MV1_80_BJetWeightEV_7_Down, &b_MV1_80_BJetWeightEV_7_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_8_Down", &MV1_80_BJetWeightEV_8_Down, &b_MV1_80_BJetWeightEV_8_Down);
  fChain->SetBranchAddress("MV1_80_BJetWeightEV_9_Down", &MV1_80_BJetWeightEV_9_Down, &b_MV1_80_BJetWeightEV_9_Down);
  fChain->SetBranchAddress("MV1_75_BJetWeightUp", &MV1_75_BJetWeightUp, &b_MV1_75_BJetWeightUp);
  fChain->SetBranchAddress("MV1_85_BJetWeightUp", &MV1_85_BJetWeightUp, &b_MV1_85_BJetWeightUp);
  fChain->SetBranchAddress("MV1_80_BJetWeightUp", &MV1_80_BJetWeightUp, &b_MV1_80_BJetWeightUp);
  fChain->SetBranchAddress("MV120_80_BJetWeightUp", &MV120_80_BJetWeightUp, &b_MV120_80_BJetWeightUp);
  fChain->SetBranchAddress("MV120_85_BJetWeightUp", &MV120_85_BJetWeightUp, &b_MV120_85_BJetWeightUp);
  fChain->SetBranchAddress("MV120_75_BJetWeightUp", &MV120_75_BJetWeightUp, &b_MV120_75_BJetWeightUp);
  fChain->SetBranchAddress("MV1_75_CTJetWeightUp", &MV1_75_CTJetWeightUp, &b_MV1_75_CTJetWeightUp);
  fChain->SetBranchAddress("MV1_85_CTJetWeightUp", &MV1_85_CTJetWeightUp, &b_MV1_85_CTJetWeightUp);
  fChain->SetBranchAddress("MV1_80_CTJetWeightUp", &MV1_80_CTJetWeightUp, &b_MV1_80_CTJetWeightUp);
  fChain->SetBranchAddress("MV120_85_CTJetWeightUp", &MV120_85_CTJetWeightUp, &b_MV120_85_CTJetWeightUp);
  fChain->SetBranchAddress("MV120_80_CTJetWeightUp", &MV120_80_CTJetWeightUp, &b_MV120_80_CTJetWeightUp);
  fChain->SetBranchAddress("MV120_75_CTJetWeightUp", &MV120_75_CTJetWeightUp, &b_MV120_75_CTJetWeightUp);
  fChain->SetBranchAddress("MV1_75_MisTagWeightUp", &MV1_75_MisTagWeightUp, &b_MV1_75_MisTagWeightUp);
  fChain->SetBranchAddress("MV1_85_MisTagWeightUp", &MV1_85_MisTagWeightUp, &b_MV1_85_MisTagWeightUp);
  fChain->SetBranchAddress("MV1_80_MisTagWeightUp", &MV1_80_MisTagWeightUp, &b_MV1_80_MisTagWeightUp);
  fChain->SetBranchAddress("MV120_85_MisTagWeightUp", &MV120_85_MisTagWeightUp, &b_MV120_85_MisTagWeightUp);
  fChain->SetBranchAddress("MV120_80_MisTagWeightUp", &MV120_80_MisTagWeightUp, &b_MV120_80_MisTagWeightUp);
  fChain->SetBranchAddress("MV120_75_MisTagWeightUp", &MV120_75_MisTagWeightUp, &b_MV120_75_MisTagWeightUp);
  fChain->SetBranchAddress("MV1_75_BJetWeightDown", &MV1_75_BJetWeightDown, &b_MV1_75_BJetWeightDown);
  fChain->SetBranchAddress("MV1_85_BJetWeightDown", &MV1_85_BJetWeightDown, &b_MV1_85_BJetWeightDown);
  fChain->SetBranchAddress("MV1_80_BJetWeightDown", &MV1_80_BJetWeightDown, &b_MV1_80_BJetWeightDown);
  fChain->SetBranchAddress("MV120_85_BJetWeightDown", &MV120_85_BJetWeightDown, &b_MV120_85_BJetWeightDown);
  fChain->SetBranchAddress("MV120_75_BJetWeightDown", &MV120_75_BJetWeightDown, &b_MV120_75_BJetWeightDown);
  fChain->SetBranchAddress("MV1_75_CTJetWeightDown", &MV1_75_CTJetWeightDown, &b_MV1_75_CTJetWeightDown);
  fChain->SetBranchAddress("MV1_85_CTJetWeightDown", &MV1_85_CTJetWeightDown, &b_MV1_85_CTJetWeightDown);
  fChain->SetBranchAddress("MV1_80_CTJetWeightDown", &MV1_80_CTJetWeightDown, &b_MV1_80_CTJetWeightDown);
  fChain->SetBranchAddress("MV120_85_CTJetWeightDown", &MV120_85_CTJetWeightDown, &b_MV120_85_CTJetWeightDown);
  fChain->SetBranchAddress("MV120_75_CTJetWeightDown", &MV120_75_CTJetWeightDown, &b_MV120_75_CTJetWeightDown);
  fChain->SetBranchAddress("MV1_75_MisTagWeightDown", &MV1_75_MisTagWeightDown, &b_MV1_75_MisTagWeightDown);
  fChain->SetBranchAddress("MV1_85_MisTagWeightDown", &MV1_85_MisTagWeightDown, &b_MV1_85_MisTagWeightDown);
  fChain->SetBranchAddress("MV1_80_MisTagWeightDown", &MV1_80_MisTagWeightDown, &b_MV1_80_MisTagWeightDown);
  fChain->SetBranchAddress("MV120_85_MisTagWeightDown", &MV120_85_MisTagWeightDown, &b_MV120_85_MisTagWeightDown);
  fChain->SetBranchAddress("MV120_80_MisTagWeightDown", &MV120_80_MisTagWeightDown, &b_MV120_80_MisTagWeightDown);
  fChain->SetBranchAddress("MV120_75_MisTagWeightDown", &MV120_75_MisTagWeightDown, &b_MV120_75_MisTagWeightDown);
  fChain->SetBranchAddress("nJets_Pt25_MV1_75", &nJets_Pt25_MV1_75, &b_nJets_Pt25_MV1_75);
  fChain->SetBranchAddress("nJets_Pt25_MV1_85", &nJets_Pt25_MV1_85, &b_nJets_Pt25_MV1_85);
  fChain->SetBranchAddress("nJets_Pt25_MV1_80", &nJets_Pt25_MV1_80, &b_nJets_Pt25_MV1_80);
  fChain->SetBranchAddress("nJets_Pt20_MV1_75", &nJets_Pt20_MV1_75, &b_nJets_Pt20_MV1_75);
  fChain->SetBranchAddress("nJets_Pt20_MV1_85", &nJets_Pt20_MV1_85, &b_nJets_Pt20_MV1_85);
  fChain->SetBranchAddress("nJets_Pt20_MV1_80", &nJets_Pt20_MV1_80, &b_nJets_Pt20_MV1_80);
  fChain->SetBranchAddress("nJets_Pt20", &nJets_Pt20, &b_nJets_Pt20);
  fChain->SetBranchAddress("nJetsProbing_JetCombNN_80", &nJetsProbing_JetCombNN_80, &b_nJetsProbing_JetCombNN_80);
  fChain->SetBranchAddress("nJetsProbing_JetCombNN_70", &nJetsProbing_JetCombNN_70, &b_nJetsProbing_JetCombNN_70);
  fChain->SetBranchAddress("nJetsProbing_MV1_85", &nJetsProbing_MV1_85, &b_nJetsProbing_MV1_85);
  fChain->SetBranchAddress("nJetsProbing_MV1_80", &nJetsProbing_MV1_80, &b_nJetsProbing_MV1_80);
  fChain->SetBranchAddress("nJetsProbing_MV1_75", &nJetsProbing_MV1_75, &b_nJetsProbing_MV1_75);
  fChain->SetBranchAddress("Nvxp", &Nvxp, &b_Nvxp);
  fChain->SetBranchAddress("centralJetVeto_leadPt", &centralJetVeto_leadPt, &b_centralJetVeto_leadPt);
  fChain->SetBranchAddress("centralJetVeto_leadPt_central", &centralJetVeto_leadPt_central, &b_centralJetVeto_leadPt_central);
  fChain->SetBranchAddress("centralJetVeto_leadPt_forward", &centralJetVeto_leadPt_forward, &b_centralJetVeto_leadPt_forward);
  fChain->SetBranchAddress("jetPt0", &jetPt0, &b_jetPt0);
  fChain->SetBranchAddress("jetPt1", &jetPt1, &b_jetPt1);
  fChain->SetBranchAddress("jetEta0", &jetEta0, &b_jetEta0);
  fChain->SetBranchAddress("jetEta1", &jetEta1, &b_jetEta1);
  fChain->SetBranchAddress("jetE0", &jetE0, &b_jetE0);
  fChain->SetBranchAddress("jetE1", &jetE1, &b_jetE1);
  fChain->SetBranchAddress("jetY0", &jetY0, &b_jetY0);
  fChain->SetBranchAddress("jetY1", &jetY1, &b_jetY1);
  fChain->SetBranchAddress("jetM0", &jetM0, &b_jetM0);
  fChain->SetBranchAddress("jetM1", &jetM1, &b_jetM1);
  fChain->SetBranchAddress("jetPhi0", &jetPhi0, &b_jetPhi0);
  fChain->SetBranchAddress("jetPhi1", &jetPhi1, &b_jetPhi1);
  fChain->SetBranchAddress("jetMV10", &jetMV10, &b_jetMV10);
  fChain->SetBranchAddress("jetMV11", &jetMV11, &b_jetMV11);
  fChain->SetBranchAddress("jetCombNN0", &jetCombNN0, &b_jetCombNN0);
  fChain->SetBranchAddress("jetCombNN1", &jetCombNN1, &b_jetCombNN1);
  fChain->SetBranchAddress("z0Vtx", &z0Vtx, &b_z0Vtx);
  fChain->SetBranchAddress("bpos", &bpos, &b_bpos);
  fChain->SetBranchAddress("blen", &blen, &b_blen);
  fChain->SetBranchAddress("bgap", &bgap, &b_bgap);
  fChain->SetBranchAddress("BDPhill", &BDPhill, &b_BDPhill);
  fChain->SetBranchAddress("BDPsill", &BDPsill, &b_BDPsill);
  fChain->SetBranchAddress("BpsiLep0", &BpsiLep0, &b_BpsiLep0);
  fChain->SetBranchAddress("BpsiLep1", &BpsiLep1, &b_BpsiLep1);
  fChain->SetBranchAddress("BPLeadLep", &BPLeadLep, &b_BPLeadLep);
  fChain->SetBranchAddress("BPSubLeadLep", &BPSubLeadLep, &b_BPSubLeadLep);
  fChain->SetBranchAddress("BELeadNeu", &BELeadNeu, &b_BELeadNeu);
  fChain->SetBranchAddress("BESubLeadNeu", &BESubLeadNeu, &b_BESubLeadNeu);
  fChain->SetBranchAddress("MWLead", &MWLead, &b_MWLead);
  fChain->SetBranchAddress("MWSubLead", &MWSubLead, &b_MWSubLead);
  fChain->SetBranchAddress("Hpt", &Hpt, &b_Hpt);
  fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
  fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
  fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
  fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
  fChain->SetBranchAddress("actualIntPerXing", &actualIntPerXing, &b_actualIntPerXing);
  fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
  fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
  fChain->SetBranchAddress("larError", &larError, &b_larError);
  fChain->SetBranchAddress("top_hfor_type", &top_hfor_type, &b_top_hfor_type);
  fChain->SetBranchAddress("MET_CellOut_Eflow_STVF_phi", &MET_CellOut_Eflow_STVF_phi, &b_MET_CellOut_Eflow_STVF_phi);
  fChain->SetBranchAddress("MET_CellOut_Eflow_STVF_et", &MET_CellOut_Eflow_STVF_et, &b_MET_CellOut_Eflow_STVF_et);
  fChain->SetBranchAddress("MET_CellOut_Eflow_STVF_sumet", &MET_CellOut_Eflow_STVF_sumet, &b_MET_CellOut_Eflow_STVF_sumet);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetArea_phi", &MET_CellOut_Eflow_JetArea_phi, &b_MET_CellOut_Eflow_JetArea_phi);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetArea_et", &MET_CellOut_Eflow_JetArea_et, &b_MET_CellOut_Eflow_JetArea_et);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetArea_sumet", &MET_CellOut_Eflow_JetArea_sumet, &b_MET_CellOut_Eflow_JetArea_sumet);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaJVF_phi", &MET_CellOut_Eflow_JetAreaJVF_phi, &b_MET_CellOut_Eflow_JetAreaJVF_phi);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaJVF_et", &MET_CellOut_Eflow_JetAreaJVF_et, &b_MET_CellOut_Eflow_JetAreaJVF_et);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaJVF_sumet", &MET_CellOut_Eflow_JetAreaJVF_sumet, &b_MET_CellOut_Eflow_JetAreaJVF_sumet);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaRhoEta5JVF_phi", &MET_CellOut_Eflow_JetAreaRhoEta5JVF_phi, &b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_phi);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaRhoEta5JVF_et", &MET_CellOut_Eflow_JetAreaRhoEta5JVF_et, &b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_et);
  fChain->SetBranchAddress("MET_CellOut_Eflow_JetAreaRhoEta5JVF_sumet", &MET_CellOut_Eflow_JetAreaRhoEta5JVF_sumet, &b_MET_CellOut_Eflow_JetAreaRhoEta5JVF_sumet);
  fChain->SetBranchAddress("MET_CellOut_Eflow_phi", &MET_CellOut_Eflow_phi, &b_MET_CellOut_Eflow_phi);
  fChain->SetBranchAddress("MET_CellOut_Eflow_et", &MET_CellOut_Eflow_et, &b_MET_CellOut_Eflow_et);
  fChain->SetBranchAddress("MET_CellOut_Eflow_sumet", &MET_CellOut_Eflow_sumet, &b_MET_CellOut_Eflow_sumet);
  fChain->SetBranchAddress("MET_Truth_NonInt_phi", &MET_Truth_NonInt_phi, &b_MET_Truth_NonInt_phi);
  fChain->SetBranchAddress("MET_Truth_NonInt_et", &MET_Truth_NonInt_et, &b_MET_Truth_NonInt_et);
  fChain->SetBranchAddress("MET_Truth_NonInt_sumet", &MET_Truth_NonInt_sumet, &b_MET_Truth_NonInt_sumet);
  fChain->SetBranchAddress("in_jet_n", &in_jet_n, &b_in_jet_n);
  fChain->SetBranchAddress("in_jet_pt", &in_jet_pt, &b_in_jet_pt);
  fChain->SetBranchAddress("in_jet_eta", &in_jet_eta, &b_in_jet_eta);
  fChain->SetBranchAddress("in_jet_phi", &in_jet_phi, &b_in_jet_phi);
  fChain->SetBranchAddress("in_jet_jvtxf", &in_jet_jvtxf, &b_in_jet_jvtxf);
  fChain->SetBranchAddress("m_mu_n", &m_mu_n, &b_m_mu_n);
  fChain->SetBranchAddress("m_mu_pt", &m_mu_pt, &b_m_mu_pt);
  fChain->SetBranchAddress("m_mu_matchchi2", &m_mu_matchchi2, &b_m_mu_matchchi2);
  fChain->SetBranchAddress("m_mu_matchndof", &m_mu_matchndof, &b_m_mu_matchndof);
  fChain->SetBranchAddress("m_mu_energyLossPar", &m_mu_energyLossPar, &b_m_mu_energyLossPar);
  fChain->SetBranchAddress("m_mu_etCore", &m_mu_etCore, &b_m_mu_etCore);
  fChain->SetBranchAddress("m_mu_id_theta_exPV", &m_mu_id_theta_exPV, &b_m_mu_id_theta_exPV);
  fChain->SetBranchAddress("m_mu_id_qoverp_exPV", &m_mu_id_qoverp_exPV, &b_m_mu_id_qoverp_exPV);
  fChain->SetBranchAddress("m_mu_me_theta_exPV", &m_mu_me_theta_exPV, &b_m_mu_me_theta_exPV);
  fChain->SetBranchAddress("m_mu_me_qoverp_exPV", &m_mu_me_qoverp_exPV, &b_m_mu_me_qoverp_exPV);
  fChain->SetBranchAddress("m_mu_MET_wpx", &m_mu_MET_wpx, &b_m_mu_MET_wpx);
  fChain->SetBranchAddress("m_mu_MET_wpy", &m_mu_MET_wpy, &b_m_mu_MET_wpy);
  fChain->SetBranchAddress("m_mu_MET_wet", &m_mu_MET_wet, &b_m_mu_MET_wet);
  fChain->SetBranchAddress("m_el_n", &m_el_n, &b_m_el_n);
  fChain->SetBranchAddress("m_el_MET_wpx", &m_el_MET_wpx, &b_m_el_MET_wpx);
  fChain->SetBranchAddress("m_el_MET_wpy", &m_el_MET_wpy, &b_m_el_MET_wpy);
  fChain->SetBranchAddress("m_el_MET_wet", &m_el_MET_wet, &b_m_el_MET_wet);
  fChain->SetBranchAddress("m_jetTruth_n", &m_jetTruth_n, &b_m_jetTruth_n);
  fChain->SetBranchAddress("m_jetTruth_E", &m_jetTruth_E, &b_m_jetTruth_E);
  fChain->SetBranchAddress("m_jetTruth_pt", &m_jetTruth_pt, &b_m_jetTruth_pt);
  fChain->SetBranchAddress("m_jetTruth_eta", &m_jetTruth_eta, &b_m_jetTruth_eta);
  fChain->SetBranchAddress("m_jetTruth_phi", &m_jetTruth_phi, &b_m_jetTruth_phi);
  fChain->SetBranchAddress("m_jet_n", &m_jet_n, &b_m_jet_n);
  fChain->SetBranchAddress("m_jet_E", &m_jet_E, &b_m_jet_E);
  fChain->SetBranchAddress("m_jet_pt", &m_jet_pt, &b_m_jet_pt);
  fChain->SetBranchAddress("m_jet_eta", &m_jet_eta, &b_m_jet_eta);
  fChain->SetBranchAddress("m_jet_phi", &m_jet_phi, &b_m_jet_phi);
  fChain->SetBranchAddress("m_jet_LArQuality", &m_jet_LArQuality, &b_m_jet_LArQuality);
  fChain->SetBranchAddress("m_jet_sumPtTrk", &m_jet_sumPtTrk, &b_m_jet_sumPtTrk);
  fChain->SetBranchAddress("m_jet_emfrac", &m_jet_emfrac, &b_m_jet_emfrac);
  fChain->SetBranchAddress("m_jet_jvtxf", &m_jet_jvtxf, &b_m_jet_jvtxf);
  fChain->SetBranchAddress("m_jet_flavor_weight_MV1", &m_jet_flavor_weight_MV1, &b_m_jet_flavor_weight_MV1);
  fChain->SetBranchAddress("m_jet_flavor_truth_label", &m_jet_flavor_truth_label, &b_m_jet_flavor_truth_label);
  fChain->SetBranchAddress("m_vxp_n", &m_vxp_n, &b_m_vxp_n);
  fChain->SetBranchAddress("m_vxp_nTracks", &m_vxp_nTracks, &b_m_vxp_nTracks);
  fChain->SetBranchAddress("cen_jet_n", &cen_jet_n, &b_cen_jet_n);
  fChain->SetBranchAddress("cen_jet_E", &cen_jet_E, &b_cen_jet_E);
  fChain->SetBranchAddress("cen_jet_pt", &cen_jet_pt, &b_cen_jet_pt);
  fChain->SetBranchAddress("cen_jet_eta", &cen_jet_eta, &b_cen_jet_eta);
  fChain->SetBranchAddress("cen_jet_phi", &cen_jet_phi, &b_cen_jet_phi);
  fChain->SetBranchAddress("cen_jet_sumPtTrk", &cen_jet_sumPtTrk, &b_cen_jet_sumPtTrk);
  fChain->SetBranchAddress("cen_jet_jvtxf", &cen_jet_jvtxf, &b_cen_jet_jvtxf);
  fChain->SetBranchAddress("cen_jet_flavor_weight_JetFitterCOMBNN", &cen_jet_flavor_weight_JetFitterCOMBNN, &b_cen_jet_flavor_weight_JetFitterCOMBNN);
  fChain->SetBranchAddress("cen_jet_flavor_truth_label", &cen_jet_flavor_truth_label, &b_cen_jet_flavor_truth_label);
  fChain->SetBranchAddress("m_mcevt_pdf_id1", &m_mcevt_pdf_id1, &b_m_mcevt_pdf_id1);
  fChain->SetBranchAddress("m_mcevt_pdf_id2", &m_mcevt_pdf_id2, &b_m_mcevt_pdf_id2);
  fChain->SetBranchAddress("m_mcevt_pdf_x1", &m_mcevt_pdf_x1, &b_m_mcevt_pdf_x1);
  fChain->SetBranchAddress("m_mcevt_pdf_x2", &m_mcevt_pdf_x2, &b_m_mcevt_pdf_x2);
  fChain->SetBranchAddress("m_mcevt_pdf_scale", &m_mcevt_pdf_scale, &b_m_mcevt_pdf_scale);
  Notify();
}

Bool_t MyAna::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void MyAna::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t MyAna::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.

  Bool_t sameCharge   = lepID0*lepID1>0;
  Bool_t sixjets      = m_jet_n >=6;
  Bool_t bJets        = nJets_Pt25_MV1_85 == 2;
  if(sameCharge&&sixjets&&bJets)
    return 1;
  return -1;
}
#endif // #ifdef MyAna_cxx
