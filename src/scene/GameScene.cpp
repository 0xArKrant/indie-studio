/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#include "GameScene.hpp"

Indie::Scene::GameScene::GameScene() :
_map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE),
_player("./assets/bomberman/bomberman.obj ", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), Indie::Game::GameObject::TypeObject::PLAYER, true),
_cam(
    Misc::Vector<3>(16.f, 35.0f, 0.0f),
    Misc::Vector<3>(0.0f, 0.0f, 0.0f),
    Misc::Vector<3>(0.0f, 1.0f, 0.0f),
    25.0f, 0)
{
    Indie::Raylib::Core::Core::getInstance().SetCameraMode(this->_cam, CAMERA_PERSPECTIVE);
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

void Indie::Scene::GameScene::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    (void)scenemanagement;
    (void)elapsed;
}

void Indie::Scene::GameScene::draw()
{
    Indie::Raylib::Core::Core::getInstance().ClearBackground({0, 0, 0, 250});
    Indie::Raylib::Core::Core::getInstance().UpdateCamera(this->_cam);
    Indie::Raylib::Core::Core::getInstance().BeginMode3D(this->_cam);
    _map.draw();
    _player.draw();
    Indie::Raylib::Core::Core::getInstance().EndMode3D();
}