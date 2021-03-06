/**
 * @file Matrix.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Matrix substitution classes to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

namespace Misc {
    class Matrix {
        public:
            Matrix(const float, const float, const float, const float, const float, const float, const float,
                const float, const float, const float, const float, const float, const float, const float, const float, const float);
            Matrix(const Matrix &);
            Matrix & operator=(const Matrix &);
            Matrix();
            /**
             * @brief Destroy the Matrix object
             *
             */
            ~Matrix() = default;

            inline float getMatrix0()  const { return this->_m0;  }; /*! m0 value getter @return float m0 */
            inline float getMatrix1()  const { return this->_m1;  }; /*! m1 value getter @return float m1 */
            inline float getMatrix2()  const { return this->_m2;  }; /*! m2 value getter @return float m2 */
            inline float getMatrix3()  const { return this->_m3;  }; /*! m3 value getter @return float m3 */
            inline float getMatrix4()  const { return this->_m4;  }; /*! m4 value getter @return float m4 */
            inline float getMatrix5()  const { return this->_m5;  }; /*! m5 value getter @return float m5 */
            inline float getMatrix6()  const { return this->_m6;  }; /*! m6 value getter @return float m6 */
            inline float getMatrix7()  const { return this->_m7;  }; /*! m7 value getter @return float m7 */
            inline float getMatrix8()  const { return this->_m8;  }; /*! m8 value getter @return float m8 */
            inline float getMatrix9()  const { return this->_m9;  }; /*! m9 value getter @return float m9 */
            inline float getMatrix10() const { return this->_m10; }; /*! m10 value getter @return float m10 */
            inline float getMatrix11() const { return this->_m11; }; /*! m11 value getter @return float m11 */
            inline float getMatrix12() const { return this->_m12; }; /*! m12 value getter @return float m12 */
            inline float getMatrix13() const { return this->_m13; }; /*! m13 value getter @return float m13 */
            inline float getMatrix14() const { return this->_m14; }; /*! m14 value getter @return float m14 */
            inline float getMatrix15() const { return this->_m15; }; /*! m15 value getter @return float m15 */
        private:
            float _m0, _m4, _m8, _m12;
            float _m1, _m5, _m9, _m13;
            float _m2, _m6, _m10, _m14;
            float _m3, _m7, _m11, _m15;
    };
}
