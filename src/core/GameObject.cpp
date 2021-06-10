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
}

Indie::Game::GameObject::~GameObject()
{
}
