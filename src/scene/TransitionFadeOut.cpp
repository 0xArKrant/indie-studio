/**
 * @file TransitionFadeOut.cpp
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

#include "TransitionFadeOut.hpp"

Indie::Scene::TransitionFadeOut::TransitionFadeOut()
{
    int current_monitor = Indie::Raylib::Core::Core::getInstance().GetCurrentMonitor();
    int refresh_rate = Indie::Raylib::Core::Core::getInstance().GetMonitorRefreshRate(current_monitor);
    Indie::Raylib::Core::Core::getInstance().SetTargetFPS(refresh_rate);
    this->_alpha = 230;
    this->_second = 0;
}

Indie::Scene::TransitionFadeOut::~TransitionFadeOut()
{
}

void Indie::Scene::TransitionFadeOut::update(Indie::Core::SceneManagement& scenemanagement, const double& elapsed)
{
    this->_second += elapsed;
    if (this->_alpha == 0)
        scenemanagement.pop();
}

void Indie::Scene::TransitionFadeOut::draw()
{
    std::cout << this->_alpha << std::endl;
    if (this->_second >= 0.03) {
        this->_alpha -= 2;
        this->_second = 0;
    }
    Indie::Raylib::Core::Core::getInstance().ClearBackground({ this->_alpha, this->_alpha, this->_alpha, 230 });
}