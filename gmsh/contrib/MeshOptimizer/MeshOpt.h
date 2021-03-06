// Copyright (C) 2013 ULg-UCL
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use, copy,
// modify, merge, publish, distribute, and/or sell copies of the
// Software, and to permit persons to whom the Software is furnished
// to do so, provided that the above copyright notice(s) and this
// permission notice appear in all copies of the Software and that
// both the above copyright notice(s) and this permission notice
// appear in supporting documentation.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT OF THIRD PARTY RIGHTS. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS NOTICE BE LIABLE FOR
// ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY
// DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
// WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
// ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
// OF THIS SOFTWARE.
//
// Please report all bugs and problems to the public mailing list
// <gmsh@onelab.info>.
//
// Contributors: Thomas Toulorge, Jonathan Lambrechts

#ifndef _MESHOPT_H_
#define _MESHOPT_H_

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "MeshOptObjectiveFunction.h"
#include "MeshOptPatch.h"

#if defined(HAVE_BFGS)

#include "ap.h"


class MeshOptParameters;


class MeshOpt
{
public:
  Patch patch;
  MeshOpt(const std::map<MElement*, GEntity*> &element2entity,
          const std::map<MElement*, GEntity*> &bndEl2Ent,
          const std::set<MElement*> &els, std::set<MVertex*> &toFix,
          const std::set<MElement*> &bndEls, const MeshOptParameters &par);
  ~MeshOpt();
  int optimize(const MeshOptParameters &par);
  void updateMesh(const alglib::real_1d_array &x);
  void updateResults();
  void evalObjGrad(const alglib::real_1d_array &x,
                    double &Obj, alglib::real_1d_array &gradObj);
  void printProgress(const alglib::real_1d_array &x, double Obj);
  ObjectiveFunction *objFunction();
 private:
  int _verbose;
  bool _nCurses;
  std::list<char*> _iterHistory, _optHistory;
  int _iPass;
  std::vector<ObjectiveFunction> _allObjFunc;                                        // Contributions to objective function for current pass
  ObjectiveFunction *_objFunc;                                                       // Contributions to objective function for current pass
  int _iter, _intervDisplay;                                                         // Current iteration, interval of iterations for reporting
  double _initObj;                                                                   // Values for reporting
  void calcScale(alglib::real_1d_array &scale);
  void runOptim(alglib::real_1d_array &x,
                const alglib::real_1d_array &initGradObj, int itMax, int iBar);
};


#endif

#endif
