/*!
 * \class KLFitter::InterfaceD3PD_dilepton
 * \brief A class for interfacing a Root file. 
 * \author Olaf Nackenhorst, Tamara Vazquez Schröder
 *
 * This class interfaces to a Root file which contains events. The
 * events are stored in a Root tree of a certain structure. 
 */

// --------------------------------------------------------- 

#ifndef INTERFACED3PDDILEPTON
#define INTERFACED3PDDILEPTON

// --------------------------------------------------------- 

#include "InterfaceRoot.h" 
#include <TChain.h>

// --------------------------------------------------------- 

class TTree;

/*!
 * \namespace KLFitter
 * \brief The KLFitter namespace
 */
namespace KLFitter
{

  class InterfaceD3PD_dilepton : public InterfaceRoot
  {
                
  public: 
                
    /** \name Constructors and destructors */ 
    /* @{ */ 
                
    /** 
     * The default constructor. 
     */ 
    InterfaceD3PD_dilepton(); 
                
    /**
     * The default destructor.
     */
    virtual ~InterfaceD3PD_dilepton(); 

    /* @} */
    /** \name Member functions (Get)  */
    /* @{ */
                
    /**
     * Return the number of events. 
     * @return The number of events
     */ 
    int NEvents(); 

    /**
     * Return the measured missing transverse energy. 
     * @return The missing ET
     */ 
    double ET_miss()
    { return met_et ; }; 

    /**
     * Return the measured missing transverse energy (x component). 
     * @return The missing ET (x component)
     */ 
    double ET_miss_x()
    { return met_x ; }; 

    /**
     * Return the measured missing transverse energy (y component). 
     * @return The missing ET (y component)
     */ 
    double ET_miss_y()
    { return met_y ; }; 

    /**
     * Return the measured scalar sum of transverse energy. 
     * @return The summed ET
     */ 
    double Sum_ET()
    { return met_sumet  ; }; 

    /* @} */
    /** \name Member functions (Set)  */
    /* @{ */

    /* @} */
    /** \name Member functions (misc)  */
    /* @{ */

    /**
     * Open Root file containing tree.
     * @param filename The filename. 
     * @param opt Options.
     * @return An error code.
     */ 
    int OpenRootFile(const char * filename, Option_t * opt = "READ");
    /**
     * Open Root files containing trees.
     * @param filenames vector containing the filenames. 
     * @param opt Options.
     * @return An error code.
     */ 
    int OpenRootFiles(std::vector<std::string> filenames, Option_t * opt = "READ");		

    /**
     * Get a tree from Root file and set branch addresses. 
     * @param treename The name of the tree.
     * @return An error code. 
     */ 
    int ConnectTree(const char * treename);

    /**
     * Set branch addresses for a given tree directly, skip OpenRootFile. 
     * @param treename The name of the tree.
     * @return An error code. 
     */ 
    int ConnectTree(TTree * fTree); 
    
    /**
     * Set branch addresses for a given Chain directly, skip OpenRootFile. 
     * @param fChain The name of the Chain.
     * @return An error code. 
     */ 
    int ConnectChain(TChain * fChain); 

    /**
     * Get event from Root tree. 
     * @param index The event index.
     * @return An error code.
     */ 
    int Event(int index); 

    /**
     * Fill list of particles.
     * @return An error code. 
     */ 
    int FillParticles(); 

    /**
     * Define indices of truth particles.
     * @return An error code. 
     */
    int TruthMapper();

    /**
     * Checks whether particle originates from certain pdg id.
     * @param truthIdx The index of the particle to check.
     * @param pdg The pdg id which is under test.
     * @return true if particle with index truthIdx originates directly from a particle with pdgid 'pdg'
     */ 
    bool OriginatesFromPDG(int truthIdx,long pdg);

    /**
     * Checks whether event is proper and sane MC event.
     * @return true if event is sane
     */ 
    bool IsProperMCEvent();

    /* @} */

  protected: 

  private: 

    /**
     * The Root tree. 
     */ 
    TTree * fTree;
    /**
     * The Root chain. 
     */      
    TChain * fChain;            
    /** \name Tree variables  */
    /* @{ */

    UInt_t eventNumber; 
    Float_t eventWeight;  
    
    std::vector<float> * mu_E;  
    std::vector<float> * mu_eta;  
    std::vector<float> * mu_phi;  
    std::vector<float> * mu_pt;
    std::vector<float> * mu_charge;

    std::vector<float> * el_E;  
    std::vector<float> * el_eta;
    std::vector<float> * el_deteta;  
    std::vector<float> * el_phi;  
    std::vector<float> * el_charge;

    int jet_n;
    std::vector<float> * jet_E;  
    std::vector<float> * jet_pt;  
    std::vector<float> * jet_eta;
    std::vector<float> * jet_det_eta;  
    std::vector<float> * jet_phi;  
    std::vector<float> * jet_MV1; 

    float met_et; 
    float met_x; 
    float met_y; 
    float met_sumet;
    
    // internal variables for the truth mapping
    int TruthIdx_t;     //top quark
    int TruthIdx_tbar;    //antitop quark
    int TruthIdx_b;     // b quark
    int TruthIdx_bbar;    // antib quark
    int TruthIdx_Wplus;     // W+
    int TruthIdx_Wminus;    // W-
    int TruthIdx_QfromWplus;  // the quark from W+
    int TruthIdx_QbarfromWplus;   // the antiquark from W+
    int TruthIdx_QfromWminus;   // the quark from W-
    int TruthIdx_QbarfromWminus;  // the antiquark from W-
    int TruthIdx_lplus;     // the lepton (e, mu, tau) with positive charge 
    int TruthIdx_lminus;    // the lepton (e, mu, tau) with positive charge
    int TruthIdx_n;     // neutrino
    int TruthIdx_nbar;    // antineutrino
    bool Truth_WplusHad;    // true if W+ decayed hadronically
    bool Truth_WminusHad;   // true if W- decayed hadronically

    // Truth branch variables to read from D3PDs
    std::vector<float> * mc_eta;
    std::vector<float> * mc_phi;
    std::vector<float> * mc_pt;
    std::vector<int> * mc_pdgId;
    std::vector<float> * mc_m;
    std::vector<int> * mc_status;
    std::vector<std::vector<int> > *mc_parent_index;
    std::vector<std::vector<int> > *mc_child_index;

    /* @} */
  }; 

} // namespace KLFitter 

// --------------------------------------------------------- 

#endif 

