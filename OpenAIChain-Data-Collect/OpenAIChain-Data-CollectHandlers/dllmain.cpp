// dllmain.cpp: DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "OpenAIChainDataCollectHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

COpenAIChainDataCollectHandlersModule _AtlModule;

class COpenAIChainDataCollectHandlersApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(COpenAIChainDataCollectHandlersApp, CWinApp)
END_MESSAGE_MAP()

COpenAIChainDataCollectHandlersApp theApp;

BOOL COpenAIChainDataCollectHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, nullptr))
		return FALSE;
	return CWinApp::InitInstance();
}

int COpenAIChainDataCollectHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
