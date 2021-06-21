/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#include "GameScene.hpp"
#include <cmath>

Indie::Scene::GameScene::GameScene() : 
_map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE),
_player("./assets/modeltest/untitled_000001.obj", "./assets/modeltest/untitled_000001.png", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), Indie::Game::GameObject::TypeObject::PLAYER, true)
{
    
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

bool Indie::Scene::GameScene::_checkCollision()
{
    Misc::Vector<2> playerPos(this->_player.getPos().getZ(), this->_player.getPos().getX());
    auto cubicMap = this->_map.getMapSize();
    int cubicMapX = static_cast<int>(cubicMap.getX());
    int cubicMapY = static_cast<int>(cubicMap.getY());
    float playerRadius = 0.45f;
    std::vector<Misc::Colors> mapPixels = this->_map.getMapPixels();

    int playerCellX = static_cast<int>(round(playerPos.getX() - this->_map.getMapPosition().getZ() + 0.5f));
    int playerCellY = static_cast<int>(round(playerPos.getY() - this->_map.getMapPosition().getX() + 0.5f));

    if (playerCellX < 0) playerCellX = 0;
    else if (playerCellX >= cubicMapX) playerCellX = cubicMapX - 1;

    if (playerCellY < 0) playerCellY = 0;
    else if (playerCellY >= cubicMapY) playerCellY = cubicMapY - 1;

    for (int y = 0; y < cubicMapY; y++) {
        for (int x = 0; x < cubicMapX; x++) {
            if ((mapPixels[y * cubicMapX + x].getR() == 255) &&
                (Indie::Raylib::Models::Collision::CheckCollisionCircleRec(playerPos, playerRadius,
                                         Misc::Rectangle ({ this->_map.getMapPosition().getZ() - 0.5f + x * 1.0f,
                                                           this->_map.getMapPosition().getX() - 0.5f + y * 1.0f,
                                                           1.0f,
                                                           1.0f }))))
            {
                return true;
            }
        }
    }
    return false;
}

void Indie::Scene::GameScene::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    (void)scenemanagement;
    auto oldPos = this->_player.getPos();
    this->_player.update(elapsed);
    if (_checkCollision())
        this->_player.setPosition(oldPos);
}

void Indie::Scene::GameScene::draw()
{
    //Indie::Raylib::Core::Core::getInstance().ClearBackground({0, 0, 0, 250});
    _map.draw();
    _player.draw();

}