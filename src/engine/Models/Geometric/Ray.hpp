/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Ray
*/

#pragma once

#include "IRay.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models     {
            class Ray : public IRay         {
                public:
                    Ray(const Misc::Ray, const Misc::Colors&);
                    Ray(const Ray &);
                    Ray& operator=(const Ray &);
                    ~Ray() = default;

                    inline Misc::Colors GetColors() const { return this->_colors; };
                    inline Misc::Ray GetRay() const { return this->_ray; };

                    inline void SetRay(const Misc::Ray ray) { this->_ray = ray; };
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawModels();

                private:
                    Misc::Ray _ray;
                    Misc::Colors _colors;
            };
        } // namespace Models
    } // namespace Raylib
} // namespace Indie