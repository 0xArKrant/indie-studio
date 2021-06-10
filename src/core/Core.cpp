/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include "./Core.hpp"
#include "Exception.hpp"
#include "indie.hpp"

Indie::Core::Core() {
#ifdef _WIN32
    std::cout << "WIN32 ! " << std::endl;
#endif
#ifdef __linux__
    std::cout << "Linux ! " << std::endl;
#endif
}

Indie::Core::~Core() {
}