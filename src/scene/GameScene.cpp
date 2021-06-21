/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** GameScene
*/

#include "GameScene.hpp"
#include <cmath>
#include "Box.hpp"
#include "Boost.hpp"

Indie::Scene::GameScene::GameScene() :
_map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE),
_player("./assets/Muhammer/Muhammer.obj", "./assets/Muhammer/Muhammer.png", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), true)
{
    _genMap();
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

void Indie::Scene::GameScene::_genMap()
{
    for (int i = 2; i < this->_map.getMapSize().getX() - 4; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(5.0f, 0.0f, 6.0f - i), true));
    }
    for (int i = 0; i < this->_map.getMapSize().getX(); i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-5.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-1.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(1.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(3.0f, 0.0f, 6.0f - i), true));
    }
    for (int i = 2; i < this->_map.getMapSize().getY() - 4; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, 6.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, -6.0f), true));
    }
    for (int i = 0; i < this->_map.getMapSize().getY(); i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, 4.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, 2.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, 0.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, -2.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>("", "box", Misc::Vector<3>(-7.0f + i, 0.0f, -4.0f), true));
    }
    std::srand(time(nullptr));
    std::vector<Misc::Vector<3>> bonusPos = std::vector<Misc::Vector<3>>();
    for (int i = 2; i < this->_map.getMapSize().getX() - 4; i++) {
        bonusPos.emplace_back(-7.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(5.0f, 0.0f, 6.0f - i);
    }
    for (int i = 0; i < this->_map.getMapSize().getX(); i++) {
        bonusPos.emplace_back(-5.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(-3.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(-3.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(-1.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(1.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(3.0f, 0.0f, 6.0f - i);
    }
    for (int i = 2; i < this->_map.getMapSize().getY() - 4; i++) {
        bonusPos.emplace_back(-7.0f + i, 0.0f, 6.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, -6.0f);
    }
    for (int i = 0; i < this->_map.getMapSize().getY(); i++) {
        bonusPos.emplace_back(-7.0f + i, 0.0f, 4.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, 2.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, 0.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, -2.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, -4.0f);
    }
    std::vector<Misc::Vector<3>> bonusPos2 = std::vector<Misc::Vector<3>>();
    for (int i = 0; i < 15; i++)
        bonusPos2.push_back(std::move(bonusPos.at(std::rand() % bonusPos.size())));
    for (int i = 0; i < 15;) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostBomb>("", "boostbomb", bonusPos2.at(i++), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostFire>("", "boostfire", bonusPos2.at(i++), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostSpeed>("", "boostspeed", bonusPos2.at(i++), true));
    }
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
                // (Indie::Raylib::Models::Collision::CheckCollisionCircleRec(playerPos, playerRadius,
                //                          Misc::Rectangle ({ this->_map.getMapPosition().getZ() - 0.5f + x * 1.0f,
                //                                            this->_map.getMapPosition().getX() - 0.5f + y * 1.0f,
                //                                            1.0f,
                //                                            1.0f }))))
                (::CheckCollisionCircleRec({playerPos.getX(), playerPos.getY()}, playerRadius,
                                            { this->_map.getMapPosition().getZ() - 0.5f + x * 1.0f,
                                                           this->_map.getMapPosition().getX() - 0.5f + y * 1.0f,
                                                           1.0f,
                                                           1.0f })))
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
    for (auto &elem : this->_gameObjectList) {
        elem->draw();
    }
}