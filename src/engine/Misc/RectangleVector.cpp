/**
 * @file RectangleVector.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Rectangle substitution class to raylib structure (Vector4)
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#include "RectangleVector.hpp"

/**
 * @brief Construct a new Misc:: Rectangle:: Rectangle object
 *
 */

Misc::Rectangle::Rectangle() {
    this->_rectangle = { 0, 0, 0, 0 };
}

/**
 * @brief Construct a new Misc:: Rectangle:: Rectangle object
 *
 * @param rectangle take 4 float to build a x,y,width,height vector
 */

Misc::Rectangle::Rectangle(const std::array<float, 4> rectangle) {
    this->_rectangle = rectangle;
}