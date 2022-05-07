#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
namespace GameEngine {
	class GAMEENGINE_API  Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return CoreLoger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return ClientLoger;
		}
	private:
		static std::shared_ptr<spdlog::logger> CoreLoger;
		static std::shared_ptr<spdlog::logger> ClientLoger;
	};
}
#define GAMEENGINE_CORE_ERROR(...)::GameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GAMEENGINE_CORE_WARN(...)::GameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GAMEENGINE_CORE_INFO(...)::GameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GAMEENGINE_CORE_TRACE(...)::GameEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GAMEENGINE_CORE_FATAL(...)::GameEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define GAMEENGINE_CLIENT_ERROR(...)::GameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GAMEENGINE_CLIENT_WARN(...)::GameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GAMEENGINE_CLIENT_INFO(...)::GameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GAMEENGINE_CLIENT_TRACE(...)::GameEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GAMEENGINE_CLIENT_FATAL(...)::GameEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
