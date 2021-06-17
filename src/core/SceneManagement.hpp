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
#include "CoreRaylib.hpp"


namespace Indie {
    namespace Core {
        class IScene;
        class SceneManagement {
            public:
                SceneManagement(int, int, std::string &);
                ~SceneManagement();
                void push(std::unique_ptr<IScene> &);
                void pop();
                void loop();
            private:
                Indie::Raylib::Core::Core &_window = Indie::Raylib::Core::Core::getInstance(1600, 900, "Bomberman");
                std::stack<std::unique_ptr<IScene>> _stack;
        };
    } // namespace Core
} // namespace Indie