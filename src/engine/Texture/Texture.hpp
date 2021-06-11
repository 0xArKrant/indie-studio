/**
 * @file Texture.hpp
 * @author QuentinMarchand1
 * @brief Encapsulation of the Texture module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
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
                    ::Texture2D _texture; /*!Texture2D structure from raylib */
            };
        }
    }
}