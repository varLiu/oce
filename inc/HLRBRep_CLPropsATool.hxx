// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_CLPropsATool_HeaderFile
#define _HLRBRep_CLPropsATool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class gp_Pnt2d;
class gp_Vec2d;



class HLRBRep_CLPropsATool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Computes the  point <P> of  parameter <U>   on the
  //! Curve from HLRBRep <C>.
    static   void Value (const Standard_Address A, const Standard_Real U, gp_Pnt2d& P) ;
  
  //! Computes the point <P>  and  first derivative <V1>
  //! of parameter <U> on the curve <C>.
    static   void D1 (const Standard_Address A, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1) ;
  
  //! Computes the point <P>,  the first derivative <V1>
  //! and second derivative <V2> of parameter <U> on the
  //! curve <C>.
    static   void D2 (const Standard_Address A, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2) ;
  
  //! Computes the point <P>, the first derivative <V1>,
  //! the second derivative  <V2>   and third derivative
  //! <V3> of parameter <U> on the curve <C>.
    static   void D3 (const Standard_Address A, const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3) ;
  
  //! returns the order  of continuity of the curve <C>.
  //! returns 1 :  first  derivative only is  computable
  //! returns 2  : first and  second derivative only are
  //! computable.  returns  3 : first,  second and third
  //! are computable.
    static   Standard_Integer Continuity (const Standard_Address A) ;
  
  //! returns the first parameter bound of the curve.
    static   Standard_Real FirstParameter (const Standard_Address A) ;
  
  //! returns the  last  parameter bound  of  the curve.
  //! FirstParameter must be less than LastParamenter.
    static   Standard_Real LastParameter (const Standard_Address A) ;




protected:





private:





};


#include <HLRBRep_CLPropsATool.lxx>





#endif // _HLRBRep_CLPropsATool_HeaderFile
