/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Texture
*/

#pragma once

#include "indie.hpp"
#include "Colors.hpp"
#include "Vector.hpp"
#include "RectangleVector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Texture {
            class Texture {
                public:
                    Texture(const std::string& fileName);
                    ~Texture();

                    void DrawTexture(int posX, int posY, Misc::Colors tint);
                    void DrawTextureV(Misc::Vector<2> position, Misc::Colors tint);
                    void DrawTextureEx(Misc::Vector<2> position, float rotation, float scale, Misc::Colors tint);
                    void DrawTextureRec(Misc::Rectangle source, Misc::Vector<2> position, Misc::Colors tint);
                private:
                    ::Texture2D _texture;
            };
        }
    }
}