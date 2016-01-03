//
// ttH analysis code wrapper
//

void run_macro() {
  gSystem->Load("lib/libBAT.so");

  //equivalent to ".L JERProvider.cxx+" in ROOT
  gSystem->Load("KLFitter/libKLFitter.so");
  // Load the analysis module MyAna class
//  gSystem->SetIncludePath("-fopenmp");  used for openMP implementation, would not recommend (very slow)
//  gSystem->AddLinkedLibs("-lgomp");
  gROOT->LoadMacro("MyAna.C+");

  // Read the list of input root files
  TFileCollection* fc = new TFileCollection("inputfiles", "inputfiles", "input.txt");
  TChain* ch = new TChain("HWWTree_em");
  ch->AddFileInfoList(fc->GetList());

  // Declare the analysis module
  MyAna m(ch);

  // Loop over events
  // Current functions: 
  // Loop()   : Skeleton Loop over data
  // Cutflow(): Performs cutflow with histograms, change cuts in function
  // CreateNewTree(): creates new tree(s) based on input tree(s)
  m.Loop();
}
