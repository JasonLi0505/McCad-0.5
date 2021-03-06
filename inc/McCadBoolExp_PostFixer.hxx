// File generated by CPPExt (Value)
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

#ifndef _McCadBoolExp_PostFixer_HeaderFile
#define _McCadBoolExp_PostFixer_HeaderFile

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TColStd_HSequenceOfAsciiString;
class TCollection_AsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadBoolExp_PostFixer  {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 

//! Creates a postfix CSG expr. from infix MCNP syntax. <br>
//!  uses ExprParser to complete the infix expression <br>
//! <br>
Standard_EXPORT McCadBoolExp_PostFixer();


Standard_EXPORT McCadBoolExp_PostFixer(const TCollection_AsciiString& theCSG);


Standard_EXPORT   void Init(const TCollection_AsciiString& theCSG) ;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString GetPostFix() const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString GetInFix() const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString GetInput() const;


Standard_EXPORT   void PrintInFix(Standard_OStream& theStream) ;


Standard_EXPORT   void PrintPostFix(Standard_OStream& theStream) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT   void Done() ;


Standard_EXPORT   void NotDone() ;


Standard_EXPORT   Standard_Integer Priority(const TCollection_AsciiString& theToken) const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString PostFix(const Handle(TColStd_HSequenceOfAsciiString)& theInFix) ;


 // Fields PRIVATE
 //
Standard_Boolean myIsDone;
Handle_TColStd_HSequenceOfAsciiString myInPutCSG;
Handle_TColStd_HSequenceOfAsciiString myInFixCSG;
Handle_TColStd_HSequenceOfAsciiString myPostFixCSG;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
