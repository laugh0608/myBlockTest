

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MyBlockTest.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MyBlockTest_i_h__
#define __MyBlockTest_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMyBlock_FWD_DEFINED__
#define __IMyBlock_FWD_DEFINED__
typedef interface IMyBlock IMyBlock;

#endif 	/* __IMyBlock_FWD_DEFINED__ */


#ifndef __IMyBlockPortsArray_FWD_DEFINED__
#define __IMyBlockPortsArray_FWD_DEFINED__
typedef interface IMyBlockPortsArray IMyBlockPortsArray;

#endif 	/* __IMyBlockPortsArray_FWD_DEFINED__ */


#ifndef __IBlockPort_FWD_DEFINED__
#define __IBlockPort_FWD_DEFINED__
typedef interface IBlockPort IBlockPort;

#endif 	/* __IBlockPort_FWD_DEFINED__ */


#ifndef __IMyParameterArray_FWD_DEFINED__
#define __IMyParameterArray_FWD_DEFINED__
typedef interface IMyParameterArray IMyParameterArray;

#endif 	/* __IMyParameterArray_FWD_DEFINED__ */


#ifndef __MyBlock_FWD_DEFINED__
#define __MyBlock_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyBlock MyBlock;
#else
typedef struct MyBlock MyBlock;
#endif /* __cplusplus */

#endif 	/* __MyBlock_FWD_DEFINED__ */


#ifndef __MyBlockPortsArray_FWD_DEFINED__
#define __MyBlockPortsArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyBlockPortsArray MyBlockPortsArray;
#else
typedef struct MyBlockPortsArray MyBlockPortsArray;
#endif /* __cplusplus */

#endif 	/* __MyBlockPortsArray_FWD_DEFINED__ */


#ifndef __BlockPort_FWD_DEFINED__
#define __BlockPort_FWD_DEFINED__

#ifdef __cplusplus
typedef class BlockPort BlockPort;
#else
typedef struct BlockPort BlockPort;
#endif /* __cplusplus */

#endif 	/* __BlockPort_FWD_DEFINED__ */


#ifndef __MyParameterArray_FWD_DEFINED__
#define __MyParameterArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyParameterArray MyParameterArray;
#else
typedef struct MyParameterArray MyParameterArray;
#endif /* __cplusplus */

#endif 	/* __MyParameterArray_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyBlock_INTERFACE_DEFINED__
#define __IMyBlock_INTERFACE_DEFINED__

/* interface IMyBlock */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyBlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2d2d6ef6-dad0-42a2-aaa0-03a80e55f906")
    IMyBlock : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyBlockVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyBlock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyBlock * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyBlock * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyBlock * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyBlock * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyBlock * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyBlock * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyBlockVtbl;

    interface IMyBlock
    {
        CONST_VTBL struct IMyBlockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyBlock_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyBlock_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyBlock_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyBlock_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyBlock_INTERFACE_DEFINED__ */


#ifndef __IMyBlockPortsArray_INTERFACE_DEFINED__
#define __IMyBlockPortsArray_INTERFACE_DEFINED__

/* interface IMyBlockPortsArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyBlockPortsArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3cd01822-702f-4ce2-b848-4bcc7b438d79")
    IMyBlockPortsArray : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyBlockPortsArrayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyBlockPortsArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyBlockPortsArray * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyBlockPortsArray * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyBlockPortsArray * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyBlockPortsArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyBlockPortsArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyBlockPortsArray * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyBlockPortsArrayVtbl;

    interface IMyBlockPortsArray
    {
        CONST_VTBL struct IMyBlockPortsArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyBlockPortsArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyBlockPortsArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyBlockPortsArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyBlockPortsArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyBlockPortsArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyBlockPortsArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyBlockPortsArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyBlockPortsArray_INTERFACE_DEFINED__ */


#ifndef __IBlockPort_INTERFACE_DEFINED__
#define __IBlockPort_INTERFACE_DEFINED__

/* interface IBlockPort */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IBlockPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e8fa1f79-fcf1-43ee-9de0-991bf6be63cd")
    IBlockPort : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IBlockPortVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBlockPort * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBlockPort * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBlockPort * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBlockPort * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBlockPort * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBlockPort * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBlockPort * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IBlockPortVtbl;

    interface IBlockPort
    {
        CONST_VTBL struct IBlockPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBlockPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBlockPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBlockPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBlockPort_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBlockPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBlockPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBlockPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBlockPort_INTERFACE_DEFINED__ */


#ifndef __IMyParameterArray_INTERFACE_DEFINED__
#define __IMyParameterArray_INTERFACE_DEFINED__

/* interface IMyParameterArray */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyParameterArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2384df33-b52b-4b3a-9fa0-b25d470d45eb")
    IMyParameterArray : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyParameterArrayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyParameterArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyParameterArray * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyParameterArray * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyParameterArray * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyParameterArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyParameterArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyParameterArray * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyParameterArrayVtbl;

    interface IMyParameterArray
    {
        CONST_VTBL struct IMyParameterArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyParameterArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyParameterArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyParameterArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyParameterArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyParameterArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyParameterArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyParameterArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyParameterArray_INTERFACE_DEFINED__ */



#ifndef __MyBlockTestLib_LIBRARY_DEFINED__
#define __MyBlockTestLib_LIBRARY_DEFINED__

/* library MyBlockTestLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MyBlockTestLib;

EXTERN_C const CLSID CLSID_MyBlock;

#ifdef __cplusplus

class DECLSPEC_UUID("a0d8984a-9a0e-4138-9a82-d4f7443d3365")
MyBlock;
#endif

EXTERN_C const CLSID CLSID_MyBlockPortsArray;

#ifdef __cplusplus

class DECLSPEC_UUID("a7508ec8-f350-4c63-a5dc-18b0bc792f79")
MyBlockPortsArray;
#endif

EXTERN_C const CLSID CLSID_BlockPort;

#ifdef __cplusplus

class DECLSPEC_UUID("09ec67a8-55fe-4a4e-abc3-142856078c5e")
BlockPort;
#endif

EXTERN_C const CLSID CLSID_MyParameterArray;

#ifdef __cplusplus

class DECLSPEC_UUID("3574b7c2-38b7-4b28-9b9e-ab4b414fe5de")
MyParameterArray;
#endif
#endif /* __MyBlockTestLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


