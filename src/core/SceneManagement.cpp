/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#include "SceneManagement.hpp"
#include "Colors.hpp"

Indie::Core::SceneManagement::SceneManagement(int width, int height, std::string &name) 
{
    (void) width;
    (void) height;
    (void) name;
    // this->_window = Indie::Raylib::Core::Core::getInstance(width, height, name);
    Indie::Scene::MainMenu *menu = new Indie::Scene::MainMenu();
    this->_stack.push(menu);
}

Indie::Core::SceneManagement::~SceneManagement() {
}

void Indie::Core::SceneManagement::loop() {
    while (!this->_window.WindowShouldClose()) {
        this->_stack.top()->update(this->_stack);
        this->_window.BeginDrawing();
        this->_window.ClearBackground(Misc::Colors(0, 0, 0, 0));
        // Ajout de tick //
        this->_stack.top()->draw();
        this->_window.EndDrawing();
    }
}