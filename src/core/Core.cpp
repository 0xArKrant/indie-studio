/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include "indie.hpp"
#include "./Core.hpp"
#include "Exception.hpp"

indie::Core::Core()
{
    #ifdef _WIN32
        std::cout << "WIN32 ! " << std::endl;
    #endif
    #ifdef __linux__
        std::cout << "Linux ! " << std::endl;
    #endif
}

indie::Core::~Core()
{
}