// File generated by CPPExt (Transient)
//
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadModelManager_HSequenceOfModelParties_HeaderFile
#define _McCadModelManager_HSequenceOfModelParties_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadModelManager_HSequenceOfModelParties_HeaderFile
#include <Handle_McCadModelManager_HSequenceOfModelParties.hxx>
#endif

#ifndef _McCadModelManager_SequenceOfModelParties_HeaderFile
#include <McCadModelManager_SequenceOfModelParties.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadModelManager_Part;
class McCadModelManager_SequenceOfModelParties;



class McCadModelManager_HSequenceOfModelParties : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

McCadModelManager_HSequenceOfModelParties();

  Standard_Boolean IsEmpty() const;

  Standard_Integer Length() const;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   void Append(const McCadModelManager_Part& anItem) ;


Standard_EXPORT   void Append(const Handle(McCadModelManager_HSequenceOfModelParties)& aSequence) ;


Standard_EXPORT   void Prepend(const McCadModelManager_Part& anItem) ;


Standard_EXPORT   void Prepend(const Handle(McCadModelManager_HSequenceOfModelParties)& aSequence) ;


Standard_EXPORT   void Reverse() ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const McCadModelManager_Part& anItem) ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadModelManager_HSequenceOfModelParties)& aSequence) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const McCadModelManager_Part& anItem) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadModelManager_HSequenceOfModelParties)& aSequence) ;


Standard_EXPORT   void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;


Standard_EXPORT   Handle_McCadModelManager_HSequenceOfModelParties Split(const Standard_Integer anIndex) ;


Standard_EXPORT   void SetValue(const Standard_Integer anIndex,const McCadModelManager_Part& anItem) ;


Standard_EXPORT  const McCadModelManager_Part& Value(const Standard_Integer anIndex) const;


Standard_EXPORT   McCadModelManager_Part& ChangeValue(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

 const McCadModelManager_SequenceOfModelParties& Sequence() const;

  McCadModelManager_SequenceOfModelParties& ChangeSequence() ;


Standard_EXPORT   Handle_McCadModelManager_HSequenceOfModelParties ShallowCopy() const;
//Standard_EXPORT ~McCadModelManager_HSequenceOfModelParties();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
McCadModelManager_SequenceOfModelParties mySequence;


};

#define Item McCadModelManager_Part
#define Item_hxx <McCadModelManager_Part.hxx>
#define TheSequence McCadModelManager_SequenceOfModelParties
#define TheSequence_hxx <McCadModelManager_SequenceOfModelParties.hxx>
#define TCollection_HSequence McCadModelManager_HSequenceOfModelParties
#define TCollection_HSequence_hxx <McCadModelManager_HSequenceOfModelParties.hxx>
#define Handle_TCollection_HSequence Handle_McCadModelManager_HSequenceOfModelParties
#define TCollection_HSequence_Type_() McCadModelManager_HSequenceOfModelParties_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
//
inline Handle_McCadModelManager_HSequenceOfModelParties ShallowCopy(const Handle_McCadModelManager_HSequenceOfModelParties& me) {
 return me->ShallowCopy();
}



#endif
