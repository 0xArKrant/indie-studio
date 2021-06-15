/*
** EPITECH PROJECT, 2021
** indiestart
** File description:
** GameObject
*/

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
                    MUSIC,
                };
                GameObject(std::string id, Misc::Vector<3> pos, TypeObject type, bool display);
                GameObject() = delete;
                GameObject(const GameObject &cpy) = delete;
                GameObject &operator =(const GameObject &cpy) = delete;
                ~GameObject();
                std::string getId() const;
                Misc::Vector<3> getPos() const;
                TypeObject getType() const;
                bool getDisplay() const;
                void setDisplay(bool display);
                void setPosition(Misc::Vector<3> pos);
                virtual void update(float elapsedTimes) = 0;
                virtual void draw() = 0;

            protected:
                std::string _id;
                Misc::Vector<3> _pos;
                bool _display;
                TypeObject _type;
            private:
        };
    }
}
