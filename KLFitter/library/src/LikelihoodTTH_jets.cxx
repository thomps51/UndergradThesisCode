#include "LikelihoodTTH_jets.h" 
#include "ResolutionBase.h"
#include "PhysicsConstants.h"
#include "Permutations.h"
#include "DetectorBase.h"

#include <iostream> 
#include <BAT/BCMath.h> 

// --------------------------------------------------------- 
KLFitter::LikelihoodTTH_jets::LikelihoodTTH_jets()
{
  // define model particles 
  this -> DefineModelParticles(); 

  // define parameters 
  this -> DefineParameters(); 
}

// --------------------------------------------------------- 
KLFitter::LikelihoodTTH_jets::~LikelihoodTTH_jets()
{
  if (fParticlesModel)
    delete fParticlesModel; 
}

// --------------------------------------------------------

int KLFitter::LikelihoodTTH_jets::SetET_miss_XY_SumET(double etx, double ety, double sumet)
{
  ETmiss_x = etx;
  ETmiss_y = ety;
  SumET = sumet;
  return 1;
}

// --------------------------------------------------------- 
int KLFitter::LikelihoodTTH_jets::DefineModelParticles()
{
  // create the particles of the model 
  fParticlesModel = new KLFitter::Particles(); 

  TLorentzVector * lv = 0; 

  // add model particles 
  fParticlesModel -> AddParticle(lv = new TLorentzVector(),     //require b tag maybe
                                 KLFitter::Particles::kParton,
                                 "hadronic b quark",
                                 0.0);   //0.0 is probability of being b-tagged

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton, 
                                 "leptonic b quark",
                                 0.0); 

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton,  //from hadronic W from top
                                 "light quark 1",
                                 0.0); 

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton, //from hadronic W from top
                                 "light quark 2",
                                 0.0); 

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),    //from hadronic W from higgs
                                 KLFitter::Particles::kParton, 
                                 "light quark 3",
                                 0.0); 

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton, //from hadronic W from higgs
                                 "light quark 4",
                                 0.0); 


  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kBoson, 
                                 "hadronic W from top"); 



  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kBoson, 
                                 "hadronic W from higgs"); 


  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton,
                                 "hadronic top",
                                 0.0); 

  // no error 
  return 1;
}

// --------------------------------------------------------- 
void KLFitter::LikelihoodTTH_jets::DefineParameters()
{
  // add parameters of model
  this -> AddParameter("energy hadronic b",       0.0, 1000.0); //fPhysicsConstants -> MassBottom()
  this -> AddParameter("energy leptonic b",       0.0, 1000.0);  //fPhysicsConstants -> MassBottom()
  this -> AddParameter("energy light quark 1",    0.0, 1000.0); 
  this -> AddParameter("energy light quark 2",    0.0, 1000.0); 
  this -> AddParameter("energy light quark 3",    0.0, 1000.0);
  this -> AddParameter("energy light quark 4",    0.0, 1000.0);
}

// --------------------------------------------------------- 
int KLFitter::LikelihoodTTH_jets::CalculateLorentzVectors(std::vector <double> parameters)
{
  // variables
  double E, px, py, pz, pabs, scale; 
  TLorentzVector * vect; 

  // hadronic b quark 
  vect = (*fParticlesPermuted) -> Parton(0); 
  E  = parameters.at(0); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = sqrt(E*E - fPhysicsConstants -> MassBottom()*fPhysicsConstants -> MassBottom()) / pabs; 
  fParticlesModel -> Parton(0) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 


  // leptonic b quark 
  vect = (*fParticlesPermuted) -> Parton(1); 
  E  = parameters.at(1); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = sqrt(E*E - fPhysicsConstants -> MassBottom()*fPhysicsConstants -> MassBottom()) / pabs; 
  fParticlesModel -> Parton(1) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 


  // light quark 1 (from top)
  vect = (*fParticlesPermuted) -> Parton(2); 
  E  = parameters.at(2); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = E / pabs; 
  fParticlesModel -> Parton(2) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 


  // light quark 2 (from top)
  vect = (*fParticlesPermuted) -> Parton(3); 
  E  = parameters.at(3); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = E / pabs;
  fParticlesModel -> Parton(3) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 

  // light quark 3 (from higgs)
  vect = (*fParticlesPermuted) -> Parton(4); 
  E  = parameters.at(4); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = E / pabs; 
  fParticlesModel -> Parton(4) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 


  // light quark 4 (from higgs)
  vect = (*fParticlesPermuted) -> Parton(5); 
  E  = parameters.at(5); 
  px = vect -> Px(); 
  py = vect -> Py(); 
  pz = vect -> Pz(); 
  pabs = sqrt(px*px + py*py + pz*pz); 
  scale = E / pabs;
  fParticlesModel -> Parton(5) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E); 





  // composite particles 

  // hadronic W from top 
  *(fParticlesModel -> Boson(0)) = *(fParticlesModel -> Parton(2)) + *(fParticlesModel -> Parton(3)); 

  // hadronic W from higgs 
  *(fParticlesModel -> Boson(1)) = *(fParticlesModel -> Parton(4)) + *(fParticlesModel -> Parton(5)); 

  // hadronic top 
  *(fParticlesModel -> Parton(6)) = *(fParticlesModel -> Boson(0)) + *(fParticlesModel -> Parton(0)); 



  // no error 
  return 1; 
}

// --------------------------------------------------------- 
int KLFitter::LikelihoodTTH_jets::Initialize()
{
  // error code 
  int err = 1; 

  // adjust parameter ranges 
  err *= this -> AdjustParameterRanges(); 

  // return error code 
  return err; 
}

// --------------------------------------------------------- 
int KLFitter::LikelihoodTTH_jets::RemoveInvariantParticlePermutations()
{
  // error code 
  int err = 1; 

//  // remove the permutation from the second and the third jet
//  KLFitter::Particles::ParticleType ptype = KLFitter::Particles::kParton;
//  int indexArray_Jets[2] = {2, 3};
//  std::vector<int> indexVector_Jets(indexArray_Jets, indexArray_Jets + sizeof(indexArray_Jets)/sizeof(int));
//  err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets); 

// remove the permutation from first 2 light jets from W (jets at spot 2 and 3)

KLFitter::Particles::ParticleType ptype = KLFitter::Particles::kParton;
int indexArray_Jets[2] = {2, 3};
std::vector<int> indexVector_Jets(indexArray_Jets, indexArray_Jets + sizeof(indexArray_Jets)/sizeof(int));
err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets);

// remove the permutation from second 2 lights jets from W (jets at spot 4 and 5)

ptype = KLFitter::Particles::kParton;
int indexArray_Jets2[2] = {4, 5};
std::vector<int> indexVector_Jets2(indexArray_Jets2, indexArray_Jets2 + sizeof(indexArray_Jets2)/sizeof(int));
err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets2);


//  // remove the permutation from the two Higgs b jets
//  ptype = KLFitter::Particles::kParton;
//  indexArray_Jets[0] = 4;
//  indexArray_Jets[1] = 5;
//  std::vector<int> indexVector_Jets2(indexArray_Jets, indexArray_Jets + sizeof(indexArray_Jets)/sizeof(int));
//  err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets2); 

//  // remove the permutation from the muons
//  ptype = KLFitter::Particles::kMuon;
//  KLFitter::Particles * particles = (*fPermutations) -> Particles();
//  int indexArray_Muons[particles->NMuons()];
//  for (int iMuon = 0; iMuon < particles->NMuons(); iMuon++)
//    indexArray_Muons[iMuon] = iMuon;
//  std::vector<int> indexVector_Muons(indexArray_Muons, indexArray_Muons + sizeof(indexArray_Muons)/sizeof(int));
//  err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Muons); 

  // return error code 
  return err; 
}

// --------------------------------------------------------- 
int KLFitter::LikelihoodTTH_jets::AdjustParameterRanges()
{
  // adjust limits 
  double nsigmas = 1.0; 
  double nsigmas_lepton = 2.0; 

  // parameter 0: energy of hadronic b quark 
  double E = (*fParticlesPermuted) -> Parton(0) -> E(); 
  double Emin = TMath::Max(0.001 /*fPhysicsConstants -> MassBottom()*/, E - nsigmas * sqrt(E)); 
  double Emax  = E + nsigmas * sqrt(E); 
  this -> SetParameterRange(0, Emin, Emax); 

  // parameter 1: energy of leptonic b quark 
  E = (*fParticlesPermuted) -> Parton(1) -> E(); 
  Emin = TMath::Max(0.001  /*fPhysicsConstants -> MassBottom()*/, E - nsigmas * sqrt(E)); 
  Emax  = E + nsigmas * sqrt(E); 
  this -> SetParameterRange(1, Emin, Emax); 

  // parameter 2: energy of light quark 1 
  E = (*fParticlesPermuted) -> Parton(2) -> E(); 
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E)); 
  Emax  = E + nsigmas * sqrt(E); 
  this -> SetParameterRange(2, Emin, Emax); 

  // parameter 3: energy of light quark2 
  E = (*fParticlesPermuted) -> Parton(3) -> E(); 
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E)); 
  Emax  = E + nsigmas * sqrt(E); 
  this -> SetParameterRange(3, Emin, Emax); 

  // parameter 4: energy of light quark 3 (from higgs)
  E = (*fParticlesPermuted) -> Parton(4) -> E(); 
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E)); 
  Emax  = E + nsigmas * sqrt(4); 
  this -> SetParameterRange(4, Emin, Emax); 

  // parameter 5: energy of light quark 4 (from higgs)
  E = (*fParticlesPermuted) -> Parton(5) -> E(); 
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E)); 
  Emax  = E + nsigmas * sqrt(E); 
  this -> SetParameterRange(5, Emin, Emax); 


  // no error 
  return 1; 
}

// --------------------------------------------------------- 
double KLFitter::LikelihoodTTH_jets::LogLikelihood(const std::vector<double> &params)
{
  // calculate 4-vectors 
  this -> CalculateLorentzVectors(params); 

  // define log of likelihood 
  double logprob = 0.; 

  bool TFgoodTmp(true);

  // energy resolution terms 
  logprob += log( (*fDetector) -> ResEnergyBJet( (*fParticlesPermuted) -> Parton(0) -> Eta() ) -> p( params.at(0), (*fParticlesPermuted) -> Parton(0) -> E(),TFgoodTmp) ); 
  logprob += log( (*fDetector) -> ResEnergyBJet( (*fParticlesPermuted) -> Parton(1) -> Eta() ) -> p( params.at(1), (*fParticlesPermuted) -> Parton(1) -> E(),TFgoodTmp) ); 
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(2) -> Eta() ) -> p( params.at(2), (*fParticlesPermuted) -> Parton(2) -> E(),TFgoodTmp) ); 
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(3) -> Eta() ) -> p( params.at(3), (*fParticlesPermuted) -> Parton(3) -> E(),TFgoodTmp) ); 
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(4) -> Eta() ) -> p( params.at(4), (*fParticlesPermuted) -> Parton(4) -> E(),TFgoodTmp) ); 
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(5) -> Eta() ) -> p( params.at(5), (*fParticlesPermuted) -> Parton(5) -> E(),TFgoodTmp) ); 


  // Breit-Wigner of hadronically decaying W-boson from top
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(0) -> M(), fPhysicsConstants -> MassW(), fPhysicsConstants -> GammaW()); 
        

   // Breit-Wigner of hadronically decaying W-boson from higgs (virtual)
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(1) -> M(), 33.5, 13.5); 
        

 

  // Breit-Wigner of hadronically decaying top quark
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Parton(6) -> M(), fPhysicsConstants -> MassTop(), fPhysicsConstants -> GammaTop()); 
        

  // return log of likelihood 
  return logprob; 
}

// --------------------------------------------------------- 

