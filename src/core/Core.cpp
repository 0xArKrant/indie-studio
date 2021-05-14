/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include <filesystem>
#include "Core.hpp"

indie::Core::Core()
{
    std::string path = "./lib/";
    #ifdef _WIN32
    #endif
    #ifdef __linux__
        for (const auto & file : std::filesystem::directory_iterator(path))
        std::cout << file.path() << std::endl;        
    #endif
}

indie::Core::~Core()
{
}