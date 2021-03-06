// dllmain.cpp: DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "OpenAIChainDataUseHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

COpenAIChainDataUseHandlersModule _AtlModule;

class COpenAIChainDataUseHandlersApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(COpenAIChainDataUseHandlersApp, CWinApp)
END_MESSAGE_MAP()

COpenAIChainDataUseHandlersApp theApp;

BOOL COpenAIChainDataUseHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, nullptr))
		return FALSE;
	return CWinApp::InitInstance();
}

int COpenAIChainDataUseHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
