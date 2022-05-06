#pragma once
#ifdef GE_PLATFORM_WINDOWS
	#ifdef GAMEENGINE_BUILD_DLL
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error GameEngine Only support Windows!
#endif // GE_PLATAFORM_WINDOWS
