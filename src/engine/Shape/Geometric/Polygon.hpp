/**
 * @file Polygon.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Polygon module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IPolygon.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Polygon : public IPolygon {
                public:
                    Polygon(const Misc::Vector<2>, const int, const float, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Polygon object
                     *
                     */
                    ~Polygon() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Sides object
                     *
                     * @return int
                     */
                    inline int GetSides() const { return this->_sides; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Rotation object
                     *
                     * @return float
                     */
                    inline float GetRotation() const { return this->_rotation; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param center
                     */
                    inline void SetVector(const Misc::Vector<2> center) { this->_center = center; };
                    /**
                     * @brief Set the Sides object
                     *
                     * @param sides
                     */
                    inline void SetSides(const int sides) { this->_sides = sides; };
                    /**
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Rotation object
                     *
                     * @param rotation
                     */
                    inline void SetRotation(const float rotation) { this->_rotation = rotation; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object */
                    int             _sides; /*! int object */
                    float           _radius; /*! float object */
                    float           _rotation; /*! float object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class PolygonLines : public IPolygon {
                public:
                    PolygonLines(const Misc::Vector<2>, const int, const float, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Polygon Lines object
                     *
                     */
                    ~PolygonLines() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Sides object
                     *
                     * @return int
                     */
                    inline int GetSides() const { return this->_sides; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Rotation object
                     *
                     * @return float
                     */
                    inline float GetRotation() const { return this->_rotation; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param center
                     */
                    inline void SetVector(const Misc::Vector<2> center) { this->_center = center; };
                    /**
                     * @brief Set the Sides object
                     *
                     * @param sides
                     */
                    inline void SetSides(const int sides) { this->_sides = sides; };
                    /**
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Rotation object
                     *
                     * @param rotation
                     */
                    inline void SetRotation(const float rotation) { this->_rotation = rotation; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> */
                    int             _sides; /*! int object */
                    float           _radius; /*! float object */
                    float           _rotation; /*! float object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class PolygonLinesEx : public IPolygon {
                public:
                    PolygonLinesEx(const Misc::Vector<2>, const int, const float, const float, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Polygon Lines Ex object
                     *
                     */
                    ~PolygonLinesEx() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Sides object
                     *
                     * @return int
                     */
                    inline int GetSides() const { return this->_sides; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Rotation object
                     *
                     * @return float
                     */
                    inline float GetRotation() const { return this->_rotation; };
                    /**
                     * @brief Get the Line Thick object
                     *
                     * @return float
                     */
                    inline float GetLineThick() const { return this->_linethick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param center
                     */
                    inline void SetVector(const Misc::Vector<2> center) { this->_center = center; };
                    /**
                     * @brief Set the Sides object
                     *
                     * @param sides
                     */
                    inline void SetSides(const int sides) { this->_sides = sides; };
                    /**
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Rotation object
                     *
                     * @param rotation
                     */
                    inline void SetRotation(const float rotation) { this->_rotation = rotation; };
                    /**
                     * @brief Set the Line Thick object
                     *
                     * @param linethick
                     */
                    inline void SetLineThick(const float linethick) { this->_linethick = linethick; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> */
                    int             _sides; /*! int object */
                    float           _radius; /*! float object */
                    float           _rotation; /*! float object */
                    float           _linethick; /*! float object*/
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };
        }
    }
}