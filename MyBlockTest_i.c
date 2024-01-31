

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMyBlock,0x2d2d6ef6,0xdad0,0x42a2,0xaa,0xa0,0x03,0xa8,0x0e,0x55,0xf9,0x06);


MIDL_DEFINE_GUID(IID, IID_IMyBlockPortsArray,0x3cd01822,0x702f,0x4ce2,0xb8,0x48,0x4b,0xcc,0x7b,0x43,0x8d,0x79);


MIDL_DEFINE_GUID(IID, IID_IBlockPort,0xe8fa1f79,0xfcf1,0x43ee,0x9d,0xe0,0x99,0x1b,0xf6,0xbe,0x63,0xcd);


MIDL_DEFINE_GUID(IID, IID_IMyParameterArray,0x2384df33,0xb52b,0x4b3a,0x9f,0xa0,0xb2,0x5d,0x47,0x0d,0x45,0xeb);


MIDL_DEFINE_GUID(IID, LIBID_MyBlockTestLib,0xabd5105a,0x8163,0x475f,0xad,0xac,0xa6,0x68,0x91,0xf9,0x84,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_MyBlock,0xa0d8984a,0x9a0e,0x4138,0x9a,0x82,0xd4,0xf7,0x44,0x3d,0x33,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_MyBlockPortsArray,0xa7508ec8,0xf350,0x4c63,0xa5,0xdc,0x18,0xb0,0xbc,0x79,0x2f,0x79);


MIDL_DEFINE_GUID(CLSID, CLSID_BlockPort,0x09ec67a8,0x55fe,0x4a4e,0xab,0xc3,0x14,0x28,0x56,0x07,0x8c,0x5e);


MIDL_DEFINE_GUID(CLSID, CLSID_MyParameterArray,0x3574b7c2,0x38b7,0x4b28,0x9b,0x9e,0xab,0x4b,0x41,0x4f,0xe5,0xde);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



