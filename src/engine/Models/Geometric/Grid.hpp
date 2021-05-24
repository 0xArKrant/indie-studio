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
            Grid(const int, const float);
            ~Grid() = default;

            inline int    GetSlices()  const { return this->_slices;  };
            inline float  GetSpacing() const { return this->_spacing; };

            inline void SetSlices(const int slices)     { this->_slices = slices;   };
            inline void SetSpacing(const float spacing) { this->_spacing = spacing; };

            void DrawModels();
        private:
            int   _slices;
            float _spacing;
    };
}

#endif /* !GRID_HPP_ */
