/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#pragma once

#include "indie.hpp"
#include "IScene.hpp"

namespace Core {
    class SceneManagement {
        public:
            SceneManagement();
            ~SceneManagement();
            void loop();

        protected:
        private:
            std::stack <IScene *> _stack;
    };
}