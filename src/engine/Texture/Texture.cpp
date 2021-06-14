/**
 * @file Texture.cpp
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

#include "Texture.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Texture:: Texture:: Texture object
 * @brief Load texture from file into GPU memory (VRAM)
 *
 * @param fileName
 */
Indie::Raylib::Texture::Texture::Texture(const std::string& fileName) {
    this->_texture = ::LoadTexture(fileName.c_str());
}

/**
 * @brief Destroy the Indie:: Raylib:: Texture:: Texture:: Texture object
 * @brief Unload texture from GPU memory (VRAM)
 *
 */
Indie::Raylib::Texture::Texture::~Texture() {
    ::UnloadTexture(this->_texture);
}

/**
 * @brief Draw a Texture2D
 *
 * @param posX
 * @param posY
 * @param tint
 */
void Indie::Raylib::Texture::Texture::DrawTexture(int posX, int posY, Misc::Colors tint) {
    ::DrawTexture(
        this->_texture,
        posX,
        posY,
        ::Color { tint.getR(),tint.getG(),tint.getB(),tint.getA() }
    );
}

/**
 * @brief Draw a Texture2D with position defined as Vector2
 *
 * @param position
 * @param tint
 */
void Indie::Raylib::Texture::Texture::DrawTextureV(Misc::Vector<2> position, Misc::Colors tint) {
    ::DrawTextureV(this->_texture,
        ::Vector2 { position.getX(), position.getY() },
        ::Color{tint.getR(),tint.getG(),tint.getB(),tint.getA() }
    );
}

/**
 * @brief Draw a Texture2D with extended parameters
 *
 * @param position
 * @param rotation
 * @param scale
 * @param tint
 */
void Indie::Raylib::Texture::Texture::DrawTextureEx(Misc::Vector<2> position, float rotation, float scale, Misc::Colors tint) {
    ::DrawTextureEx(this->_texture,
        ::Vector2 { position.getX(), position.getY() },
        rotation,
        scale,
        ::Color{tint.getR(),tint.getG(),tint.getB(),tint.getA() }
    );
}

/**
 * @brief Draw a part of a texture defined by a rectangle
 *
 * @param source
 * @param position
 * @param tint
 */
void Indie::Raylib::Texture::Texture::DrawTextureRec(Misc::Rectangle source, Misc::Vector<2> position, Misc::Colors tint) {
    ::DrawTextureRec(this->_texture,
        ::Rectangle {source.getX(), source.getY(), source.getWidth(), source.getHeight() },
        ::Vector2{position.getX(),position.getY() },
        ::Color{ tint.getR(), tint.getG(), tint.getB(), tint.getA() }
    );
}