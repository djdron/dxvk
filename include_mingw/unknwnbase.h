/*** Autogenerated by WIDL 4.14 from include/unknwnbase.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __unknwnbase_h__
#define __unknwnbase_h__

#define __stdcall

/* Forward declarations */

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;
#ifdef __cplusplus
interface IUnknown;
#endif /* __cplusplus */
#endif

#ifndef __AsyncIUnknown_FWD_DEFINED__
#define __AsyncIUnknown_FWD_DEFINED__
typedef interface AsyncIUnknown AsyncIUnknown;
#ifdef __cplusplus
interface AsyncIUnknown;
#endif /* __cplusplus */
#endif

#ifndef __IClassFactory_FWD_DEFINED__
#define __IClassFactory_FWD_DEFINED__
typedef interface IClassFactory IClassFactory;
#ifdef __cplusplus
interface IClassFactory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypesbase.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>


#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
/*****************************************************************************
 * IUnknown interface
 */
#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

typedef IUnknown *LPUNKNOWN;

#if defined(__cplusplus) && !defined(CINTERFACE)
EXTERN_C const IID IID_IUnknown;

extern "C++" {
  MIDL_INTERFACE("00000000-0000-0000-C000-000000000046")
  IUnknown {
  public:
    BEGIN_INTERFACE
    virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject) = 0;
    virtual ULONG STDMETHODCALLTYPE AddRef(void) = 0;
    virtual ULONG STDMETHODCALLTYPE Release(void) = 0;

    template<class Q>
    HRESULT STDMETHODCALLTYPE QueryInterface(Q **pp) {
      return QueryInterface(__uuidof(Q), (void **)pp);
    }
    END_INTERFACE
  };
}
__CRT_UUID_DECL(IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(IUnknown *This, REFIID riid, void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(IUnknown *This);
void __RPC_STUB IUnknown_AddRef_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(IUnknown *This);
void __RPC_STUB IUnknown_Release_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#else
DEFINE_GUID(IID_IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000000-0000-0000-c000-000000000046")
IUnknown
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE QueryInterface(
        REFIID riid,
        void **ppvObject) = 0;

    virtual ULONG STDMETHODCALLTYPE AddRef(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Release(
        ) = 0;

    END_INTERFACE

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUnknown *This);

    END_INTERFACE
} IUnknownVtbl;

interface IUnknown {
    CONST_VTBL IUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IUnknown_Release(This) (This)->lpVtbl->Release(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IUnknown_QueryInterface(IUnknown* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IUnknown_AddRef(IUnknown* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IUnknown_Release(IUnknown* This) {
    return This->lpVtbl->Release(This);
}
#endif
#endif

#endif


#endif  /* __IUnknown_INTERFACE_DEFINED__ */

#endif
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * AsyncIUnknown interface
 */
#ifndef __AsyncIUnknown_INTERFACE_DEFINED__
#define __AsyncIUnknown_INTERFACE_DEFINED__

DEFINE_GUID(IID_AsyncIUnknown, 0x000e0000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("000e0000-0000-0000-c000-000000000046")
AsyncIUnknown : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Begin_QueryInterface(
        REFIID riid) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_QueryInterface(
        void **ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_AddRef(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Finish_AddRef(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_Release(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Finish_Release(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(AsyncIUnknown, 0x000e0000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct AsyncIUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncIUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncIUnknown *This);

    /*** AsyncIUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_QueryInterface)(
        AsyncIUnknown *This,
        REFIID riid);

    HRESULT (STDMETHODCALLTYPE *Finish_QueryInterface)(
        AsyncIUnknown *This,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *Begin_AddRef)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Finish_AddRef)(
        AsyncIUnknown *This);

    HRESULT (STDMETHODCALLTYPE *Begin_Release)(
        AsyncIUnknown *This);

    ULONG (STDMETHODCALLTYPE *Finish_Release)(
        AsyncIUnknown *This);

    END_INTERFACE
} AsyncIUnknownVtbl;

interface AsyncIUnknown {
    CONST_VTBL AsyncIUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define AsyncIUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define AsyncIUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define AsyncIUnknown_Release(This) (This)->lpVtbl->Release(This)
/*** AsyncIUnknown methods ***/
#define AsyncIUnknown_Begin_QueryInterface(This,riid) (This)->lpVtbl->Begin_QueryInterface(This,riid)
#define AsyncIUnknown_Finish_QueryInterface(This,ppvObject) (This)->lpVtbl->Finish_QueryInterface(This,ppvObject)
#define AsyncIUnknown_Begin_AddRef(This) (This)->lpVtbl->Begin_AddRef(This)
#define AsyncIUnknown_Finish_AddRef(This) (This)->lpVtbl->Finish_AddRef(This)
#define AsyncIUnknown_Begin_Release(This) (This)->lpVtbl->Begin_Release(This)
#define AsyncIUnknown_Finish_Release(This) (This)->lpVtbl->Finish_Release(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT AsyncIUnknown_QueryInterface(AsyncIUnknown* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG AsyncIUnknown_AddRef(AsyncIUnknown* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG AsyncIUnknown_Release(AsyncIUnknown* This) {
    return This->lpVtbl->Release(This);
}
/*** AsyncIUnknown methods ***/
static FORCEINLINE HRESULT AsyncIUnknown_Begin_QueryInterface(AsyncIUnknown* This,REFIID riid) {
    return This->lpVtbl->Begin_QueryInterface(This,riid);
}
static FORCEINLINE HRESULT AsyncIUnknown_Finish_QueryInterface(AsyncIUnknown* This,void **ppvObject) {
    return This->lpVtbl->Finish_QueryInterface(This,ppvObject);
}
static FORCEINLINE HRESULT AsyncIUnknown_Begin_AddRef(AsyncIUnknown* This) {
    return This->lpVtbl->Begin_AddRef(This);
}
static FORCEINLINE ULONG AsyncIUnknown_Finish_AddRef(AsyncIUnknown* This) {
    return This->lpVtbl->Finish_AddRef(This);
}
static FORCEINLINE HRESULT AsyncIUnknown_Begin_Release(AsyncIUnknown* This) {
    return This->lpVtbl->Begin_Release(This);
}
static FORCEINLINE ULONG AsyncIUnknown_Finish_Release(AsyncIUnknown* This) {
    return This->lpVtbl->Finish_Release(This);
}
#endif
#endif

#endif


#endif  /* __AsyncIUnknown_INTERFACE_DEFINED__ */

#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
/*****************************************************************************
 * IClassFactory interface
 */
#ifndef __IClassFactory_INTERFACE_DEFINED__
#define __IClassFactory_INTERFACE_DEFINED__

typedef IClassFactory *LPCLASSFACTORY;

DEFINE_GUID(IID_IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000001-0000-0000-c000-000000000046")
IClassFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE LockServer(
        WINBOOL fLock) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactory *This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactory *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactory *This,
        WINBOOL fLock);

    END_INTERFACE
} IClassFactoryVtbl;

interface IClassFactory {
    CONST_VTBL IClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IClassFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IClassFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IClassFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IClassFactory methods ***/
#define IClassFactory_CreateInstance(This,pUnkOuter,riid,ppvObject) (This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject)
#define IClassFactory_LockServer(This,fLock) (This)->lpVtbl->LockServer(This,fLock)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IClassFactory_QueryInterface(IClassFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IClassFactory_AddRef(IClassFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IClassFactory_Release(IClassFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IClassFactory methods ***/
static FORCEINLINE HRESULT IClassFactory_CreateInstance(IClassFactory* This,IUnknown *pUnkOuter,REFIID riid,void **ppvObject) {
    return This->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject);
}
static FORCEINLINE HRESULT IClassFactory_LockServer(IClassFactory* This,WINBOOL fLock) {
    return This->lpVtbl->LockServer(This,fLock);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT __stdcall IClassFactory_RemoteLockServer_Proxy(
    IClassFactory* This,
    WINBOOL fLock);
void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IClassFactory_CreateInstance_Proxy(
    IClassFactory* This,
    IUnknown *pUnkOuter,
    REFIID riid,
    void **ppvObject);
HRESULT __RPC_STUB IClassFactory_CreateInstance_Stub(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
HRESULT CALLBACK IClassFactory_LockServer_Proxy(
    IClassFactory* This,
    WINBOOL fLock);
HRESULT __RPC_STUB IClassFactory_LockServer_Stub(
    IClassFactory* This,
    WINBOOL fLock);

#endif  /* __IClassFactory_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __unknwnbase_h__ */
