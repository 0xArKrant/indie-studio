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
}
Indie::Scene::SplashScreen::~SplashScreen()
{
}

void Indie::Scene::SplashScreen::update(std::stack<std::unique_ptr<Core::IScene>> &stack)
{
    (void) stack;
}

void Indie::Scene::SplashScreen::draw()
{
    DrawFPS(10, 10);
}