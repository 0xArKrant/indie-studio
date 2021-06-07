/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** main
*/

#include "indie.hpp"
#include "Exception.hpp"
#include "Core.hpp"

int main(int argc, char const **argv)
{
    try {
        (void) argc;
        indie::Core test;
    } catch (Errors::Exception &exception) {
        std::cerr << "Unexpected error during runtime: " << argv[0] << exception.what() << std::endl;
    }
    return 0;
}