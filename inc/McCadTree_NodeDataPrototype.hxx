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

#ifndef _McCadTree_NodeDataPrototype_HeaderFile
#define _McCadTree_NodeDataPrototype_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadTree_NodeDataPrototype_HeaderFile
#include <Handle_McCadTree_NodeDataPrototype.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_AsciiString;



class McCadTree_NodeDataPrototype : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

//! This class provides a prototype for node data. <br>
//! supports 3 types of traversal. <br>
Standard_EXPORT McCadTree_NodeDataPrototype();


Standard_EXPORT McCadTree_NodeDataPrototype(const TCollection_AsciiString& myName);

//! sets the name of the node. <br>
Standard_EXPORT   void SetNodeName(const TCollection_AsciiString& myName) ;

//! returns the name of the node. <br>
Standard_EXPORT   TCollection_AsciiString GetNodeName() ;
//Standard_EXPORT ~McCadTree_NodeDataPrototype();




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
TCollection_AsciiString NodeName;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
