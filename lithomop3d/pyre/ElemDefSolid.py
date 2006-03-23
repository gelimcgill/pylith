#!/usr/bin/env python
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#                              Charles A. Williams
#                        Rensselaer Polytechnic Institute
#                      (C) 2005  All Rights Reserved
#
#  Copyright 2005 Rensselaer Polytechnic Institute.
#  All worldwide rights reserved.  A license to use, copy, modify and
#  distribute this software for non-commercial research purposes only
#  is hereby granted, provided that this copyright notice and
#  accompanying disclaimer is not modified or removed from the software.
#
#  DISCLAIMER:  The software is distributed "AS IS" without any express
#  or implied warranty, including but not limited to, any implied
#  warranties of merchantability or fitness for a particular purpose
#  or any warranty of non-infringement of any current or pending patent
#  rights.  The authors of the software make no representations about
#  the suitability of this software for any particular purpose.  The
#  entire risk as to the quality and performance of the software is with
#  the user.  Should the software prove defective, the user assumes the
#  cost of all necessary servicing, repair or correction.  In
#  particular, neither Rensselaer Polytechnic Institute, nor the authors
#  of the software are liable for any indirect, special, consequential,
#  or incidental damages related to the software, to the maximum extent
#  the law permits.
#
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#

# This could probably be set up as a Pyre component, but it doesn't seem
# necessary right now.

class ElemDefSolid:
  """Definitions for solid elements used by lithomop3d."""

  def getdef(self, elemTypeInt, quadratureOrderInt):
      """Gets dimension and quadrature info, depending on the global
      quadrature order setting."""

    import lithomop3d as lm3d

    print "Hello from ElemDefSolid.getdef!"

    numElemNodes = self.elemNodes[elemTypeInt - 1]
    self.ElemInfoSolid['numElemNodes'] = numElemNodes
    self.ElemInfoSolid['numElemEquations'] = self.numDegreesFreedom * numElemNodes
    self.ElemInfoSolid['numElemCoords'] = self.numSpaceDims * numElemNodes

    # Full integration order
    if quadratureOrderInt == 1:
      numElemGaussPoints = self.elemFullGauss[elementType -1]
      self.ElemInfoSolid['fptrBmatrix'] = lm3d.bmatrixn
      self.ElemInfoSolid['fptrGetShape'] = lm3d.getshapn

    # Reduced integration order
    elif quadratureOrderInt == 2:
      numElemGaussPoints = self.elemReducedGauss[elementType -1]
      self.ElemInfoSolid['fptrBmatrix'] = lm3d.bmatrixn
      self.ElemInfoSolid['fptrGetShape'] = lm3d.getshapn

    # Selective (B-bar) integration order
    elif quadratureOrderInt == 3:
      numElemGaussPoints = self.elemFullGauss[elementType -1]
      self.ElemInfoSolid['fptrBmatrix'] = lm3d.bmatrixb
      self.ElemInfoSolid['fptrGetShape'] = lm3d.getshapb

    self.ElemInfoSolid['numElemGaussPoints'] = numElemGaussPoints

    ptrShape = lm3d.allocateDouble(
      (self.numSpaceDims+1)*
      numElemNodes*
      numElemGaussPoints)
            
    ptrShapej = lm3d.allocateDouble(
      (self.numSpaceDims+1)*
      numElemNodes*
      numElemGaussPoints)
            
    ptrGauss = lm3d.allocateDouble(
      (self.numSpaceDims+1)*
      numElemGaussPoints)

    lm3d.preshape(
      ptrShape,
      ptrShapej,
      ptrGauss,
      quadratureOrderInt,
      elemTypeInt,
      numElemNodes,
      numElemGaussPoints)

    self.ElemInfoSolid['ptrShape'] = ptrShape
    self.ElemInfoSolid['ptrShapej'] = ptrShapej
    self.ElemInfoSolid['ptrGauss'] = ptrGauss
        
    return self.ElemInfoSolid


    def __init__(self):
      """Constructor."""
      print ""
      print "Hello from ElemDefSolid.__init__!"

      # I am leaving these hard-wired for now, since solid elements will always
      # have 3 DOF and 3 spatial dimensions, but it might be better to leave
      # these as variables for more generality.  Ideally, we would get this
      # info from global definitions.
      self.numDegreesFreedom = 3
      self.numSpaceDims = 3

      self.ElemInfoSolid = {'numElemNodes': 0,
                            'numElemEquations': 0,
                            'numElemCoords': 0,
                            'numElemGaussPoints': 0,
                            'ptrShape': None,
                            'ptrShapej': None,
                            'ptrGauss': None,
                            'fptrBmatrix': None,
                            'fptrGetShape': None}

      self.elemNodes = [ 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                         8, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                         8, 8, 8, 8, 8, 8, 8, 7, 6, 5, \
                         4,20,20,20,20,20,20,20,20,20, \
                         20,20,20,20,20,20,20,20,20,20, \
                         20,20,20,20,20,20,20,20,18,15, \
                         13,10]
      self.elemFullGauss = [ 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                             8, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                             8, 8, 8, 8, 8, 8, 8, 8, 2, 5, \
                             1,27,27,27,27,27,27,27,27,27, \
                             27,27,27,27,27,27,27,27,27,27, \
                             27,27,27,27,27,27,27,27,27, 9, \
                             13, 4]
      self.elemReducedGauss = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
                                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
                                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, \
                                1, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                                8, 8, 8, 8, 8, 8, 8, 8, 8, 8, \
                                8, 8, 8, 8, 8, 8, 8, 8, 8, 2, \
                                5, 1]
      return

# version
# $Id: ElemDefSolid.py,v 1.2 2005/04/01 23:40:46 willic3 Exp $

# End of file 
