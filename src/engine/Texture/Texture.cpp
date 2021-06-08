/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Texture
*/

#include "Texture.hpp"

Texture::Texture::Texture(const std::string &fileName)
{
    this->_texture = ::LoadTexture(fileName.c_str());
}

Texture::Texture::~Texture()
{
    ::UnloadTexture(this->_texture);
}

void Texture::Texture::DrawTexture(int posX, int posY, Misc::Colors tint)
{
    ::DrawTexture(this->_texture, posX, posY, ::Color {
        tint.getR(),
        tint.getG(),
        tint.getB(),
        tint.getA()
    });
}

void Texture::Texture::DrawTextureV(Misc::Vector<2> position, Misc::Colors tint)
{
    ::DrawTextureV(this->_texture,
        ::Vector2 { position.getX(), position.getY() },
        ::Color {
            tint.getR(),
            tint.getG(),
            tint.getB(),
            tint.getA()
        }
    );
}

void Texture::Texture::DrawTextureEx(Misc::Vector<2> position, float rotation, float scale, Misc::Colors tint)
{
    ::DrawTextureEx(this->_texture,
        ::Vector2 { position.getX(), position.getY() },
        rotation, scale,
        ::Color {
            tint.getR(),
            tint.getG(),
            tint.getB(),
            tint.getA()
        }
    );
}

void Texture::Texture::DrawTextureRec(Misc::Rectangle source, Misc::Vector<2> position, Misc::Colors tint)
{
    ::DrawTextureRec(this->_texture,
        ::Rectangle {
            source.getX(),
            source.getY(),
            source.getWidth(),
            source.getHeight()
        },
        ::Vector2 {
            position.getX(),
            position.getY()
        },
        ::Color {
            tint.getR(),
            tint.getG(),
            tint.getB(),
            tint.getA()
        }
    );
}