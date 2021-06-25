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
#include <algorithm>

Indie::Scene::GameScene::GameScene() :
_map("./assets/cubicmap_atlas.png", "./assets/cubicmap.png", CAMERA_PERSPECTIVE),
_player("./assets/Muhammer/Muhammer.obj", "./assets/Muhammer/Muhammer.png", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), true),
_bomb("./assets/bomb/bomb.obj")
{
    _genMap();
    this->_camera = {{ 16.f, 35.f, 0}, {0, 0, 0}, {0, 1, 0}, 25.0f, 0};
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

void Indie::Scene::GameScene::_genMap()
{
    // Indie::Raylib::Models::ModelsRaylib model("./assets/box/box.obj", "./assets/box/box_wood.png");
    // for (int i = 2; i < this->_map.getMapSize().getX() - 4; i++) {
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(5.0f, 0.0f, 6.0f - i), true));
    // }
    // for (int i = 0; i < this->_map.getMapSize().getX() - 2; i++) {
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-5.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-1.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(1.0f, 0.0f, 6.0f - i), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(3.0f, 0.0f, 6.0f - i), true));
    // }
    // for (int i = 2; i < this->_map.getMapSize().getY() - 4; i++) {
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 6.0f), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -6.0f), true));
    // }
    // for (int i = 0; i < this->_map.getMapSize().getY() - 2; i++) {
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 4.0f), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 2.0f), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 0.0f), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -2.0f), true));
    //     this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -4.0f), true));
    // }
    std::srand(time(nullptr));
    std::vector<Misc::Vector<3>> bonusPos = std::vector<Misc::Vector<3>>();
    for (int i = 2; i < this->_map.getMapSize().getX() - 4; i++) {
        bonusPos.emplace_back(-7.0f, 0.0f, 6.0f - i);
        bonusPos.emplace_back(5.0f, 0.0f, 6.0f - i);
    }
    for (int i = 0; i < this->_map.getMapSize().getX() - 2; i++) {
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
    for (int i = 0; i < this->_map.getMapSize().getY() - 2; i++) {
        bonusPos.emplace_back(-7.0f + i, 0.0f, 4.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, 2.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, 0.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, -2.0f);
        bonusPos.emplace_back(-7.0f + i, 0.0f, -4.0f);
    }
    std::vector<Misc::Vector<3>> bonusPos2 = std::vector<Misc::Vector<3>>();
    for (int i = 0; i < 15; i++)
        bonusPos2.push_back(std::move(bonusPos.at(std::rand() % bonusPos.size())));
    Indie::Raylib::Models::ModelsRaylib bomb(""/*"./assets/floor/wall.obj", "./assets/floor/floor.png"*/);
    Indie::Raylib::Models::ModelsRaylib fire(""/*""./assets/floor/wall.obj", "./assets/floor/floor.png"*/);
    Indie::Raylib::Models::ModelsRaylib speed(""/*"./assets/floor/wall.obj", "./assets/floor/floor.png"*/);
    for (int i = 0; i < 15;) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostBomb>(bomb, "boostbomb", bonusPos2.at(i++), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostFire>(fire, "boostfire", bonusPos2.at(i++), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::BoostSpeed>(speed, "boostspeed", bonusPos2.at(i++), true));
    }
}

bool Indie::Scene::GameScene::_checkCollisionGO()
{
    Misc::Vector<3> direction;
    if (this->_player.getDirection() == Indie::Game::Player::RIGHT)
        direction = Misc::Vector<3>(0.f, 0.f, -0.4f);
    if (this->_player.getDirection() == Indie::Game::Player::DOWN)
        direction = Misc::Vector<3>(0.4f, 0.f, 0.f);
    if (this->_player.getDirection() == Indie::Game::Player::UP)
        direction = Misc::Vector<3>(-0.4f, 0.f, 0.f);
    if (this->_player.getDirection() == Indie::Game::Player::LEFT)
        direction = Misc::Vector<3>(0.f, 0.f, 0.4f);
    if (this->_player.getDirection() == Indie::Game::Player::NONE)
        direction = Misc::Vector<3>(0.f, 0.f, 0.f);
    for (auto &elem : this->_gameObjectList)
        if (elem->isCollidable() && elem->getPos() == this->_player.getPos() + direction)
            return true;
    for (auto &elem : this->_gameObjectList) {
        if (elem->isCollectable() && elem->getPos() == this->_player.getPos()) {
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_BOMB && elem->getDisplay())
                this->_player.bombBonus();
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_FIRE && elem->getDisplay())
                this->_player.fireBonus();
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_SPEED && elem->getDisplay())
                this->_player.speedBonus();
            elem->setDisplay(false);
        }
    }
    return false;
}

bool Indie::Scene::GameScene::_checkCollisionMap()
{
    Misc::Vector<2> playerPos(this->_player.getPos().getZ(), this->_player.getPos().getX());
    auto cubicMap = this->_map.getMapSize();
    int cubicMapX = static_cast<int>(cubicMap.getX());
    int cubicMapY = static_cast<int>(cubicMap.getY());
    float playerRadius = 0.30f;
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
    this->_gameObjectList.erase(std::remove_if(this->_gameObjectList.begin(), this->_gameObjectList.end(), [](std::unique_ptr<Indie::Game::GameObject> &gameObject) {return !gameObject->getDisplay();}), this->_gameObjectList.end());
        for (auto &elem : _bombList)
            if (!elem->getDisplay() && !elem->destroyed) {
                this->_player.setCurrentNbBomb(this->_player.getCurrentNbBomb() - 1);
                elem->destroyed = true;
            }
    this->_player.update(elapsed);
    if (_checkCollisionMap())
        this->_player.setPosition(oldPos);
    if (_checkCollisionGO())
        this->_player.setPosition(oldPos);
    std::cout << this->_player.getCurrentNbBomb() << "    " << this->_player.getNbBombsMax();
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyPressed(KEY_SPACE) && this->_player.getCurrentNbBomb() < this->_player.getNbBombsMax()) {
        this->_bombList.emplace_back(std::make_unique<Indie::Game::Bomb>(this->_bomb, "bomb", this->_player.getPos(), true ));
        this->_player.setCurrentNbBomb(this->_player.getCurrentNbBomb() + 1);
    }
    for (auto &elem : this->_bombList) {
        elem->update(elapsed);
    }
}

void Indie::Scene::GameScene::draw()
{
    Indie::Raylib::Core::Core::getInstance().BeginMode3D(this->_camera);
    _map.draw();
    _player.draw();

    for (auto &elem : this->_gameObjectList) {
        elem->draw();
    }

    for (auto &elem : this->_bombList) {
        elem->draw();
    }
    Indie::Raylib::Core::Core::getInstance().EndMode3D();
}