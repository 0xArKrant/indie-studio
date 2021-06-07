/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Sphere
*/

#pragma once

#include "ISphere.hpp"

namespace Models {
    class Sphere : public ISphere {
        public:
            Sphere(const Misc::Vector<3>, const float, const Misc::Colors &);
            ~Sphere() = default;

            inline Misc::Vector<3> GetCenterPos() const { return this->_centerPos; };
            inline float           GetRadius()    const { return this->_radius;    };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetCenterPos(const Misc::Vector<3> centerPos) { this->_centerPos = centerPos; };
            inline void SetRadius(const float radius)                 { this->_radius = radius;       };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawModels();
        private:
            Misc::Vector<3> _centerPos;
            float           _radius;
            Misc::Colors    _colors;
    };

    class SphereEx : public ISphere {
        public:
            SphereEx(const Misc::Vector<3>, const float, const int, const int, const Misc::Colors &);
            ~SphereEx() = default;

            inline Misc::Vector<3> GetCenterPos() const { return this->_centerPos; };
            inline float           GetRadius()    const { return this->_radius;    };
            inline int             GetRings()     const { return this->_rings;     };
            inline int             GetSlices()    const { return this->_slices;    };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetCenterPos(const Misc::Vector<3> centerPos) { this->_centerPos = centerPos; };
            inline void SetRadius(const float radius)                 { this->_radius = radius;       };
            inline void SetRings(const int rings)                     { this->_rings = rings;         };
            inline void SetSlices(const int slices)                   { this->_slices = slices;       };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawModels();
        private:
            Misc::Vector<3> _centerPos;
            float           _radius;
            int             _rings;
            int             _slices;
            Misc::Colors    _colors;
    };

    class SphereWires : public ISphere {
        public:
            SphereWires(const Misc::Vector<3>, const float, const int, const int, const Misc::Colors &);
            ~SphereWires() = default;

            inline Misc::Vector<3> GetCenterPos() const { return this->_centerPos; };
            inline float           GetRadius()    const { return this->_radius;    };
            inline int             GetRings()     const { return this->_rings;     };
            inline int             GetSlices()    const { return this->_slices;    };
            inline Misc::Colors    GetColors()    const { return this->_colors;    };

            inline void SetCenterPos(const Misc::Vector<3> centerPos) { this->_centerPos = centerPos; };
            inline void SetRadius(const float radius)                 { this->_radius = radius;       };
            inline void SetRings(const int rings)                     { this->_rings = rings;         };
            inline void SetSlices(const int slices)                   { this->_slices = slices;       };
            inline void SetColors(const Misc::Colors colors)          { this->_colors = colors;       };

            void DrawModels();
        private:
            Misc::Vector<3> _centerPos;
            float           _radius;
            int             _rings;
            int             _slices;
            Misc::Colors    _colors;
    };
}
