// dllmain.h : Declaration of module class.

class CHybriMaxModule : public ATL::CAtlDllModuleT< CHybriMaxModule >
{
public :
	DECLARE_LIBID(LIBID_HybriMaxLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_HYBRIMAX, "{AB8BBC1C-1B8C-47CE-BA07-3773ABCE22B1}")
};

extern class CHybriMaxModule _AtlModule;
