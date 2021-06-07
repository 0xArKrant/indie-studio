/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IScene
*/

#pragma once

#include "indie.hpp"

namespace Core {
    class IScene {
        public:
            ~IScene() = default;
            virtual void update() = 0;
            virtual void  draw() = 0;
            virtual std::string getName() = 0;
        private:
    };
}