/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Matrix.hpp
*/

#pragma once

namespace Misc {
    class Matrix {
        public:
            Matrix(const float, const float, const float, const float, const float, const float, const float,
            const float, const float, const float, const float, const float, const float, const float, const float, const float);
            Matrix();
            ~Matrix() = default;

            inline float getMatrix0()  const { return this->_m0;  };
            inline float getMatrix1()  const { return this->_m1;  };
            inline float getMatrix2()  const { return this->_m2;  };
            inline float getMatrix3()  const { return this->_m3;  };
            inline float getMatrix4()  const { return this->_m4;  };
            inline float getMatrix5()  const { return this->_m5;  };
            inline float getMatrix6()  const { return this->_m6;  };
            inline float getMatrix7()  const { return this->_m7;  };
            inline float getMatrix8()  const { return this->_m8;  };
            inline float getMatrix9()  const { return this->_m9;  };
            inline float getMatrix10() const { return this->_m10; };
            inline float getMatrix11() const { return this->_m11; };
            inline float getMatrix12() const { return this->_m12; };
            inline float getMatrix13() const { return this->_m13; };
            inline float getMatrix14() const { return this->_m14; };
            inline float getMatrix15() const { return this->_m15; };
        private:
            float _m0, _m4, _m8, _m12;
            float _m1, _m5, _m9, _m13;
            float _m2, _m6, _m10, _m14;
            float _m3, _m7, _m11, _m15;
    };
}
