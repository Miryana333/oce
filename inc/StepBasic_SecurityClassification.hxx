// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SecurityClassification_HeaderFile
#define _StepBasic_SecurityClassification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_SecurityClassification.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_SecurityClassificationLevel.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_SecurityClassificationLevel;



class StepBasic_SecurityClassification : public MMgt_TShared
{

public:

  
  //! Returns a SecurityClassification
  Standard_EXPORT StepBasic_SecurityClassification();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aPurpose, const Handle(StepBasic_SecurityClassificationLevel)& aSecurityLevel) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetPurpose (const Handle(TCollection_HAsciiString)& aPurpose) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Purpose()  const;
  
  Standard_EXPORT   void SetSecurityLevel (const Handle(StepBasic_SecurityClassificationLevel)& aSecurityLevel) ;
  
  Standard_EXPORT   Handle(StepBasic_SecurityClassificationLevel) SecurityLevel()  const;




  DEFINE_STANDARD_RTTI(StepBasic_SecurityClassification)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) purpose;
  Handle(StepBasic_SecurityClassificationLevel) securityLevel;


};







#endif // _StepBasic_SecurityClassification_HeaderFile
