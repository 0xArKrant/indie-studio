/**
 * @file SplashScreen.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief
 * @version 0.1
 * @date 16-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#include "SplashScreen.hpp"

Indie::Scene::SplashScreen::SplashScreen()
{
    std::cout << "SplashScreen uwu" << std::endl;
}
Indie::Scene::SplashScreen::~SplashScreen()
{
}

void Indie::Scene::SplashScreen::update(Indie::Core::SceneManagement& scenemanagement)
{
    if (IsKeyPressed(KEY_SPACE))
        scenemanagement.push<Indie::Scene::MainMenu>();
}

void Indie::Scene::SplashScreen::draw()
{
    DrawFPS(10, 10);
    std::cout << "Test" << std::endl;
}