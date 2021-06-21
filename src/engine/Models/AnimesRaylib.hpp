/*
** EPITECH PROJECT, 2021
** indiedemerde
** File description:
** AnimesRaylib
*/


#pragma once
#include "indie.hpp"
#include "GameObject.hpp"
#include "ModelsRaylib.hpp"
#include "Player.hpp"
#include "GameObject.hpp"
#include <filesystem>

namespace Indie {
    namespace Raylib {
            class AnimesRaylib {
                public:
                    AnimesRaylib();
                    AnimesRaylib(const std::string &dirPath, const std::string &texturePath);
                    ~AnimesRaylib();

                void update(float elapsed, Misc::Vector<3> &pos, float &fRotaAngle,  Misc::Vector<3> &scale, const Misc::Vector<3> &vRotaAngle);
                void draw();

                protected:
                    int _frameCount = 0;
                    std::vector<std::string> _pathList;
                    std::vector<::Model> _objList;
                    std::vector<::Texture2D> _textureList;
                    ::Texture2D _texture;
                    ::Vector3 _pos;
                    ::Vector3 _scale;
                    ::Vector3 _vRotaAngle;
                    float _fRotaAngle;
                    Indie::Raylib::Models::ModelsRaylib _model;
                private:
            };
    }
}
