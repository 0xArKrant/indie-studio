/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Collision
*/

#include "Collision.hpp"

bool Indie::Raylib::Models::Collision::CheckCollisionCircleRec(const Misc::Vector<2> &pos, const float &radius, const Misc::Rectangle &rect)
{
    return ::CheckCollisionCircleRec(
        ::Vector2 {
            pos.getX(),
            pos.getY()
        },
        radius,
        ::Rectangle {
            rect.getX(),
            rect.getY(),
            rect.getHeight(),
            rect.getWidth()
        }
    );
}