/*
** EPITECH PROJECT, 2021
** indiestart
** File description:
** GameObject
*/

#ifndef GAMEOBJECT_HPP_
#define GAMEOBJECT_HPP_

#include "Vector.hpp"

namespace Indie {
    namespace Game {
        class GameObject {
            public:
                enum TypeObject {
                    PLAYER,
                    BOMB,
                    BOX,
                    TEXT,

                };
                GameObject(std::string id, Misc::Vector<3> pos, TypeObject type, bool display);
                GameObject() = delete;
                GameObject(const GameObject &cpy) = delete;
                GameObject &operator =(const GameObject &cpy) = delete;
                ~GameObject();
                //TODO
                //getId() const;
                //getPos() const;
                //getDisplay() const;
                //setDisplay();
                //setPosition();
                //update(float elaspedTimes)
                //draw() const;

            protected:
            private:
                std::string _id;
                Misc::Vector<3> _pos;
                bool _display;
        };
    }
}

#endif /* !GAMEOBJECT_HPP_ */
