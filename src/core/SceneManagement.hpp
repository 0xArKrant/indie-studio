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
#include "../engine/Core/CoreRaylib.hpp"


namespace Indie {
    namespace Core {
        class SceneManagement {
            public:
                SceneManagement(int, int, std::string &);
                ~SceneManagement();
                void loop();
            private:
                Indie::Raylib::Core::Core &_window = Indie::Raylib::Core::Core::getInstance(1600, 900, "Bomberman");
                std::stack<IScene *> _stack;
        };
    } // namespace Core
} // namespace Indie