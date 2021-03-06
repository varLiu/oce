// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignPresentedItemSelect_HeaderFile
#define _StepAP214_AutoDesignPresentedItemSelect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#include <Handle_StepRepr_RepresentationRelationship.hxx>
#include <Handle_StepRepr_ShapeAspect.hxx>
#include <Handle_StepBasic_DocumentRelationship.hxx>
class Standard_Transient;
class StepBasic_ProductDefinitionRelationship;
class StepBasic_ProductDefinition;
class StepRepr_ProductDefinitionShape;
class StepRepr_RepresentationRelationship;
class StepRepr_ShapeAspect;
class StepBasic_DocumentRelationship;



class StepAP214_AutoDesignPresentedItemSelect  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a AutoDesignPresentedItemSelect SelectType
  Standard_EXPORT StepAP214_AutoDesignPresentedItemSelect();
  
  //! Recognizes a AutoDesignPresentedItemSelect Kind Entity that is :
  //! 1 -> ProductDefinition,
  //! 2 -> ProductDefinitionRelationship,
  //! 3 -> ProductDefinitionShape
  //! 4 -> RepresentationRelationship
  //! 5 -> ShapeAspect
  //! 6 -> DocumentRelationship,
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a ProductDefinitionRelationship (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship()  const;
  
  //! returns Value as a ProductDefinition (Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinition) ProductDefinition()  const;
  
  //! returns Value as a ProductDefinitionShape (Null if another type)
  Standard_EXPORT   Handle(StepRepr_ProductDefinitionShape) ProductDefinitionShape()  const;
  
  //! returns Value as a RepresentationRelationship (Null if another type)
  Standard_EXPORT   Handle(StepRepr_RepresentationRelationship) RepresentationRelationship()  const;
  
  //! returns Value as a ShapeAspect (Null if another type)
  Standard_EXPORT   Handle(StepRepr_ShapeAspect) ShapeAspect()  const;
  
  //! returns Value as a DocumentRelationship (Null if another type)
  Standard_EXPORT   Handle(StepBasic_DocumentRelationship) DocumentRelationship()  const;




protected:





private:





};







#endif // _StepAP214_AutoDesignPresentedItemSelect_HeaderFile
