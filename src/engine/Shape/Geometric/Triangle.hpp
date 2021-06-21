/**
 * @file Triangle.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Triangle module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "ITriangle.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Triangle : public ITriangle {
                public:
                    Triangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors&);
                    Triangle();
                    Triangle(const Triangle &);
                    Triangle& operator=(const Triangle &);
                    /**
                     * @brief Destroy the Triangle object
                     *
                     */
                    ~Triangle() = default;
                    /**
                     * @brief Get the Vector 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector1() const { return this->_point1; };
                    /**
                     * @brief Get the Vector 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector2() const { return this->_point2; };
                    /**
                     * @brief Get the Vector 3 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector3() const { return this->_point3; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector 1 object
                     *
                     * @param point1
                     */
                    inline void SetVector1(const Misc::Vector<2> point1) { this->_point1 = point1; };
                    /**
                     * @brief Set the Vector 2 object
                     *
                     * @param point2
                     */
                    inline void SetVector2(const Misc::Vector<2> point2) { this->_point2 = point2; };
                    /**
                     * @brief Set the Vector 3 object
                     *
                     * @param point3
                     */
                    inline void SetVector3(const Misc::Vector<2> point3) { this->_point3 = point3; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _point1; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _point2; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _point3; /*! Misc::Vector<2> object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class TriangleLines : public ITriangle {
                public:
                    TriangleLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors&);
                    TriangleLines();
                    TriangleLines(const TriangleLines &);
                    TriangleLines& operator=(const TriangleLines &);
                    /**
                     * @brief Destroy the Triangle Lines object
                     *
                     */
                    ~TriangleLines() = default;

                    /**
                     * @brief Get the Vector 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector1() const { return this->_point1; };
                    /**
                     * @brief Get the Vector 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector2() const { return this->_point2; };
                    /**
                     * @brief Get the Vector 3 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector3() const { return this->_point3; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors()  const { return this->_colors; };

                    /**
                     * @brief Set the Vector 1 object
                     *
                     * @param point1
                     */
                    inline void SetVector1(const Misc::Vector<2> point1) { this->_point1 = point1; };
                    /**
                     * @brief Set the Vector 2 object
                     *
                     * @param point2
                     */
                    inline void SetVector2(const Misc::Vector<2> point2) { this->_point2 = point2; };
                    /**
                     * @brief Set the Vector 3 object
                     *
                     * @param point3
                     */
                    inline void SetVector3(const Misc::Vector<2> point3) { this->_point3 = point3; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _point1; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _point2; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _point3; /*! Misc::Vector<2> object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class TriangleFan : public ITriangle {
                public:
                    TriangleFan(const Misc::Vector<2>, const int, const Misc::Colors&);
                    TriangleFan();
                    TriangleFan(const TriangleFan &);
                    TriangleFan& operator=(const TriangleFan &);
                    /**
                     * @brief Destroy the Triangle Fan object
                     *
                     */
                    ~TriangleFan() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_point; };
                    /**
                     * @brief Get the Points Count object
                     *
                     * @return int
                     */
                    inline int GetPointsCount() const { return this->_pointsCount; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param point
                     */
                    inline void SetVector(const Misc::Vector<2> point) { this->_point = point; };
                    /**
                     * @brief Set the Points Count object
                     *
                     * @param pointsCount
                     */
                    inline void SetPointsCount(const int pointsCount) { this->_pointsCount = pointsCount; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _point; /*! Misc::Vector<2> object */
                    int _pointsCount; /*! Int object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class TriangleStrip : public ITriangle {
                public:
                    TriangleStrip(const Misc::Vector<2>, const int, const Misc::Colors&);
                    TriangleStrip();
                    TriangleStrip(const TriangleStrip &);
                    TriangleStrip& operator=(const TriangleStrip &);
                    /**
                     * @brief Destroy the Triangle Strip object
                     *
                     */
                    ~TriangleStrip() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_point; };
                    /**
                     * @brief Get the Points Count object
                     *
                     * @return int
                     */
                    inline int GetPointsCount() const { return this->_pointsCount; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector object
                     *
                     * @param point
                     */
                    inline void SetVector(const Misc::Vector<2> point) { this->_point = point; };
                    /**
                     * @brief Set the Points Count object
                     *
                     * @param pointsCount
                     */
                    inline void SetPointsCount(const int pointsCount) { this->_pointsCount = pointsCount; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _point; /*! Misc::Vector<2> object */
                    int             _pointsCount; /*! Int object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };
        }
    }
}