/**
 * @file Pixel.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Pixel module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IPixel.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Pixel : public IPixel {
                public:
                    Pixel(const int, const int, const Misc::Colors&);
                    /**
                     * @brief Destroy the Pixel object
                     *
                     */
                    ~Pixel() = default;

                    /**
                     * @brief Get the Pos X object
                     *
                     * @return int
                     */
                    inline int GetPosX() const { return this->_posX; };
                    /**
                     * @brief Get the Pos Y object
                     *
                     * @return int
                     */
                    inline int GetPosY() const { return this->_posY; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Pos X object
                     *
                     * @param posX
                     */
                    inline void SetPosX(const int posX) { this->_posX = posX; };
                    /**
                     * @brief Set the Pos Y object
                     *
                     * @param posY
                     */
                    inline void SetPosY(const int posY) { this->_posY = posY; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    int          _posX; /*! int object */
                    int          _posY; /*! int object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class PixelV : public IPixel {
                public:
                    PixelV(const Misc::Vector<2>, const Misc::Colors&);
                    /**
                     * @brief Destroy the Pixel V object
                     *
                     */
                    ~PixelV() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_position; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param position
                     */
                    inline void SetVector(const Misc::Vector<2> position) { this->_position = position; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _position; /*!Misc::Vector<2> object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };
        }
    }
}