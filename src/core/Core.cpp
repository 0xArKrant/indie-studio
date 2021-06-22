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
    this->_height = 1600;
    this->_width = 900;
    this->_name = "Bomberman";
    this->_sceneManagement = std::make_unique<Indie::Core::SceneManagement>(this->_width, this->_height, this->_name);
}

Indie::Core::Core::~Core() {
}

void Indie::Core::Core::loop()
{
    this->_sceneManagement->loop();
}