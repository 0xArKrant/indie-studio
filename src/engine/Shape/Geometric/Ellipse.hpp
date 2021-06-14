/**
 * @file Ellipse.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Ellipse module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IEllipse.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Ellipse : public IEllipse {
                public:
                    Ellipse(const int, const int, const float, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Ellipse object
                     *
                     */
                    ~Ellipse() = default;

                    /**
                     * @brief Get the Center X object
                     *
                     * @return int
                     */
                    inline int GetCenterX() const { return this->_centerX; };
                    /**
                     * @brief Get the Center Y object
                     *
                     * @return int
                     */
                    inline int GetCenterY() const { return this->_centerY; };
                    /**
                     * @brief Get the Radius H object
                     *
                     * @return float
                     */
                    inline float GetRadiusH() const { return this->_radiusH; };
                    /**
                     * @brief Get the Radius V object
                     *
                     * @return float
                     */
                    inline float GetRadiusV() const { return this->_radiusV; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Center X object
                     *
                     * @param centerX
                     */
                    inline void SetCenterX(const int centerX) { this->_centerX = centerX; };
                    /**
                     * @brief Set the Center Y object
                     *
                     * @param centerY
                     */
                    inline void SetCenterY(const int centerY) { this->_centerY = centerY; };
                    /**
                     * @brief Set the Radius H object
                     *
                     * @param radiusH
                     */
                    inline void SetRadiusH(const float radiusH) { this->_radiusH = radiusH; };
                    /**
                     * @brief Set the Radius V object
                     *
                     * @param radiusV
                     */
                    inline void SetRadiusV(const float radiusV) { this->_radiusV = radiusV; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    int          _centerX; /*! int object */
                    int          _centerY; /*! int object */
                    float        _radiusH; /*! float object */
                    float        _radiusV; /*! float object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class EllipseLines : public IEllipse {
                public:
                    EllipseLines(const int, const int, const float, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Ellipse Lines object
                     *
                     */
                    ~EllipseLines() = default;

                    /**
                     * @brief Get the Center X object
                     *
                     * @return int
                     */
                    inline int GetCenterX() const { return this->_centerX; };
                    /**
                     * @brief Get the Center Y object
                     *
                     * @return int
                     */
                    inline int GetCenterY() const { return this->_centerY; };
                    /**
                     * @brief Get the Radius H object
                     *
                     * @return float
                     */
                    inline float GetRadiusH() const { return this->_radiusH; };
                    /**
                     * @brief Get the Radius V object
                     *
                     * @return float
                     */
                    inline float GetRadiusV() const { return this->_radiusV; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors()  const { return this->_colors; };

                    /**
                     * @brief Set the Center X object
                     *
                     * @param centerX
                     */
                    inline void SetCenterX(const int centerX) { this->_centerX = centerX; };
                    /**
                     * @brief Set the Center Y object
                     *
                     * @param centerY
                     */
                    inline void SetCenterY(const int centerY) { this->_centerY = centerY; };
                    /**
                     * @brief Set the Radius H object
                     *
                     * @param radiusH
                     */
                    inline void SetRadiusH(const float radiusH) { this->_radiusH = radiusH; };
                    /**
                     * @brief Set the Radius V object
                     *
                     * @param radiusV
                     */
                    inline void SetRadiusV(const float radiusV) { this->_radiusV = radiusV; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    int          _centerX; /*! int object */
                    int          _centerY; /*! int object */
                    float        _radiusH; /*! float object */
                    float        _radiusV; /*! float object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };
        }
    }
}