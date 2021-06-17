/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IScene
*/

#pragma once

#include "SceneManagement.hpp"
#include "indie.hpp"

namespace Indie {
    namespace Core     {
        class IScene         {
            public:
                ~IScene() = default;
                virtual void update(SceneManagement &) = 0;
                virtual void draw() = 0;

            protected:
        };
    } // namespace Core
} // namespace Indie