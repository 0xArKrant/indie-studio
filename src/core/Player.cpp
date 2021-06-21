/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Player
*/

#include "Player.hpp"

Indie::Game::Player::Player(const std::string &objPath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, id, pos, display)
{
    this->_speed = 1;
    this->_rota = {1.0f, 0.0f, 0.0f};
    this->_scale = {0.5f, 0.5f, 0.5f};
    this->_rotaAngle = 90.0f;
    this->_type = PLAYER;
}

Indie::Game::Player::Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display)
{
    this->_speed = 2;
    this->_rota = {0.0f, 1.0f, 0.0f};
    this->_scale = {30.0f, 30.0f, 30.0f};
    this->_rotaAngle = 90.0f;
}

Indie::Game::Player::~Player()
{
}

void Indie::Game::Player::update(float elapsedTimes)
{
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_W) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_UP)) {
        this->_rotaAngle = 270.0f;
        this->_pos.move((-this->_speed * elapsedTimes), 0.0f, 0.0f);
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
        //std::cout << "\nPlayer position = " << this->_pos.getX() << this->_pos.getY() << this->_pos.getZ() << std::endl;
        //std::cout << "\nPlayer position = " << this->_pos.getX() << this->_pos.getY() << this->_pos.getZ() << std::endl;
    }
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_A) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_LEFT)) {
        this->_rotaAngle = 0.0f;
        this->_pos.move(0.0f, 0.0f, (this->_speed * elapsedTimes));
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
    }
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_S) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_DOWN)) {
        this->_rotaAngle = 90.0f;
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
        this->_pos.move((this->_speed * elapsedTimes), 0.0f, 0.0f);
    }
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_D) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_RIGHT)) {
        this->_rotaAngle = 180.0f;
        this->_pos.move(0.0f, 0.0f, (-this->_speed * elapsedTimes));

        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
    }
}

void Indie::Game::Player::draw()
{
    //this->_model.DrawModel(this->_pos, 10.0f, Misc::Colors(255, 255, 255, 255));
    this->_anim.draw();
    //this->_model.DrawModelEx(this->_pos, this->_rota, this->_rotaAngle,  this->_scale, Misc::Colors(130, 130, 130, 255));
}