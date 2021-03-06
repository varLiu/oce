// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfLabelExternFile_HeaderFile
#define _STEPCAFControl_DataMapOfLabelExternFile_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_STEPCAFControl_ExternFile.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TDF_Label;
class STEPCAFControl_ExternFile;
class TDF_LabelMapHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile;
class STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile;



class STEPCAFControl_DataMapOfLabelExternFile  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapOfLabelExternFile(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   STEPCAFControl_DataMapOfLabelExternFile& Assign (const STEPCAFControl_DataMapOfLabelExternFile& Other) ;
  STEPCAFControl_DataMapOfLabelExternFile& operator = (const STEPCAFControl_DataMapOfLabelExternFile& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~STEPCAFControl_DataMapOfLabelExternFile()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TDF_Label& K, const Handle(STEPCAFControl_ExternFile)& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TDF_Label& K) ;
  
  Standard_EXPORT  const  Handle(STEPCAFControl_ExternFile)& Find (const TDF_Label& K)  const;
 const  Handle(STEPCAFControl_ExternFile)& operator() (const TDF_Label& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Handle(STEPCAFControl_ExternFile)& ChangeFind (const TDF_Label& K) ;
  Handle(STEPCAFControl_ExternFile)& operator() (const TDF_Label& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TDF_Label& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TDF_Label& K) ;




protected:





private:

  
  Standard_EXPORT STEPCAFControl_DataMapOfLabelExternFile(const STEPCAFControl_DataMapOfLabelExternFile& Other);




};







#endif // _STEPCAFControl_DataMapOfLabelExternFile_HeaderFile
