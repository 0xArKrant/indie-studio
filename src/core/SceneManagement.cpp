/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#include "SceneManagement.hpp"

Indie::Core::SceneManagement::SceneManagement() {
}

Indie::Core::SceneManagement::~SceneManagement() {
}

void Indie::Core::SceneManagement::loop() {
    while (!WindowShouldClose()) {
        this->_stack.top()->update(this->_stack);
        // Ajout de tick //
        this->_stack.top()->draw();
    }
}