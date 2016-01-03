#include "LikelihoodTTH_hadronic.h"
#include "ResolutionBase.h"
#include "PhysicsConstants.h"
#include "Permutations.h"
#include "DetectorBase.h"
#include <cmath>

#include <iostream>
#include <BAT/BCMath.h>

KLFitter::LikelihoodTTH_hadronic::LikelihoodTTH_hadronic()
{
  // define model particles
  this -> DefineModelParticles();

  // define parameters
  this -> DefineParameters();
}

// ---------------------------------------------------------

KLFitter::LikelihoodTTH_hadronic::~LikelihoodTTH_hadronic()
{
  if (fParticlesModel)
    delete fParticlesModel;
}

// ---------------------------------------------------------

int KLFitter::LikelihoodTTH_hadronic::DefineModelParticles()
{
  // create the particles of the model
  fParticlesModel = new KLFitter::Particles();

  TLorentzVector * lv = new TLorentzVector();

  // add model particles
  
  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton,  //from hadronic W 1 from higgs
                                 "light quark 1",
                                 0.0);

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton,  //from hadronic W 1 from higgs
                                 "light quark 2",
                                 0.0);

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),     //from hadronic W 2 from higgs
                                 KLFitter::Particles::kParton,
                                 "light quark 3",
                                 0.0);

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kParton, //from hadronic W 2 from higgs
                                 "light quark 4",
                                 0.0);

  fParticlesModel -> AddParticle(lv =new TLorentzVector(),
                                 KLFitter::Particles::kBoson,
                                 "hadronic W 1 from higgs");

  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kBoson,
                                 "hadronic W 2 from higgs");
  fParticlesModel -> AddParticle(lv = new TLorentzVector(),
                                 KLFitter::Particles::kBoson,
                                 "Higgs",
                                 0.0);
  return 1;
}

// ---------------------------------------------------------

void KLFitter::LikelihoodTTH_hadronic::DefineParameters()
{
  this -> AddParameter("energy light quark 1",    0.0, 1000.0);
  this -> AddParameter("energy light quark 2",    0.0, 1000.0);
  this -> AddParameter("energy light quark 3",    0.0, 1000.0);
  this -> AddParameter("energy light quark 4",    0.0, 1000.0);
}

// ---------------------------------------------------------

int KLFitter::LikelihoodTTH_hadronic::CalculateLorentzVectors(std::vector <double> parameters)
{
  // variables
  double E, px, py, pz, pabs, scale;
  TLorentzVector * vect;

  // light quark 1 (from higgs W 1)
  vect = (*fParticlesPermuted) -> Parton(0);
  E  = parameters.at(0);
  px = vect -> Px();
  py = vect -> Py();
  pz = vect -> Pz();
  pabs = sqrt(px*px + py*py + pz*pz);
  scale = E / pabs;
  fParticlesModel -> Parton(0) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E);


  // light quark 2 (from higgs W 1)
  vect = (*fParticlesPermuted) -> Parton(1);
  E  = parameters.at(1);
  px = vect -> Px();
  py = vect -> Py();
  pz = vect -> Pz();
  pabs = sqrt(px*px + py*py + pz*pz);
  scale = E / pabs;
  fParticlesModel -> Parton(1) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E);

  // light quark 3 (from higgs W 2)
  vect = (*fParticlesPermuted) -> Parton(2);
  E  = parameters.at(2);
  px = vect -> Px();
  py = vect -> Py();
  pz = vect -> Pz();
  pabs = sqrt(px*px + py*py + pz*pz);
  scale = E / pabs;
  fParticlesModel -> Parton(2) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E);


  // light quark 4 (from higgs W 2)
  vect = (*fParticlesPermuted) -> Parton(3);
  E  = parameters.at(3);
  px = vect -> Px();
  py = vect -> Py();
  pz = vect -> Pz();
  pabs = sqrt(px*px + py*py + pz*pz);
  scale = E / pabs;
  fParticlesModel -> Parton(3) -> SetPxPyPzE(scale * px, scale * py, scale * pz, E);

  // 1st hadronic W from higgs
  *(fParticlesModel -> Boson(0)) = *(fParticlesModel -> Parton(0)) + *(fParticlesModel -> Parton(1));

  // 2nd hadronic W from higgs
  *(fParticlesModel -> Boson(1)) = *(fParticlesModel -> Parton(2)) + *(fParticlesModel -> Parton(3));

  // Higgs
  *(fParticlesModel -> Boson(2)) = *(fParticlesModel -> Boson(0)) + *(fParticlesModel -> Boson(1));

  // no error
  return 1;
}

// ---------------------------------------------------------

int KLFitter::LikelihoodTTH_hadronic::Initialize()
{
  // error code
  int err = 1;

  // adjust parameter ranges
  err *= this -> AdjustParameterRanges();
  // return error code
  return err;
}

// ---------------------------------------------------------

int KLFitter::LikelihoodTTH_hadronic::RemoveInvariantParticlePermutations()
{
  // error code
  int err = 1;

  // remove the permutation from first 2 light jets from W 1 (jets at spot 0 and 1)
  
  KLFitter::Particles::ParticleType ptype = KLFitter::Particles::kParton;
  int indexArray_Jets[2] = {0, 1};
  std::vector<int> indexVector_Jets(indexArray_Jets, indexArray_Jets + sizeof(indexArray_Jets)/sizeof(int));
  err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets);
  
  // remove the permutation from second 2 lights jets from W 2 (jets at spot 2 and 3)
  
  ptype = KLFitter::Particles::kParton;
  int indexArray_Jets2[2] = {2, 3};
  std::vector<int> indexVector_Jets2(indexArray_Jets2, indexArray_Jets2 + sizeof(indexArray_Jets2)/sizeof(int));
  err *= (*fPermutations) -> InvariantParticlePermutations(ptype, indexVector_Jets2);

  // return error code
  return err;
}

// ---------------------------------------------------------

int KLFitter::LikelihoodTTH_hadronic::AdjustParameterRanges()
{
  // adjust limits
  double nsigmas = 1.0;

  // parameter 0: energy of light quark 1
  double  E = (*fParticlesPermuted) -> Parton(0) -> E();
  double  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E));
  double  Emax  = E + nsigmas * sqrt(E);
  this -> SetParameterRange(0, Emin, Emax);

  // parameter 1: energy of light quark2
  E = (*fParticlesPermuted) -> Parton(1) -> E();
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E));
  Emax  = E + nsigmas * sqrt(E);
  this -> SetParameterRange(1, Emin, Emax);

  // parameter 2: energy of light quark 3 (from higgs)
  E = (*fParticlesPermuted) -> Parton(2) -> E();
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E));
  Emax  = E + nsigmas * sqrt(E);
  this -> SetParameterRange(2, Emin, Emax);

  // parameter 3: energy of light quark 4 (from higgs)
  E = (*fParticlesPermuted) -> Parton(3) -> E();
  Emin = TMath::Max(0.001, E - nsigmas * sqrt(E));
  Emax  = E + nsigmas * sqrt(E);
  this -> SetParameterRange(3, Emin, Emax);

  // no error
  return 1;
}

// ---------------------------------------------------------

double KLFitter::LikelihoodTTH_hadronic::LogLikelihood(const std::vector<double> &params)
{
    // calculate 4-vectors
  this -> CalculateLorentzVectors(params);

  // define log of likelihood
  double logprob = 0.;
//  double logprob2= 0.;
  bool TFgoodTmp(true);

  // energy resolution terms
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(0) -> Eta() ) -> p( params.at(0), (*fParticlesPermuted) -> Parton(0) -> E(),TFgoodTmp) );
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(1) -> Eta() ) -> p( params.at(1), (*fParticlesPermuted) -> Parton(1) -> E(),TFgoodTmp) );
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(2) -> Eta() ) -> p( params.at(2), (*fParticlesPermuted) -> Parton(2) -> E(),TFgoodTmp) );
  logprob += log( (*fDetector) -> ResEnergyLightJet( (*fParticlesPermuted) -> Parton(3) -> Eta() ) -> p( params.at(3), (*fParticlesPermuted) -> Parton(3) -> E(),TFgoodTmp) );

  if(!TFgoodTmp)
  {
    std::cout<<"Error in using Transfer Function: check that Pt > 15 Gev and |eta|<2.5 for all objects"<<std::endl;
  }

  // Breit-Wigner of higgs
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(2) -> M(), 125, 0.004078);

//  logprob2=logprob;
 
  // Breit-Wigner of hadronically decaying W-boson 1 from higgs (virtual)
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(0) -> M(), 33.5, 13.5);

  // Breit-Wigner of hadronically decaying W-boson 2 from higgs
  logprob += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(1) -> M(), fPhysicsConstants -> MassW(), fPhysicsConstants -> GammaW());

  // Other virtual possiblity

//  logprob2 += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(0) -> M(), fPhysicsConstants -> MassW(), fPhysicsConstants -> GammaW());

//  logprob2 += BCMath::LogBreitWignerRel( fParticlesModel -> Boson(1) -> M(), 33.5, 13.5);

  // return max log of likelihood
  return logprob;
//  return fmax(logprob,logprob2);
}
