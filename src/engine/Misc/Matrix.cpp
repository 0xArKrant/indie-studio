/**
 * @file Matrix.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#include "Matrix.hpp"

/**
 * @brief Construct a new Misc:: Matrix:: Matrix object
 *
 */

Misc::Matrix::Matrix() {
    this->_m0 = 0;
    this->_m1 = 0;
    this->_m2 = 0;
    this->_m3 = 0;
    this->_m4 = 0;
    this->_m5 = 0;
    this->_m6 = 0;
    this->_m7 = 0;
    this->_m8 = 0;
    this->_m9 = 0;
    this->_m10 = 0;
    this->_m11 = 0;
    this->_m12 = 0;
    this->_m13 = 0;
    this->_m14 = 0;
    this->_m15 = 0;
}

/**
 * @brief Construct a new Misc:: Matrix:: Matrix object
 *
 * @param mX
 */

Misc::Matrix::Matrix(const float m0, const float m1, const float m2, const float m3, const float m4, const float m5, const float m6,
    const float m7, const float m8, const float m9, const float m10, const float m11, const float m12, const float m13, const float m14, const float m15) {
    this->_m0 = m0;
    this->_m1 = m1;
    this->_m2 = m2;
    this->_m3 = m3;
    this->_m4 = m4;
    this->_m5 = m5;
    this->_m6 = m6;
    this->_m7 = m7;
    this->_m8 = m8;
    this->_m9 = m9;
    this->_m10 = m10;
    this->_m11 = m11;
    this->_m12 = m12;
    this->_m13 = m13;
    this->_m14 = m14;
    this->_m15 = m15;
}