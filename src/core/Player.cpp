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
    this->_move = false;
    this->_state = IDLE;
}

Indie::Game::Player::Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display) : Model3D(objPath, texturePath, id, pos, display),
_anim("./assets/Muhammer/MuhammerAnim", "./assets/Muhammer/Muhammer.png"),
_animIdle("./assets/Muhammer/MuhammerIdle", "./assets/Muhammer/Muhammer.png")
{
    this->_speed = 2;
    this->_rota = {0.0f, 1.0f, 0.0f};
    this->_scale = {40.0f, 40.0f, 40.0f};
    this->_rotaAngle = 90.0f;
    this->_move = false;
    this->_type = PLAYER;
    this->_state = IDLE;
}

Indie::Game::Player::~Player()
{
}

void Indie::Game::Player::update(float elapsedTimes)
{
    if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_W) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_UP)) {
        this->_rotaAngle = 270.0f;
        this->_pos.move((-this->_speed * elapsedTimes), 0.0f, 0.0f);
        this->_state = WALKING;
    } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_A) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_LEFT)) {
        this->_rotaAngle = 0.0f;
        this->_pos.move(0.0f, 0.0f, (this->_speed * elapsedTimes));
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
        this->_state = WALKING;
    } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_S) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_DOWN)) {
        this->_rotaAngle = 90.0f;
        this->_pos.move((this->_speed * elapsedTimes), 0.0f, 0.0f);
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
        this->_state = WALKING;
    } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_D) || Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_RIGHT)) {
        this->_rotaAngle = 180.0f;
        this->_pos.move(0.0f, 0.0f, (-this->_speed * elapsedTimes));
        this->_state = WALKING;
    } else {
        this->_state = IDLE;
    }
    if (this->_state == WALKING)
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
    if (this->_state == IDLE)
        this->_animIdle.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
}

void Indie::Game::Player::draw()
{
    if (this->_state == WALKING)
        this->_anim.draw();
    if (this->_state == IDLE)
        this->_animIdle.draw();
}

bool Indie::Game::Player::isCollectable()
{
    return false;
}

bool Indie::Game::Player::isCollidable()
{
    return false;
}