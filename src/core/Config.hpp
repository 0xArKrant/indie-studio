/**
 * @file Config.hpp
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

#pragma once

#include <string>

namespace Indie {
    namespace Config {
        void initialize();
        extern std::string ExecutablePath;
        extern unsigned int ThreadNumber;
    }
}