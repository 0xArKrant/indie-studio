/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#pragma once

#include "indie.hpp"
#include "IScene.hpp"
#include "scene.hpp"

namespace Indie {
    namespace Core     {
        class SceneManagement         {
            public:
                SceneManagement();
                ~SceneManagement();
                void loop();
            private:
                std::stack<IScene *> _stack;
        };
    } // namespace Core
} // namespace Indie