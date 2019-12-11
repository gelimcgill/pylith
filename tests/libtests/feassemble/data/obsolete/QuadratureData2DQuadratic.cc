// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2017 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application quadratureapp.

#include "QuadratureData2DQuadratic.hh"

const int pylith::feassemble::QuadratureData2DQuadratic::_numVertices = 6;

const int pylith::feassemble::QuadratureData2DQuadratic::_spaceDim = 2;

const int pylith::feassemble::QuadratureData2DQuadratic::_numCells = 1;

const int pylith::feassemble::QuadratureData2DQuadratic::_cellDim = 2;

const int pylith::feassemble::QuadratureData2DQuadratic::_numBasis = 6;

const int pylith::feassemble::QuadratureData2DQuadratic::_numQuadPts = 6;

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_vertices[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00,  2.00000000e-01,
 -1.50000000e+00,  5.00000000e-01,
 -2.50000000e-01,  3.50000000e-01,
 -1.25000000e+00, -2.50000000e-01,
  0.00000000e+00, -4.00000000e-01,
};

const int pylith::feassemble::QuadratureData2DQuadratic::_cells[] = {
       0,       1,       2,       3,       4,       5,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00,
  0.00000000e+00,  0.00000000e+00,
 -1.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -1.00000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_quadPtsRef[] = {
 -7.50000000e-01, -7.50000000e-01,
  7.50000000e-01, -7.50000000e-01,
 -7.50000000e-01,  7.50000000e-01,
  0.00000000e+00, -7.50000000e-01,
 -7.50000000e-01,  0.00000000e+00,
  2.50000000e-01,  2.50000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_quadWts[] = {
  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_quadPts[] = {
 -8.12500000e-01, -6.62500000e-01,
  6.87500000e-01,  2.37500000e-01,
 -1.18750000e+00,  4.62500000e-01,
 -6.25000000e-02, -2.12500000e-01,
 -1.00000000e+00, -1.00000000e-01,
 -6.25000000e-02,  6.87500000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_basis[] = {
  3.75000000e-01, -9.37500000e-02,
 -9.37500000e-02,  6.25000000e-02,
  3.75000000e-01,  3.75000000e-01,
  0.00000000e+00,  6.56250000e-01,
 -9.37500000e-02,  4.37500000e-01,
 -0.00000000e+00, -0.00000000e+00,
  0.00000000e+00, -9.37500000e-02,
  6.56250000e-01,  4.37500000e-01,
 -0.00000000e+00, -0.00000000e+00,
 -9.37500000e-02,  0.00000000e+00,
 -9.37500000e-02,  2.50000000e-01,
  1.87500000e-01,  7.50000000e-01,
 -9.37500000e-02, -9.37500000e-02,
  0.00000000e+00,  2.50000000e-01,
  7.50000000e-01,  1.87500000e-01,
  3.75000000e-01,  1.56250000e-01,
  1.56250000e-01,  1.56250000e+00,
 -6.25000000e-01, -6.25000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_basisDerivRef[] = {
 -1.00000000e+00, -1.00000000e+00,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  2.50000000e-01,
 -2.50000000e-01,  1.25000000e+00,
  1.25000000e+00, -2.50000000e-01,
  5.00000000e-01,  5.00000000e-01,
  1.25000000e+00,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  1.75000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -1.75000000e+00, -1.75000000e+00,
  5.00000000e-01,  5.00000000e-01,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  1.25000000e+00,
  1.75000000e+00,  2.50000000e-01,
 -1.75000000e+00, -1.75000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -2.50000000e-01, -2.50000000e-01,
  5.00000000e-01,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  1.00000000e+00,
 -2.50000000e-01,  5.00000000e-01,
 -2.50000000e-01, -1.00000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  5.00000000e-01,
  1.00000000e+00,  2.50000000e-01,
 -1.00000000e+00, -2.50000000e-01,
  5.00000000e-01, -2.50000000e-01,
  1.00000000e+00,  1.00000000e+00,
  7.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  7.50000000e-01,
  1.25000000e+00,  1.25000000e+00,
 -1.25000000e+00, -1.75000000e+00,
 -1.75000000e+00, -1.25000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_basisDeriv[] = {
 -1.66666667e-01, -1.38888889e+00,
 -2.08333333e-01, -6.94444444e-02,
  1.66666667e-01, -2.77777778e-01,
  4.16666667e-02,  3.47222222e-01,
 -1.04166667e+00,  1.31944444e+00,
  1.20833333e+00,  6.94444444e-02,
  8.33333333e-02,  6.94444444e-01,
  1.04166667e+00,  3.47222222e-01,
  1.66666667e-01, -2.77777778e-01,
 -9.58333333e-01,  2.01388889e+00,
 -4.16666667e-02, -3.47222222e-01,
 -2.91666667e-01, -2.43055556e+00,
  8.33333333e-02,  6.94444444e-01,
 -2.08333333e-01, -6.94444444e-02,
 -8.33333333e-01,  1.38888889e+00,
  1.29166667e+00,  7.63888889e-01,
 -2.91666667e-01, -2.43055556e+00,
 -4.16666667e-02, -3.47222222e-01,
 -4.16666667e-02, -3.47222222e-01,
  4.16666667e-01,  1.38888889e-01,
  1.66666667e-01, -2.77777778e-01,
 -4.58333333e-01,  1.18055556e+00,
 -5.41666667e-01,  4.86111111e-01,
  4.58333333e-01, -1.18055556e+00,
 -4.16666667e-02, -3.47222222e-01,
 -2.08333333e-01, -6.94444444e-02,
 -3.33333333e-01,  5.55555556e-01,
  6.66666667e-01,  5.55555556e-01,
 -6.66666667e-01, -5.55555556e-01,
  5.83333333e-01, -1.38888889e-01,
  1.66666667e-01,  1.38888889e+00,
  6.25000000e-01,  2.08333333e-01,
 -5.00000000e-01,  8.33333333e-01,
  2.08333333e-01,  1.73611111e+00,
  1.25000000e-01, -2.29166667e+00,
 -6.25000000e-01, -1.87500000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_jacobian[] = {
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
  1.00000000e+00, -2.50000000e-01,
  6.00000000e-01,  7.50000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_jacobianDet[] = {
  9.00000000e-01,  9.00000000e-01,  9.00000000e-01,  9.00000000e-01,  9.00000000e-01,  9.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData2DQuadratic::_jacobianInv[] = {
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
  8.33333333e-01,  2.77777778e-01,
 -6.66666667e-01,  1.11111111e+00,
};

pylith::feassemble::QuadratureData2DQuadratic::QuadratureData2DQuadratic(void)
{ // constructor
  numVertices = _numVertices;
  spaceDim = _spaceDim;
  numCells = _numCells;
  cellDim = _cellDim;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  vertices = const_cast<PylithScalar*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<PylithScalar*>(_verticesRef);
  quadPtsRef = const_cast<PylithScalar*>(_quadPtsRef);
  quadWts = const_cast<PylithScalar*>(_quadWts);
  quadPts = const_cast<PylithScalar*>(_quadPts);
  basis = const_cast<PylithScalar*>(_basis);
  basisDerivRef = const_cast<PylithScalar*>(_basisDerivRef);
  basisDeriv = const_cast<PylithScalar*>(_basisDeriv);
  jacobian = const_cast<PylithScalar*>(_jacobian);
  jacobianDet = const_cast<PylithScalar*>(_jacobianDet);
  jacobianInv = const_cast<PylithScalar*>(_jacobianInv);
} // constructor

pylith::feassemble::QuadratureData2DQuadratic::~QuadratureData2DQuadratic(void)
{}


// End of file