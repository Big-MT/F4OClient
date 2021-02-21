#include <Windows.h>

DWORD WINAPI MainThread(LPVOID lpThreadParameter) {


}

BOOL WINAPI Detach(){

	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved){

	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls( hModule );

		if ( auto handle = CreateThread( nullptr, NULL, MainThread, hModule, NULL, nullptr ) )
		{
			CloseHandle( handle );
		}
	}else if(ul_reason_for_call == DLL_PROCESS_DETACH && !lpReserved){
		return Detach();
	}

	return TRUE;
}