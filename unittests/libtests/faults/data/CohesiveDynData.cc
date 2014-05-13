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
// Copyright (c) 2010-2014 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

#include "CohesiveDynData.hh"

// ----------------------------------------------------------------------
// Constructor
pylith::faults::CohesiveDynData::CohesiveDynData(void) :
  meshFilename(0),
  lengthScale(1.0e+3),
  pressureScale(2.25e+10),
  densityScale(1.0),
  timeScale(2.0),
  spaceDim(0),
  cellDim(0),
  numBasis(0),
  numQuadPts(0),
  quadPts(0),
  quadWts(0),
  basis(0),
  basisDeriv(0),
  verticesRef(0),
  id(0),
  label(0),
  initialTractFilename(0),
  fieldT(0),
  fieldIncrStick(0),
  fieldIncrSlip(0),
  fieldIncrOpen(0),
  jacobian(0),
  orientation(0),
  area(0),
  initialTractions(0),
  residualStickE(0),
  residualSlipE(0),
  residualOpenE(0),
  constraintEdges(0),
  negativeVertices(0),
  numConstraintEdges(0)
{ // constructor
  const PylithScalar velScale = lengthScale / timeScale;
  densityScale = pressureScale / (velScale*velScale);
} // constructor

// ----------------------------------------------------------------------
// Destructor
pylith::faults::CohesiveDynData::~CohesiveDynData(void)
{ // destructor
} // destructor


// End of file
