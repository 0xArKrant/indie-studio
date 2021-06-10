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
                std::string getId() const;
                Misc::Vector<3> getPos() const;
                bool getDisplay() const;
                void setDisplay(bool display);
                void setPosition(Misc::Vector<3> pos);
                void update(float elapsedTimes);
                void draw() const;

            protected:
            private:
                std::string _id;
                Misc::Vector<3> _pos;
                bool _display;
        };
    }
}

#endif /* !GAMEOBJECT_HPP_ */
