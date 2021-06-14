/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu() _drawbill(this->_camera, Misc::Texture:, billPosition, 2.0f, WHITE)
{
    
    this->_camera = { { 18.0f, 18.0f, 18.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f }, 45.0f, 0 };
    ::SetTargetFPS(60);
    ::SetCameraMode(_camera, CAMERA_ORBITAL);
}

Indie::Scene::MainMenu::~MainMenu()
{
}

void Indie::Scene::MainMenu::setMenu()
{

}

void Indie::Scene::MainMenu::update(std::stack<Core::IScene *> &stack)
{
    (void) stack;
}

void Indie::Scene::MainMenu::draw()
{
        UpdateCamera(&this->_camera);

            BeginMode3D(this->_camera);

                DrawGrid(10, 1.0f);        // Draw a grid

                DrawBillboard(this->_camera, bill, billPosition, 2.0f, WHITE);

            EndMode3D();

            DrawFPS(10, 10);
}