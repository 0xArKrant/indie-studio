/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#include "./Core.hpp"
#include "Exception.hpp"
#include "indie.hpp"

Indie::Core::Core::Core() {
    this->_sceneManagement = std::make_unique<Indie::Core::SceneManagement>();
}

Indie::Core::Core::~Core() {
}

void Indie::Core::Core::loop()
{
    this->_sceneManagement->loop();
}