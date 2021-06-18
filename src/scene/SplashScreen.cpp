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

Indie::Scene::SplashScreen::SplashScreen() : _model("./assets/splash_logo.obj"), _model2("./assets/splash_text.obj")
{
    int current_monitor = Indie::Raylib::Core::Core::getInstance().GetCurrentMonitor();
    int refresh_rate = Indie::Raylib::Core::Core::getInstance().GetMonitorRefreshRate(current_monitor);
    Indie::Raylib::Core::Core::getInstance().SetTargetFPS(refresh_rate);
    this->_alpha = 0;

    this->_camera = { { 0.0f, 0.0f, 75.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 10.0f, 0.0f }, 15.0f, 0 };

    ::SetCameraMode(this->_camera, CAMERA_PERSPECTIVE);
}

Indie::Scene::SplashScreen::~SplashScreen()
{
}

void Indie::Scene::SplashScreen::update(Indie::Core::SceneManagement& scenemanagement)
{
    if (Indie::Raylib::Core::Core::getInstance().GetTime() > 4.f)
        scenemanagement.push<Indie::Scene::MainMenu>();
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyReleased(KEY_SPACE))
        scenemanagement.push<Indie::Scene::MainMenu>();
}

void Indie::Scene::SplashScreen::draw()
{
    Indie::Raylib::Core::Core::getInstance().ClearBackground({0, 0, 0, 250});
    ::DrawFPS(10, 10);
    Indie::Raylib::Core::Core::getInstance().BeginMode3D(this->_camera);
    this->_model.DrawModel({ 0.0f, 0.0f, 0.0f }, 0.01f, Misc::Colors{250, 250, 250, 250});
    this->_model2.DrawModel({ 0.0f, -5.0f, 0.0f }, 0.01f, Misc::Colors{250, 250, 250, 250});
    Indie::Raylib::Core::Core::getInstance().EndMode3D();
}