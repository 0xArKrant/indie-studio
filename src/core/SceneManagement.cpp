/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#include "indie.hpp"

Core::SceneManagement::SceneManagement()
{
}

Core::SceneManagement::~SceneManagement()
{

}

void Core::SceneManagement::loop()
{
    while (!WindowShouldClose()) {
        this->_stack.top()->update(this->_stack);
        // Ajout de tick //
        this->_stack.top()->draw();
    }
}