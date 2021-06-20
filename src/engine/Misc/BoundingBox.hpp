/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** BoundingBox
*/

#pragma once

#include "indie.hpp"
#include "Vector.hpp"


namespace Misc {
    class BoundingBox {
        public:
            BoundingBox(const Misc::Vector<3> &min, const Misc::Vector<3> &max);
            ~BoundingBox() {}

            inline Vector<3> getMin() const { return (this->_min); }
            inline Vector<3> getMax() const { return (this->_max); }
        protected:
        private:
            Vector<3> _min;
            Vector<3> _max;
    };
}