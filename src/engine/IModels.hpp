/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** IModels
*/

#include "indie.hpp"

#ifndef IMODELS_HPP_
#define IMODELS_HPP_

namespace IModels {
    class Models {
        public:
            virtual ~Models() = default;
            virtual void DrawModels() = 0;
            virtual void ComputeMesh() = 0;
            virtual ::Mesh GenerateMesh() = 0;
            virtual ::Color GetColor() = 0;
            virtual void SetColor(::Color) = 0;
    };
}

#endif /* !IMODELS_HPP */
