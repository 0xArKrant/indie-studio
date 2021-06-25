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
    this->_fire = 2;
    this->_nbBombs = 1;
    this->_rota = {1.0f, 0.0f, 0.0f};
    this->_scale = {0.5f, 0.5f, 0.5f};
    this->_rotaAngle = 90.0f;
    this->_type = PLAYER;
    this->_move = false;
    this->_state = IDLE;
    this->_direction = NONE;
    this->_currentNbBomb = 0;
}

Indie::Game::Player::Player(const std::string &objPath, const std::string &texturePath, const std::string &id, Misc::Vector<3> pos, bool display, int nbPlayer) : Model3D(objPath, texturePath, id, pos, display),
_anim("./assets/Muhammer/MuhammerAnim", "./assets/Muhammer/Muhammer.png"),
_animIdle("./assets/Muhammer/MuhammerIdle", "./assets/Muhammer/Muhammer.png")
{
    this->_speed = 1;
    this->_fire = 2;
    this->_nbBombs = 1;
    this->_rota = {0.0f, 1.0f, 0.0f};
    this->_scale = {40.0f, 40.0f, 40.0f};
    this->_rotaAngle = 90.0f;
    this->_move = false;
    this->_type = PLAYER;
    this->_state = IDLE;
    this->_direction = NONE;
    this->_currentNbBomb = 0;
    this->_nbPlayer = nbPlayer;
}

Indie::Game::Player::~Player()
{
}

void Indie::Game::Player::update(const double &elapsedTimes)
{
    if (this->_nbPlayer == 1) {
        if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_W)) {
            this->_rotaAngle = 270.0f;

            this->_pos.move(static_cast<float>((-this->_speed * elapsedTimes)), 0.0f, 0.0f);
            this->_state = WALKING;
            this->_direction = UP;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_A)) {
            this->_rotaAngle = 0.0f;
            this->_pos.move(0.0f, 0.0f, static_cast<float>((this->_speed * elapsedTimes * 2.f)));
            this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
            this->_state = WALKING;
            this->_direction = LEFT;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_S)) {
            this->_rotaAngle = 90.0f;
            this->_pos.move(static_cast<float>((this->_speed * elapsedTimes)), 0.0f, 0.0f);
            this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
            this->_state = WALKING;
            this->_direction = DOWN;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_D)) {
            this->_rotaAngle = 180.0f;
            this->_pos.move(0.0f, 0.0f, static_cast<float>((-this->_speed * elapsedTimes * 2.f)));
            this->_state = WALKING;
            this->_direction = RIGHT;
        } else {
            this->_state = IDLE;
            this->_direction = NONE;
        }
    }
    if (this->_nbPlayer == 2) {
        if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_UP)) {
            this->_rotaAngle = 270.0f;
            this->_pos.move(static_cast<float>((-this->_speed * elapsedTimes)), 0.0f, 0.0f);
            this->_state = WALKING;
            this->_direction = UP;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_LEFT)) {
            this->_rotaAngle = 0.0f;
            this->_pos.move(0.0f, 0.0f, static_cast<float>((this->_speed * elapsedTimes * 2.f)));
            this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
            this->_state = WALKING;
            this->_direction = LEFT;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_DOWN)) {
            this->_rotaAngle = 90.0f;
            this->_pos.move(static_cast<float>((this->_speed * elapsedTimes)), 0.0f, 0.0f);
            this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
            this->_state = WALKING;
            this->_direction = DOWN;
        } else if (Indie::Raylib::Core::Core::getInstance().getInputKeyboard().IsKeyDown(KEY_RIGHT)) {
            this->_rotaAngle = 180.0f;
            this->_pos.move(0.0f, 0.0f, static_cast<float>((-this->_speed * elapsedTimes * 2.f)));
            this->_state = WALKING;
            this->_direction = RIGHT;
        } else {
            this->_state = IDLE;
            this->_direction = NONE;
        }
        if (Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadAvailable(0)) {
            if (Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadButtonReleased(0, GAMEPAD_BUTTON_LEFT_FACE_UP)) {
                this->_rotaAngle = 270.0f;
                this->_pos.move(static_cast<float>((-this->_speed * elapsedTimes)), 0.0f, 0.0f);
                this->_state = WALKING;
                this->_direction = UP;
            } else if (Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadButtonReleased(0, GAMEPAD_BUTTON_LEFT_FACE_LEFT)) {
                this->_rotaAngle = 0.0f;
                this->_pos.move(0.0f, 0.0f, static_cast<float>((this->_speed * elapsedTimes * 2.f)));
                this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
                this->_state = WALKING;
                this->_direction = LEFT;
            } else if (Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadButtonReleased(0, GAMEPAD_BUTTON_LEFT_FACE_DOWN)) {
                this->_rotaAngle = 90.0f;
                this->_pos.move(static_cast<float>((this->_speed * elapsedTimes)), 0.0f, 0.0f);
                this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
                this->_state = WALKING;
                this->_direction = DOWN;
            } else if (Indie::Raylib::Core::Core::getInstance().getInputGamepads().IsGamepadButtonReleased(0, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) {
                this->_rotaAngle = 180.0f;
                this->_pos.move(0.0f, 0.0f, static_cast<float>((-this->_speed * elapsedTimes * 2.f)));
                this->_state = WALKING;
                this->_direction = RIGHT;
            } else {
                this->_state = IDLE;
                this->_direction = NONE;
            }
        }
    }
    // if (this->_direction == Indie::Game::Player::RIGHT)
    //     std::cout << "RIGHT" << std::endl;
    // else if (this->_direction == Indie::Game::Player::DOWN)
    //     std::cout << "DOWN" << std::endl;
    // else if (this->_direction == Indie::Game::Player::UP)
    //     std::cout << "UP" << std::endl;
    // else if (this->_direction == Indie::Game::Player::LEFT)
    //     std::cout << "LEFT" << std::endl;
    // else
    //     std::cout << "NONE" << std::endl;
    if (this->_state == WALKING)
        this->_anim.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
    if (this->_state == IDLE)
        this->_animIdle.update(elapsedTimes, this->_pos, this->_rotaAngle, this->_scale, this->_rota);
}

void Indie::Game::Player::draw()
{
    if (_display) {
        if (this->_state == WALKING)
            this->_anim.draw();
        if (this->_state == IDLE)
            this->_animIdle.draw();
    }
}

bool Indie::Game::Player::isCollectable()
{
    return false;
}

bool Indie::Game::Player::isCollidable()
{
    return false;
}

int Indie::Game::Player::getFire()
{
    return this->_fire;
}

Indie::Game::Player::direction Indie::Game::Player::getDirection()
{
    return _direction;
}

void Indie::Game::Player::speedBonus()
{
    this->_speed += 1;
}

void Indie::Game::Player::fireBonus()
{
    this->_fire++;
}

void Indie::Game::Player::bombBonus()
{
    this->_nbBombs++;
}

int Indie::Game::Player::getCurrentNbBomb()
{
    return this->_currentNbBomb;
}

void Indie::Game::Player:: setCurrentNbBomb(int nb)
{
    this->_currentNbBomb = nb;
}

int Indie::Game::Player::getNbBombsMax()
{
    return this->_nbBombs;
}