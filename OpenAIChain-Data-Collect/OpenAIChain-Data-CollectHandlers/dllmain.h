// dllmain.h: 模块类的声明。

class COpenAIChainDataCollectHandlersModule : public ATL::CAtlDllModuleT<COpenAIChainDataCollectHandlersModule>
{
public :
	DECLARE_LIBID(LIBID_OpenAIChainDataCollectHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OPENAICHAINDATACOLLECTHANDLERS, "{2bd074d1-bc4c-4c5c-8ad6-47e8745055ea}")
};

extern class COpenAIChainDataCollectHandlersModule _AtlModule;
