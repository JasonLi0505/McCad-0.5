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

#ifndef _McCadEXPlug_PluginManager_HeaderFile
#define _McCadEXPlug_PluginManager_HeaderFile

#ifndef _McCadEXPlug_PluginManagerPtr_HeaderFile
#include <McCadEXPlug_PluginManagerPtr.hxx>
#endif
#ifndef _McCadEXPlug_SequenceOfSharedLibrary_HeaderFile
#include <McCadEXPlug_SequenceOfSharedLibrary.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _OSD_Path_HeaderFile
#include <OSD_Path.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _McCadEXPlug_ExchangePluginPtr_HeaderFile
#include <McCadEXPlug_ExchangePluginPtr.hxx>
#endif
class TColStd_HSequenceOfAsciiString;
class TCollection_AsciiString;
class OSD_Path;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadEXPlug_PluginManager  {

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


Standard_EXPORT static  McCadEXPlug_PluginManagerPtr Instance() ;


Standard_EXPORT   void Initialize() ;


Standard_EXPORT   McCadEXPlug_ExchangePluginPtr GetPlugin(const TCollection_AsciiString& theExtension) const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString GetExtensions() const;


Standard_EXPORT   Handle_TColStd_HSequenceOfAsciiString GetFormats() const;


Standard_EXPORT   Standard_Boolean CheckExtension(const TCollection_AsciiString& theExtension) const;


Standard_EXPORT   Standard_Boolean CheckFormat(const TCollection_AsciiString& theFormat) const;


Standard_EXPORT   Standard_Boolean LoadSharedLibrary(const OSD_Path& thePath) ;


Standard_EXPORT   void UnLoadSharedLibrary() const;


Standard_EXPORT   OSD_Path SharedLibraryPath() const;


Standard_EXPORT   TCollection_AsciiString GetPathName() const;


Standard_EXPORT   Standard_Boolean IsSharedLibOpen() const;





protected:

 // Methods PROTECTED
 // 

//! This is Plugin Manager as a singelton. <br>
Standard_EXPORT McCadEXPlug_PluginManager();


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
static McCadEXPlug_PluginManagerPtr myInstance;
McCadEXPlug_SequenceOfSharedLibrary mySharedLibs;
Handle_TColStd_HSequenceOfAsciiString myExtensions;
Handle_TColStd_HSequenceOfAsciiString myFormats;
Standard_Integer myPluginCount;
OSD_Path myPath;
TCollection_AsciiString myPathName;
Standard_Boolean mySharedLibIsOpen;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif