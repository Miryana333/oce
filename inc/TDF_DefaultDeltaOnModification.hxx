// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DefaultDeltaOnModification_HeaderFile
#define _TDF_DefaultDeltaOnModification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_DefaultDeltaOnModification_HeaderFile
#include <Handle_TDF_DefaultDeltaOnModification.hxx>
#endif

#ifndef _TDF_DeltaOnModification_HeaderFile
#include <TDF_DeltaOnModification.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
class TDF_Attribute;


//! This class provides a default implementation of a <br>
//!          TDF_DeltaOnModification. <br>
class TDF_DefaultDeltaOnModification : public TDF_DeltaOnModification {

public:

  //! Creates a TDF_DefaultDeltaOnModification. <br>
//!          <anAttribute> must be the backup copy. <br>
  Standard_EXPORT   TDF_DefaultDeltaOnModification(const Handle(TDF_Attribute)& anAttribute);
  //! Applies the delta to the attribute. <br>
  Standard_EXPORT   virtual  void Apply() ;




  DEFINE_STANDARD_RTTI(TDF_DefaultDeltaOnModification)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif