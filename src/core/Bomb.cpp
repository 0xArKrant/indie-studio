/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Bomb
*/

#include "Bomb.hpp"

Indie::Game::Bomb::Bomb(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display)
{
    this->_type = BOMB;
    this->_bombState = PLACED;
    this->_second = 0;
}

Indie::Game::Bomb::Bomb(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display)
{
    this->_type = BOMB;
    this->_bombState = PLACED;
}

Indie::Game::Bomb::Bomb(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(model, id, pos, display)
{
    this->_type = BOMB;
    this->_bombState = PLACED;
}

Indie::Game::Bomb::~Bomb()
{
}

bool Indie::Game::Bomb::isCollectable()
{
    return false;
}

bool Indie::Game::Bomb::isCollidable()
{
    return false;
}

void  Indie::Game::Bomb::setState(Indie::Game::Bomb::state _bombState)
{
    this->_bombState = _bombState;
}

Indie::Game::Bomb::state Indie::Game::Bomb::getState()
{
    return this->_bombState;
}


void Indie::Game::Bomb::update(float elapsedTimes)
{
    this->_second += elapsedTimes;

    if (this->_second >= 3 && this->_bombState == PLACED) {
        std::cout << this->_second << std::endl;
        this->_bombState = EXPLODED;
        this->_display = false;
    }
}

void Indie::Game::Bomb::draw()
{
    if (this->_bombState == PLACED)
        this->_model.DrawModel(this->_pos, 0.30f, Misc::Colors(255, 255, 255, 255));
}