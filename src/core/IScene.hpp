/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IScene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "indie.hpp"

namespace Core
{
    class IScene {
        public:
            ~IScene() = default;
            virtual void update(std::stack <Core::IScene *> &) = 0;
            virtual void  draw() = 0;

        protected:
        private:
    };
}

#endif /* !ISCENE_HPP_ */