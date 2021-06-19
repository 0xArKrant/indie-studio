/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IScene
*/

#pragma once

#include "indie.hpp"

namespace Indie {
    namespace Core     {
        class SceneManagement;
        class IScene         {
            public:
                virtual ~IScene() = default;
                virtual void update(SceneManagement &, const double &) = 0;
                virtual void draw() = 0;

            protected:
        };
    } // namespace Core
} // namespace Indie

#include "SceneManagement.hpp"