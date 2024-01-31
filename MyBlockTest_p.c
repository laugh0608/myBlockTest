

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "MyBlockTest_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _MyBlockTest_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MyBlockTest_MIDL_TYPE_FORMAT_STRING;

typedef struct _MyBlockTest_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MyBlockTest_MIDL_PROC_FORMAT_STRING;

typedef struct _MyBlockTest_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } MyBlockTest_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const MyBlockTest_MIDL_TYPE_FORMAT_STRING MyBlockTest__MIDL_TypeFormatString;
extern const MyBlockTest_MIDL_PROC_FORMAT_STRING MyBlockTest__MIDL_ProcFormatString;
extern const MyBlockTest_MIDL_EXPR_FORMAT_STRING MyBlockTest__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMyBlock_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyBlock_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMyBlockPortsArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyBlockPortsArray_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IBlockPort_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBlockPort_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMyParameterArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyParameterArray_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const MyBlockTest_MIDL_PROC_FORMAT_STRING MyBlockTest__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const MyBlockTest_MIDL_TYPE_FORMAT_STRING MyBlockTest__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyBlock, ver. 0.0,
   GUID={0x2d2d6ef6,0xdad0,0x42a2,{0xaa,0xa0,0x03,0xa8,0x0e,0x55,0xf9,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IMyBlock_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IMyBlockPortsArray, ver. 0.0,
   GUID={0x3cd01822,0x702f,0x4ce2,{0xb8,0x48,0x4b,0xcc,0x7b,0x43,0x8d,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short IMyBlockPortsArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IBlockPort, ver. 0.0,
   GUID={0xe8fa1f79,0xfcf1,0x43ee,{0x9d,0xe0,0x99,0x1b,0xf6,0xbe,0x63,0xcd}} */

#pragma code_seg(".orpc")
static const unsigned short IBlockPort_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IMyParameterArray, ver. 0.0,
   GUID={0x2384df33,0xb52b,0x4b3a,{0x9f,0xa0,0xb2,0x5d,0x47,0x0d,0x45,0xeb}} */

#pragma code_seg(".orpc")
static const unsigned short IMyParameterArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyBlock, ver. 0.0,
   GUID={0x2d2d6ef6,0xdad0,0x42a2,{0xaa,0xa0,0x03,0xa8,0x0e,0x55,0xf9,0x06}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IMyBlock_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IMyBlock_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyBlock_FormatStringOffsetTable[-3],
    MyBlockTest__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IMyBlock_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IMyBlock_ProxyInfo =
    {
    &Object_StubDesc,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyBlock_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyBlock_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IMyBlock_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    (unsigned short *) &IMyBlock_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyBlock_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IMyBlockProxyVtbl = 
{
    0,
    &IID_IMyBlock,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMyBlock_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyBlockStubVtbl =
{
    &IID_IMyBlock,
    &IMyBlock_ServerInfo,
    7,
    &IMyBlock_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMyBlockPortsArray, ver. 0.0,
   GUID={0x3cd01822,0x702f,0x4ce2,{0xb8,0x48,0x4b,0xcc,0x7b,0x43,0x8d,0x79}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IMyBlockPortsArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IMyBlockPortsArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyBlockPortsArray_FormatStringOffsetTable[-3],
    MyBlockTest__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IMyBlockPortsArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IMyBlockPortsArray_ProxyInfo =
    {
    &Object_StubDesc,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyBlockPortsArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyBlockPortsArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IMyBlockPortsArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    (unsigned short *) &IMyBlockPortsArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyBlockPortsArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IMyBlockPortsArrayProxyVtbl = 
{
    0,
    &IID_IMyBlockPortsArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMyBlockPortsArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyBlockPortsArrayStubVtbl =
{
    &IID_IMyBlockPortsArray,
    &IMyBlockPortsArray_ServerInfo,
    7,
    &IMyBlockPortsArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBlockPort, ver. 0.0,
   GUID={0xe8fa1f79,0xfcf1,0x43ee,{0x9d,0xe0,0x99,0x1b,0xf6,0xbe,0x63,0xcd}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IBlockPort_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IBlockPort_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IBlockPort_FormatStringOffsetTable[-3],
    MyBlockTest__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IBlockPort_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IBlockPort_ProxyInfo =
    {
    &Object_StubDesc,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IBlockPort_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IBlockPort_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IBlockPort_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    (unsigned short *) &IBlockPort_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IBlockPort_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IBlockPortProxyVtbl = 
{
    0,
    &IID_IBlockPort,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IBlockPort_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IBlockPortStubVtbl =
{
    &IID_IBlockPort,
    &IBlockPort_ServerInfo,
    7,
    &IBlockPort_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMyParameterArray, ver. 0.0,
   GUID={0x2384df33,0xb52b,0x4b3a,{0x9f,0xa0,0xb2,0x5d,0x47,0x0d,0x45,0xeb}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IMyParameterArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IMyParameterArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyParameterArray_FormatStringOffsetTable[-3],
    MyBlockTest__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IMyParameterArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IMyParameterArray_ProxyInfo =
    {
    &Object_StubDesc,
    MyBlockTest__MIDL_ProcFormatString.Format,
    &IMyParameterArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyParameterArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IMyParameterArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyBlockTest__MIDL_ProcFormatString.Format,
    (unsigned short *) &IMyParameterArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IMyParameterArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IMyParameterArrayProxyVtbl = 
{
    0,
    &IID_IMyParameterArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMyParameterArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyParameterArrayStubVtbl =
{
    &IID_IMyParameterArray,
    &IMyParameterArray_ServerInfo,
    7,
    &IMyParameterArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    MyBlockTest__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _MyBlockTest_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMyBlockPortsArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyParameterArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBlockPortProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyBlockProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _MyBlockTest_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMyBlockPortsArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyParameterArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IBlockPortStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyBlockStubVtbl,
    0
};

PCInterfaceName const _MyBlockTest_InterfaceNamesList[] = 
{
    "IMyBlockPortsArray",
    "IMyParameterArray",
    "IBlockPort",
    "IMyBlock",
    0
};

const IID *  const _MyBlockTest_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _MyBlockTest_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _MyBlockTest, pIID, n)

int __stdcall _MyBlockTest_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _MyBlockTest, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _MyBlockTest, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _MyBlockTest, 4, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo MyBlockTest_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _MyBlockTest_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _MyBlockTest_StubVtblList,
    (const PCInterfaceName * ) & _MyBlockTest_InterfaceNamesList,
    (const IID ** ) & _MyBlockTest_BaseIIDList,
    & _MyBlockTest_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

