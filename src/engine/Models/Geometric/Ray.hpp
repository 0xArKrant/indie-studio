/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#include "indie.hpp"

#ifndef RAY_HPP_
#define RAY_HPP_

namespace IModels {
    class Ray : public Models {
        public:
            Ray(const Misc::Ray, const Misc::Colors &);
            ~Ray() = default;

            inline Misc::Colors GetColors() const { return this->_colors; };
            inline Misc::Ray    GetRay()    const { return this->_ray;    };

            inline void SetRay(const Misc::Ray ray)          { this->_ray = ray;       };
            inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

            void DrawModels();
        private:
            Misc::Ray    _ray;
            Misc::Colors _colors;
    };
}

#endif /* !RAY_HPP_ */
