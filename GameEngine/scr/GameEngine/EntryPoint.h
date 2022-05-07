#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int  main(int argc,char** argv ) {
	GameEngine::Log::Init();
	GAMEENGINE_CLIENT_ERROR("Mensaje");
	GAMEENGINE_CORE_ERROR("Mensaje");
	
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // GE_PLATFORM_WINDOWS
