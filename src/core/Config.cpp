/**
 * @file Config.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Setup executable path for assets loading
 * @version 0.1
 * @date 2021-06-21
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include <iostream>
#include <thread>
#include <codecvt>
#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#include <linux/limits.h>
#elif __APPLE__
#include <unistd.h>
#include <mach-o/dyld.h>
#endif
#ifdef _MSC_VER
#define PATH_MAX        4096   /* # chars in a path name including nul */
#endif

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING 

#include "Exception.hpp"
#include "Config.hpp"

namespace Indie {
    namespace Config {
        std::string ExecutablePath(".");
        unsigned int ThreadNumber(0);
    }
}

void Indie::Config::initialize()
{
    const size_t bufSize = PATH_MAX + 1;
    #ifdef _WIN32
        HMODULE handle;
        WCHAR path[MAX_PATH] = { 0 };

        handle = GetModuleHandle(nullptr);
        if (handle == nullptr)
            throw (Indie::Errors::Exception("Runtime error", "Handle is nullptr", __FILE__, __LINE__));
        GetModuleFileNameW(handle, path, MAX_PATH);
        Indie::Config::ExecutablePath = std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t>().to_bytes(std::wstring(path).substr(0, std::wstring(path).find_last_of('\\') + 1));
    #elif __linux__
        char path[bufSize] = { 0 };
        if (readlink("/proc/self/exe", path, sizeof(path) - 1) == -1)
            throw (Indie::Errors::Exception("Readlink error", "/proc/self/exe", __FILE__, __LINE__));
        Indie::Config::ExecutablePath = std::string(path).substr(0, std::string(path).find_last_of('/') + 1);
    #elif __APPLE__
        uint32_t size = bufSize;
        char dirNameBuffer[bufSize];

        if (_NSGetExecutablePath(dirNameBuffer, &size) != 0)
            throw (Indie::Errors::Exception("Buffer error", "buffer is too small", __FILE__, __LINE__));
        Indie::Config::ExecutablePath = std::string(dirNameBuffer).substr(0, std::string(dirNameBuffer).find_last_of('/') + 1);
    #endif

    std::srand((unsigned int)std::time(nullptr));

    Indie::Config::ThreadNumber = std::thread::hardware_concurrency();

    if (Indie::Config::ThreadNumber == 0) {
        Indie::Config::ThreadNumber = 1;
        std::cerr << "[Indie::Config]: Warning, failed to detect maximum of concurrency thread." << std::endl;
    }
}