/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu() : _map("./src/scene/cubicmap_atlas.png", "./src/scene/cubicmap.png", CAMERA_PERSPECTIVE)
{
}

Indie::Scene::MainMenu::~MainMenu()
{
}

void Indie::Scene::MainMenu::setMenu()
{

}

void Indie::Scene::MainMenu::update(std::stack<std::unique_ptr<Core::IScene>> &stack)
{
    (void) stack;
}

void Indie::Scene::MainMenu::draw()
{
    _map.draw();
}