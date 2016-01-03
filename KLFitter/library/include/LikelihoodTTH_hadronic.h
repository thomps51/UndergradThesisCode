/*
 * Likelihood for ttH(H->jjjj)(tt->dileptonic)
 * Tony Thompson
*/ 
// ---------------------------------------------------------

#ifndef LIKELIHOODTTH_HADRONIC
#define LIKELIHOODTTH_HADRONIC

// ---------------------------------------------------------

#include "PREPROC.h"
#include "LikelihoodBase.h"

// ---------------------------------------------------------

namespace KLFitter
{
  class LikelihoodTTH_hadronic : public KLFitter::LikelihoodBase
  {
  public:
    LikelihoodTTH_hadronic();
    
    virtual ~LikelihoodTTH_hadronic();

    // define the parameters of the fit
    void DefineParameters();

    /**
     * The posterior probability definition, overloaded from BCModel.
     * @param parameters A vector of parameters (double values).
     * @return The logarithm of the prior probability.
     */
    double LogLikelihood(const std::vector<double> &params);
  
  protected:

    int CalculateLorentzVectors(std::vector <double> parameters);

    /**
     * Initialize the likelihood for the event
     */
    int Initialize();

    /**
     * Adjust parameter ranges
     */
    int AdjustParameterRanges();

    /**
     * Define the model particles
     * @return An error code.
     */
    int DefineModelParticles();

    /**
     * Remove invariant particle permutations.
     * @return An error code.
     */
    int RemoveInvariantParticlePermutations();

    /* @} */  
  };
}


#endif 
