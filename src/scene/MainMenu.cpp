/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu() : _map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE)
{
}

Indie::Scene::MainMenu::~MainMenu()
{
}

void Indie::Scene::MainMenu::setMenu()
{

}

void Indie::Scene::MainMenu::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    if (IsKeyPressed(KEY_P))
        scenemanagement.push<Indie::Scene::GameScene>();
}

void Indie::Scene::MainMenu::draw()
{
    //_map.draw();
}