/**
 * @file Exception.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Error management class using exception
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include <stdexcept>
#include <string>

namespace Indie {
    namespace Errors {
        class Exception : public std::exception {
            public:
                explicit Exception();
                explicit Exception(const char* err, std::string currentfile, int currentline);
                explicit Exception(const char* err, std::string errplus, std::string currentfile, int currentline);

                virtual const char* what() const noexcept;
            protected:
                std::string _message;
        };
    }
}

