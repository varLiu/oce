// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_FuncCurNul_HeaderFile
#define _Geom2dLProp_FuncCurNul_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom2d_Curve.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class Geom2d_Curve;


//! Function used to find the inflections in 2d.
class Geom2dLProp_FuncCurNul  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dLProp_FuncCurNul(const Handle(Geom2d_Curve)& C);
  
  //! Returns the value for the variable <X>.
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  //! Returns the derivative for the variable <X>
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  //! Returns the value of the function and the derivative
  //! for the variable <X>.
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;




protected:





private:



  Handle(Geom2d_Curve) theCurve;


};







#endif // _Geom2dLProp_FuncCurNul_HeaderFile
