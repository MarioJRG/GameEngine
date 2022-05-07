#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace GameEngine {
	std::shared_ptr<spdlog::logger> Log::CoreLoger;
	std::shared_ptr<spdlog::logger> Log::ClientLoger;
	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		CoreLoger = spdlog::stderr_color_mt("Game Engine");
		CoreLoger->set_level(spdlog::level::trace);

		ClientLoger = spdlog::stderr_color_mt("App");
		ClientLoger->set_level(spdlog::level::trace);
	}


}