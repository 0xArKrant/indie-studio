/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#include "SceneManagement.hpp"

Indie::Core::SceneManagement::SceneManagement() 
{
    Indie::Scene::MainMenu *menu = new Indie::Scene::MainMenu();
    this->_stack.push(menu);
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