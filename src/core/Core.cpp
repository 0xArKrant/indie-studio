/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include "indie.hpp"

indie::Core::Core()
{
    std::string path = "./lib/";
    #ifdef _WIN32
    #endif
    #ifdef __linux__
        for (const auto & file : std::filesystem::directory_iterator(path)) {
            indie::LibraryLoader *lib = new indie::LibraryLoader(file.path());
            (void) lib;
        }
    #endif
}

indie::Core::~Core()
{
}