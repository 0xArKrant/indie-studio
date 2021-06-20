/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#include "GameScene.hpp"

Indie::Scene::GameScene::GameScene() :
_map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE),
_player("./assets/Muhammer/Muhammer.obj", "./assets/Muhammer/Muhammer.png", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), Indie::Game::GameObject::TypeObject::PLAYER, true)
{
    
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
    this->_player.update(elapsed);
}

void Indie::Scene::GameScene::draw()
{
    //Indie::Raylib::Core::Core::getInstance().ClearBackground({0, 0, 0, 250});
    _map.draw();
    _player.draw();
}