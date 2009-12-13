// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

#if !defined(pylith_faults_cohesivedynldata_hh)
#define pylith_faults_cohesivedynldata_hh

namespace pylith {
  namespace faults {
     class CohesiveDynLData;
  } // pylith
} // faults

class pylith::faults::CohesiveDynLData
{

// PUBLIC METHODS ///////////////////////////////////////////////////////
public :
  
  /// Constructor
  CohesiveDynLData(void);

  /// Destructor
  ~CohesiveDynLData(void);

// PUBLIC MEMBERS ///////////////////////////////////////////////////////
public:

  char* meshFilename; ///< Filename for input mesh

  /// @name Quadrature information
  //@{
  int spaceDim; ///< Number of dimensions in vertex coordinates
  int cellDim; ///< Number of dimensions associated with cell
  int numBasis; ///< Number of vertices in cell
  int numQuadPts; ///< Number of quadrature points
  double* quadPts; ///< Coordinates of quad pts in ref cell
  double* quadWts; ///< Weights of quadrature points
  double* basis; ///< Basis fns at quadrature points
  double* basisDeriv; ///< Derivatives of basis fns at quad pts
  double* verticesRef; ///< Coordinates of vertices in ref cell (dual basis)
  //@}

  /// @name Fault information
  //@{
  int id; ///< Fault material identifier
  char* label; ///< Label for fault
  char* initialTractFilename; ///< Name of db for final slip
  //@}

  /// @name Input fields
  //@{
  double* fieldIncr; ///< Solution increment field at time t.
  //@}

  /// @name Calculated values.
  //@{
  double* orientation; ///< Expected values for fault orientation.
  double* area; ///< Expected values for fault area.
  double* fieldIncrSlip; ///< Expected values for solution increment for slipping case.
  double* fieldIncrOpen; ///< Expected values for solution increment for opening case.

  int* constraintVertices; ///< Expected points for constraint vertices
  int* constraintCells; ///< Expected cells for constraint vertices
  int numConstraintVert; ///< Number of constraint vertices
  //@}

};

#endif // pylith_faults_cohesivedynldata_hh

// End of file
