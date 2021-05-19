/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Grid
*/

#include "indie.hpp"

#ifndef GRID_HPP_
#define GRID_HPP_

namespace IModels {
    class Grid : public Models {
        public:
            Grid(int, float);
            ~Grid() = default;
            void DrawModels();
        private:
            int _slices;
            float _spacing;
    };
}

#endif /* !LINE3D_HPP */
