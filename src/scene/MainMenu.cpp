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

void Indie::Scene::MainMenu::update(Indie::Core::SceneManagement &scenemanagement)
{
    (void)scenemanagement;
}

void Indie::Scene::MainMenu::draw()
{
    _map.draw();
}