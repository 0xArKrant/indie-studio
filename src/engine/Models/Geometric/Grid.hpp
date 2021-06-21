/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Grid
*/

#pragma once

#include "IGrid.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models {
            class Grid : public IGrid {
                public:
                    Grid(const int, const float);
                    Grid(const Grid &);
                    Grid& operator=(const Grid &);
                    ~Grid() = default;

                    inline int GetSlices() const { return this->_slices; };
                    inline float GetSpacing() const { return this->_spacing; };

                    inline void SetSlices(const int slices) { this->_slices = slices; };
                    inline void SetSpacing(const float spacing) { this->_spacing = spacing; };

                    void DrawModels();

                private:
                    int _slices;
                    float _spacing;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie
