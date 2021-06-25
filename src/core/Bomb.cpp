/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Bomb
*/

#include "Bomb.hpp"

//_animFire("./assets/fire/fireAnim", "./assets/fire/animations/0.png")
Indie::Game::Bomb::Bomb(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display)
{
    //std::cout << "bonjour ici bomb constru 2" << std::endl;

    this->fireNbCase = 12;
    this->_type = BOMB;
    this->_bombState = PLACED;
    this->_second = 0;
    this->_fireRota = {0.0f, 1.0f, 0.0f};
    this->_fireScale = {40.0f, 40.0f, 40.0f};
    this->_fireRotaAngle = 90.0f;
    this->_second = 0;
    this->setFirePos();
}

//_animFire("./assets/fire/fireAnim", "./assets/fire/animations/0.png")
Indie::Game::Bomb::Bomb(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display)
{
    std::cout << "bonjour ici bomb constru 2" << std::endl;
        this->fireNbCase = 12;
    this->_type = BOMB;
    this->_bombState = PLACED;
        std::cout << "PLACED" << std::endl;
    this->_second = 0;
    this->_fireRota = {0.0f, 1.0f, 0.0f};
    this->_fireScale = {40.0f, 40.0f, 40.0f};
    this->_fireRotaAngle = 90.0f;
    this->_second = 0;
    this->setFirePos();
}

Indie::Game::Bomb::Bomb(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(model, id, pos, display)

//_animFire("./assets/fire/fireAnim", "./assets/fire/animations/0.png")
{
    //std::cout << "bonjour ici bomb constru 2" << std::endl;
        this->fireNbCase = 12;
    this->_type = BOMB;
    this->_bombState = PLACED;
        std::cout << "PLACED" << std::endl;
    this->_second = 0;
    this->_fireRota = {0.0f, 1.0f, 0.0f};
    this->_fireScale = {40.0f, 40.0f, 40.0f};
    this->_fireRotaAngle = 90.0f;
    this->_second = 0;
    this->setFirePos();
}

Indie::Game::Bomb::~Bomb()
{
}

void Indie::Game::Bomb::setFirePos()
{
    Indie::Raylib::Models::ModelsRaylib Model("./assets/fire/fireAnim_000004.obj", "./assets/fire/0.png");
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", this->_pos, true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() - 1.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() - 2.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() - 3.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() - 1.0f, this->_pos.getY(), this->_pos.getZ()), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() - 2.0f, this->_pos.getY(), this->_pos.getZ()), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() - 3.0f, this->_pos.getY(), this->_pos.getZ()), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() + 1.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() + 2.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX(), this->_pos.getY(), this->_pos.getZ() + 3.0f), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() + 1.0f, this->_pos.getY(), this->_pos.getZ()), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() + 2.0f, this->_pos.getY(), this->_pos.getZ()), true));
    this->_fireList.emplace_back(std::make_unique<Indie::Game::Fire>(Model, "fire", Misc::Vector<3>(this->_pos.getX() + 3.0f, this->_pos.getY(), this->_pos.getZ()), true));
    for (auto &elem : this->_fireList) {
        std::cout << elem->getId() << std::endl;
    }
}

bool Indie::Game::Bomb::isCollectable()
{
    return false;
}

bool Indie::Game::Bomb::isCollidable()
{
    return false;
}

// void Indie::Game::Bomb::setFirePos() {
//     this->_animList.emplace_back(std::make_unique<Indie::Raylib::AnimesRaylib>("./assets/fire/fireAnimn", "./assets/fire/0.png"), );
// }
void  Indie::Game::Bomb::setState(Indie::Game::Bomb::state _bombState)
{
    this->_bombState = _bombState;
}

Indie::Game::Bomb::state Indie::Game::Bomb::getState()
{
    return this->_bombState;
}


void Indie::Game::Bomb::update(const double &elapsedTimes)
{
    this->_second += elapsedTimes;
    if (this->_second >= 3 && this->_bombState == PLACED) {
        std::cout << this->_second << std::endl;
        this->_bombState = EXPLODED;
        this->_display = false;
        this->_second = 0;
    }
    if (this->_second >= 1 && this->_bombState == EXPLODED) {
        this->_bombState = NONE;
    }
}


void Indie::Game::Bomb::draw()
{
    if (this->_bombState == PLACED) {
        this->_model.DrawModel(this->_pos, 0.30f, Misc::Colors(255, 255, 255, 255));
    }
    if (this->_bombState == EXPLODED) {
        for (auto &elem : this->_fireList) {
            elem->draw();
        }
    }


}