/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu()
{
}

Indie::Scene::MainMenu::~MainMenu()
{
}

void Indie::Scene::MainMenu::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    (void) elapsed;
    if (IsKeyPressed(KEY_P))
        scenemanagement.push<Indie::Scene::GameScene>();
}

void Indie::Scene::MainMenu::draw()
{
}