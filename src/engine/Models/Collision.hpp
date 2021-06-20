/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Collision
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"
#include "BoundingBox.hpp"
#include "RectangleVector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models {
            class Collision {
                public:
                    Collision() {}
                    ~Collision() {}

                    static bool CheckCollisionCircleRec(const Misc::Vector<2> &pos, const float &radius, const Misc::Rectangle &rect);
                protected:
                private:
            };
        }
    }
}