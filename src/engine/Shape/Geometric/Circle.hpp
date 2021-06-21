/**
 * @file Circle.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Circle module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "ICircle.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Circle : public ICircle {
                public:
                    Circle(const int, const int, const float, const Misc::Colors&);
                    Circle();
                    Circle(const Circle &);
                    Circle& operator=(const Circle &);
                    /**
                     * @brief Destroy the Circle object
                     *
                     */
                    ~Circle() = default;

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
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
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
                    float        _radius; /*! float object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class CircleSector : public ICircle {
                public:
                    CircleSector(const Misc::Vector<2>, const float, const float, const float, const int, const Misc::Colors&);
                    CircleSector();
                    CircleSector(const CircleSector &);
                    CircleSector& operator=(const CircleSector &);
                    /**
                     * @brief Destroy the Circle Sector object
                     *
                     */
                    ~CircleSector() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Start Angle object
                     *
                     * @return float
                     */
                    inline float GetStartAngle() const { return this->_startAngle; };
                    /**
                     * @brief Get the End Angle object
                     *
                     * @return float
                     */
                    inline float GetEndAngle()   const { return this->_endAngle; };
                    /**
                     * @brief Get the Segments object
                     *
                     * @return int
                     */
                    inline int GetSegments() const { return this->_segments; };
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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Start Angle object
                     *
                     * @param startAngle
                     */
                    inline void SetStartAngle(const float startAngle) { this->_startAngle = startAngle; };
                    /**
                     * @brief Set the End Angle object
                     *
                     * @param endAngle
                     */
                    inline void SetEndAngle(const float endAngle) { this->_endAngle = endAngle; };
                    /**
                     * @brief Set the Segments object
                     *
                     * @param segments
                     */
                    inline void SetSegments(const int segments) { this->_segments = segments; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object */
                    float           _radius; /*! float object */
                    float           _startAngle; /*! float object */
                    float           _endAngle; /*! float object */
                    int             _segments; /*! int object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class CircleSectorLines : public ICircle {
                public:
                    CircleSectorLines(const Misc::Vector<2>, const float, const float, const float, const int, const Misc::Colors&);
                    CircleSectorLines();
                    CircleSectorLines(const CircleSectorLines &);
                    CircleSectorLines& operator=(const CircleSectorLines &);
                    /**
                     * @brief Destroy the Circle Sector Lines object
                     *
                     */
                    ~CircleSectorLines() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Start Angle object
                     *
                     * @return float
                     */
                    inline float GetStartAngle() const { return this->_startAngle; };
                    /**
                     * @brief Get the End Angle object
                     *
                     * @return float
                     */
                    inline float GetEndAngle() const { return this->_endAngle; };
                    /**
                     * @brief Get the Segments object
                     *
                     * @return int
                     */
                    inline int GetSegments() const { return this->_segments; };
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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Start Angle object
                     *
                     * @param startAngle
                     */
                    inline void SetStartAngle(const float startAngle) { this->_startAngle = startAngle; };
                    /**
                     * @brief Set the End Angle object
                     *
                     * @param endAngle
                     */
                    inline void SetEndAngle(const float endAngle) { this->_endAngle = endAngle; };
                    /**
                     * @brief Set the Segments object
                     *
                     * @param segments
                     */
                    inline void SetSegments(const int segments) { this->_segments = segments; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object */
                    float           _radius; /*! float object */
                    float           _startAngle; /*! float object */
                    float           _endAngle; /*! float object */
                    int             _segments; /*! int object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class CircleGradient : public ICircle {
                public:
                    CircleGradient(const int, const int, const float, const Misc::Colors&, const Misc::Colors&);
                    CircleGradient();
                    CircleGradient(const CircleGradient &);
                    CircleGradient& operator=(const CircleGradient &);
                    /**
                     * @brief Destroy the Circle Gradient object
                     *
                     */
                    ~CircleGradient() = default;

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
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius()  const { return this->_radius; }
                    /**
                     * @brief Get the Colors 1 object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors1() const { return this->_colors1; };
                    /**
                     * @brief Get the Colors 2 object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors2() const { return this->_colors2; };

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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Colors 1 object
                     *
                     * @param colors1
                     */
                    inline void SetColors1(const Misc::Colors colors1) { this->_colors1 = colors1; };
                    /**
                     * @brief Set the Colors 2 object
                     *
                     * @param colors2
                     */
                    inline void SetColors2(const Misc::Colors colors2) { this->_colors2 = colors2; };

                    void DrawShape();
                private:
                    int          _centerX; /*! int object */
                    int          _centerY; /*! int object */
                    float        _radius; /*! float object */
                    Misc::Colors _colors1; /*! Misc::Colors object */
                    Misc::Colors _colors2; /*! Misc::Colors object */
            };

            class CircleV : public ICircle {
                public:
                    CircleV(const Misc::Vector<2>, const float, const Misc::Colors&);
                    CircleV();
                    CircleV(const CircleV &);
                    CircleV& operator=(const CircleV &);
                    /**
                     * @brief Destroy the Circle V object
                     *
                     */
                    ~CircleV() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2>  _center; /*! Misc::Vector<2> object */
                    float            _radius; /*! float object */
                    Misc::Colors     _colors; /*! Misc::Colors object */
            };

            class CircleLines : public ICircle {
                public:
                    CircleLines(const int, const int, const float, const Misc::Colors&);
                    CircleLines();
                    CircleLines(const CircleLines &);
                    CircleLines& operator=(const CircleLines &);
                    /**
                     * @brief Destroy the Circle Lines object
                     *
                     */
                    ~CircleLines() = default;

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
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
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
                     * @brief Set the Radius object
                     *
                     * @param radius
                     */
                    inline void SetRadius(const float radius) { this->_radius = radius; };
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
                    float        _radius; /*! float object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };
        }
    }
}