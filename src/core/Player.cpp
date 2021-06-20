/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Player
*/

#include "Player.hpp"

Indie::Game::Player::Player(const std::string &objPath, const std::string id, Misc::Vector<3> pos, TypeObject type, bool display) : Model3D(objPath, id, pos, type, display)
{
    this->_speed = 1;
    this->_rota = {1.0f, 0.0f, 0.0f};
    this->_scale = {1.0f, 1.0f, 1.0f};
}

Indie::Game::Player::Player(const std::string &objPath, const std::string texturePath, const std::string id, Misc::Vector<3> pos, TypeObject type, bool display) : Model3D(objPath, texturePath, id, pos, type, display)
{
    this->_speed = 1;
    this->_rota = (0.0f, 0.0f, 0.0f);
    this->_scale = (1.0f, 1.0f, 1.0f);
}

Indie::Game::Player::~Player()
{
}

void Indie::Game::Player::update(float elapsedTimes)
{
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_W) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_UP))
        this->_pos.move((-this->_speed * elapsedTimes), 0.0f, 0.0f);
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_A) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_LEFT))
        this->_pos.move(0.0f, 0.0f, (this->_speed * elapsedTimes));
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_S) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_DOWN))
        this->_pos.move((this->_speed * elapsedTimes), 0.0f, 0.0f);
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_D) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_RIGHT))
        this->_pos.move(0.0f, 0.0f, (-this->_speed * elapsedTimes));
    (void)elapsedTimes;
}

void Indie::Game::Player::draw()
{
    //this->_model.DrawModel(this->_pos, 0.5f, Misc::Colors(130, 130, 130, 255));
    this->_model.DrawModelEx(this->_pos, this->_rota, -90.0f,  this->_scale, Misc::Colors(130, 130, 130, 255));
}