/*
** EPITECH PROJECT, 2021
** indiestart
** File description:
** GameObject
*/

#include "GameObject.hpp"

Indie::Game::GameObject::GameObject(std::string id, Misc::Vector<3> pos, TypeObject type, bool display)
{
    this->_id = id;
    this->_pos = pos;
    this->_display = display;
    this->_type = type;
}

Indie::Game::GameObject::TypeObject Indie::Game::GameObject::getType() const
{
    return this->_type;
}

std::string Indie::Game::GameObject::getId() const
{
    return this->_id;
}

Misc::Vector<3> Indie::Game::GameObject::getPos() const
{
    return this->_pos;
}

bool Indie::Game::GameObject::getDisplay() const
{
    return this->_display;
}

void Indie::Game::GameObject::setPosition(Misc::Vector<3> pos)
{
    this->_pos = pos;
}

void Indie::Game::GameObject::setDisplay(bool display)
{
    this->_display = display;
}

Indie::Game::GameObject::~GameObject()
{
}
