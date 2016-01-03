#include "KLFitter/library/include/Fitter.h"

void rootMacro()
{
  gSystem->Load("lib/libBAT.so");
  gSystem->Load("KLFitter/libKLFitter.so");
  KLFitter::Fitter * myFitter = new KLFitter::Fitter(); 
}
