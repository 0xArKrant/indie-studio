/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IScene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_

#include "indie.hpp"

class IScene {
    public:
        ~IScene() = default;
        virtual void update() = 0;
        virtual void  draw() = 0;
        virtual std::string getName() = 0;

    protected:
    private:
};

#endif /* !ISCENE_HPP_ */