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
_player("./assets/Muhammer/Muhammer.obj", "./assets/Muhammer/Muhammer.png", "bomberman", Misc::Vector<3>(-7.0f, 0.0f, 6.0f), true, 1),
_player2("./assets/Muhammer/Muhammer.obj", "./assets/Muhammer/Muhammer.png", "bomberman", Misc::Vector<3>(5.0f, 0.0f, -6.0f), true, 2)
{
    _genMap();
    this->_camera = {{ 16.f, 35.f, 0.f}, {0.f, 0.f, 0.f}, {0.f, 1.f, 0.f}, 25.0f, 0};
}

Indie::Scene::GameScene::~GameScene()
{
}

void Indie::Scene::GameScene::setGame()
{

}

void Indie::Scene::GameScene::_genMap()
{
    Indie::Raylib::Models::ModelsRaylib model("./assets/box/box.obj", "./assets/box/box_wood.png");
    for (int i = 2; i < this->_map.getMapSize().getX() - 4; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(5.0f, 0.0f, 6.0f - i), true));
    }
    for (int i = 0; i < this->_map.getMapSize().getX() - 2; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-5.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-3.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-1.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(1.0f, 0.0f, 6.0f - i), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(3.0f, 0.0f, 6.0f - i), true));
    }
    for (int i = 2; i < this->_map.getMapSize().getY() - 4; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 6.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -6.0f), true));
    }
    for (int i = 0; i < this->_map.getMapSize().getY() - 2; i++) {
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 4.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 2.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, 0.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -2.0f), true));
        this->_gameObjectList.emplace_back(std::make_unique<Indie::Game::Box>(model, "box", Misc::Vector<3>(-7.0f + i, 0.0f, -4.0f), true));
    }

    std::srand((unsigned int)std::time(nullptr));
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

bool Indie::Scene::GameScene::_checkCollisionGOPlayer2()
{
    Misc::Vector<3> direction;
    if (this->_player2.getDirection() == Indie::Game::Player::RIGHT)
        direction = Misc::Vector<3>(0.f, 0.f, -0.4f);
    if (this->_player2.getDirection() == Indie::Game::Player::DOWN)
        direction = Misc::Vector<3>(0.4f, 0.f, 0.f);
    if (this->_player2.getDirection() == Indie::Game::Player::UP)
        direction = Misc::Vector<3>(-0.4f, 0.f, 0.f);
    if (this->_player2.getDirection() == Indie::Game::Player::LEFT)
        direction = Misc::Vector<3>(0.f, 0.f, 0.4f);
    if (this->_player2.getDirection() == Indie::Game::Player::NONE)
        direction = Misc::Vector<3>(0.f, 0.f, 0.f);
    for (auto &elem : this->_gameObjectList)
        if (elem->isCollidable() && elem->getPos() == this->_player2.getPos() + direction)
            return true;
    for (auto &elem : this->_gameObjectList) {
        if (elem->isCollectable() && elem->getPos() == this->_player2.getPos()) {
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_BOMB && elem->getDisplay())
                this->_player2.bombBonus();
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_FIRE && elem->getDisplay())
                this->_player2.fireBonus();
            if (elem->getType() == Indie::Game::GameObject::TypeObject::BOOST_SPEED && elem->getDisplay())
                this->_player2.speedBonus();
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

bool Indie::Scene::GameScene::_checkCollisionMapPlayer2()
{
    Misc::Vector<2> playerPos(this->_player2.getPos().getZ(), this->_player2.getPos().getX());
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

void Indie::Scene::GameScene::_destroyBoxes(Misc::Vector<3> bombPos)
{
    for (auto &elem : this->_gameObjectList) {
        for (int i = 0; i < this->_player.getFire(); i++)
            if ((elem->getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || elem->getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || elem->getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || elem->getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f)) && elem->getType() == Indie::Game::GameObject::TypeObject::BOX) {
                elem->setDisplay(false);
            }
    }
    for (int i = 0; i < this->_player.getFire(); i++)
        if ((this->_player.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f))) {
            this->_player.setDisplay(false);
        }
    for (int i = 0; i < this->_player.getFire(); i++)
        if ((this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f))) {
            this->_player2.setDisplay(false);
        }
}

void Indie::Scene::GameScene::_destroyBoxes2(Misc::Vector<3> bombPos)
{
    for (auto &elem : this->_gameObjectList) {
        for (int i = 0; i < this->_player2.getFire(); i++)
            if ((elem->getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || elem->getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || elem->getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || elem->getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f)) && elem->getType() == Indie::Game::GameObject::TypeObject::BOX) {
                elem->setDisplay(false);
            }
    }
    for (int i = 0; i < this->_player2.getFire(); i++)
        if ((this->_player.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || this->_player.getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f))) {
            this->_player.setDisplay(false);
        }
    for (int i = 0; i < this->_player2.getFire(); i++)
        if ((this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f + i) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f, 0.f, 0.f - i) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f + i, 0.f, 0.f) || this->_player2.getPos() == bombPos + Misc::Vector<3>(0.f - i, 0.f, 0.f))) {
            this->_player2.setDisplay(false);
        }
}

void Indie::Scene::GameScene::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    // (void)scenemanagement;
    auto oldPos = this->_player.getPos();
    auto oldPosPlayer2 = this->_player2.getPos();
    this->_gameObjectList.erase(std::remove_if(this->_gameObjectList.begin(), this->_gameObjectList.end(), [](std::unique_ptr<Indie::Game::GameObject> &gameObject) {return !gameObject->getDisplay();}), this->_gameObjectList.end());
    // this->_gameObjectList.erase(std::remove_if(this->_bombList.begin(), this->_bombList.end(), [](std::unique_ptr<Indie::Game::Bomb> &bomb) {if (bomb->getState() == Indie::Game::Bomb::state::NONE) return true; else return true;}), this->_bombList.end());
    for (auto &elem : _bombList) {
        if (!elem->getDisplay() && !elem->destroyed) {
           this->_player.setCurrentNbBomb(this->_player.getCurrentNbBomb() - 1);
           elem->destroyed = true;
           _destroyBoxes(elem->getPos());
        }
    }
    for (auto &elem : _bombList2) {
        if (!elem->getDisplay() && !elem->destroyed) {
           this->_player2.setCurrentNbBomb(this->_player2.getCurrentNbBomb() - 1);
           elem->destroyed = true;
           _destroyBoxes2(elem->getPos());
        }
    }
    this->_player.update(elapsed);
    this->_player2.update(elapsed);
    if (_checkCollisionMap())
        this->_player.setPosition(oldPos);
    if (_checkCollisionMapPlayer2())
        this->_player2.setPosition(oldPosPlayer2);
    if (_checkCollisionGO())
        this->_player.setPosition(oldPos);
    if (_checkCollisionGOPlayer2())
        this->_player2.setPosition(oldPosPlayer2);
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyPressed(KEY_SPACE) && this->_player.getCurrentNbBomb() < this->_player.getNbBombsMax()) {
        this->_bombList.emplace_back(std::make_unique<Indie::Game::Bomb>("./assets/bomb/bomb.obj", "bomb", this->_player.getPos().rounded(), true, this->_player.getFire()));
        this->_player.setCurrentNbBomb(this->_player.getCurrentNbBomb() + 1);
    }
    if ((Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyPressed(KEY_RIGHT_SHIFT) || Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadButtonReleased(0, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) && this->_player2.getCurrentNbBomb() < this->_player2.getNbBombsMax()) {
        this->_bombList2.emplace_back(std::make_unique<Indie::Game::Bomb>("./assets/bomb/bomb.obj", "bomb", this->_player2.getPos().rounded(), true, this->_player.getFire()));
        this->_player2.setCurrentNbBomb(this->_player2.getCurrentNbBomb() + 1);
    }
    for (auto &elem : this->_bombList) {
        elem->update(elapsed);
    }
    for (auto &elem : this->_bombList2) {
        elem->update(elapsed);
    }
    // if (!_player.getDisplay() && !this->_player2.getDisplay())
    //     scenemanagement.push<Indie::Scene::MainMenu>();
}

void Indie::Scene::GameScene::draw()
{
    Indie::Raylib::Core::Core::getInstance().BeginMode3D(this->_camera);
    _map.draw();
    _player.draw();
    _player2.draw();

    for (auto &elem : this->_gameObjectList) {
        elem->draw();
    }
    for (auto &elem : this->_bombList) {
            elem->draw();
    }
    for (auto &elem : this->_bombList2) {
            elem->draw();
    }
    Indie::Raylib::Core::Core::getInstance().EndMode3D();
}
