/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#include "GameScene.hpp"

Indie::Scene::GameScene::GameScene() : _map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE)
{
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

void Indie::Scene::GameScene::update(Indie::Core::SceneManagement &scenemanagement)
{
    (void)scenemanagement;
}

void Indie::Scene::GameScene::draw()
{
    _map.draw();
}