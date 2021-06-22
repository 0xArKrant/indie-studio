/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Boxes
*/

#include "Boost.hpp"

Indie::Game::BoostFire::BoostFire(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, id, pos, display)
{
    this->_type = BOOST_FIRE;
}

Indie::Game::BoostFire::BoostFire(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, texturePath, id, pos, display)
{
    this->_type = BOOST_FIRE;
}

Indie::Game::BoostFire::BoostFire(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(model, id, pos, display)
{
    this->_type = BOOST_FIRE;
}

void Indie::Game::BoostFire::update(float elapsedTimes)
{
    (void)elapsedTimes;
}

void Indie::Game::BoostFire::draw()
{
    this->_model.DrawModel(this->_pos, 0.2f, Misc::Colors(255, 0, 0, 255));
}

Indie::Game::BoostSpeed::BoostSpeed(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, id, pos, display)
{
    this->_type = BOOST_SPEED;
}

Indie::Game::BoostSpeed::BoostSpeed(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, texturePath, id, pos, display)
{
    this->_type = BOOST_SPEED;
}

Indie::Game::BoostSpeed::BoostSpeed(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(model, id, pos, display)
{
    this->_type = BOOST_SPEED;
}

void Indie::Game::BoostSpeed::update(float elapsedTimes)
{
    (void)elapsedTimes;
}

void Indie::Game::BoostSpeed::draw()
{
    this->_model.DrawModel(this->_pos, 0.2f, Misc::Colors(255, 255, 255, 255));
}

Indie::Game::BoostBomb::BoostBomb(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, id, pos, display)
{
    this->_type = BOOST_BOMB;
}

Indie::Game::BoostBomb::BoostBomb(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(objPath, texturePath, id, pos, display)
{
    this->_type = BOOST_BOMB;
}

Indie::Game::BoostBomb::BoostBomb(const Indie::Raylib::Models::ModelsRaylib &model, const std::string &id, Misc::Vector<3> pos, bool display) : Boost(model, id, pos, display)
{
    this->_type = BOOST_BOMB;
}

void Indie::Game::BoostBomb::update(float elapsedTimes)
{
    (void)elapsedTimes;
}

void Indie::Game::BoostBomb::draw()
{
    this->_model.DrawModel(this->_pos, 0.2f, Misc::Colors(0, 0, 0, 255));
}