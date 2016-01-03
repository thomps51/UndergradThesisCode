/*!
 * \class KLFitter::LikelihoodTTH_WW
 * \brief A class implementing a likelihood for the ttH->lnu_b_jj_b_lnu_jj. 
 * \author Kevin Kr&ouml;ninger
 * \version 1.3
 * \date 03.12.2009
 *
 * This class represents a likelihood for the ttbar into e_jets. 
 */

// --------------------------------------------------------- 

#ifndef LIKELIHOODTTH_WW
#define LIKELIHOODTTH_WW

// --------------------------------------------------------- 

#include "PREPROC.h"
#include "LikelihoodBase.h" 

// --------------------------------------------------------- 

/*!
 * \namespace KLFitter
 * \brief The KLFitter namespace
 */
namespace KLFitter
{

  class LikelihoodTTH_WW : public KLFitter::LikelihoodBase
  {
                
  public: 
                
    /** \name Constructors and destructors */ 
    /* @{ */ 
                
    /** 
     * The default constructor. 
     */ 
    LikelihoodTTH_WW(); 
                
    /**
     * The default destructor.
     */
    virtual ~LikelihoodTTH_WW(); 

    /* @} */
    /** \name Member functions (Get)  */
    /* @{ */

    /* @} */
    /** \name Member functions (Set)  */
    /* @{ */

    /* @} */
    /** \name Member functions (misc)  */
    /* @{ */

    /* @} */
    /** \name Member functions (BAT)  */
    /* @{ */

    /**
     * Define the parameters of the fit. 
     */ 
    void DefineParameters();

    /** 
     * The prior probability definition, overloaded from BCModel. 
     * @param parameters A vector of parameters (double values). 
     * @return The logarithm of the prior probability. 
     */
    double LogAPrioriProbability(std::vector <double> KLFITTER_UNUSED(parameters))
    { return 0; }; 
                
    /** 
     * The posterior probability definition, overloaded from BCModel. 
     * @param parameters A vector of parameters (double values). 
     * @return The logarithm of the prior probability. 
     */
    double LogLikelihood(const std::vector<double> &params); 

    /* @} */
    int SetET_miss_XY_SumET(double etx, double ety, double sumet);


  protected: 

    double ETmiss_x;
    double ETmiss_y;
    double SumET;

    /** \name Member functions (misc)  */
    /* @{ */

    /**
     * Update 4-vectors of model particles. 
     * @return An error flag.
     */ 
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

  protected: 
                
  }; 

} // namespace KLFitter 

// --------------------------------------------------------- 

#endif 

