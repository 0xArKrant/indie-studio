/**
 * @file Ring.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Ring module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IRing.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Ring : public IRing {
                public:
                    Ring(const Misc::Vector<2>, const float, const float, const float, const float, const int, const Misc::Colors&);
                    Ring();
                    Ring(const Ring &);
                    Ring& operator=(const Ring &);
                    /**
                     * @brief Destroy the Ring object
                     *
                     */
                    ~Ring() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Inner Radius object
                     *
                     * @return float
                     */
                    inline float GetInnerRadius() const { return this->_innerRadius; };
                    /**
                     * @brief Get the Outer Radius object
                     *
                     * @return float
                     */
                    inline float GetOuterRadius() const { return this->_outerRadius; };
                    /**
                     * @brief Get the Start Angle object
                     *
                     * @return float
                     */
                    inline float GetStartAngle()  const { return this->_startAngle; };
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
                     * @brief Set the Inner Radius object
                     *
                     * @param innerRadius
                     */
                    inline void SetInnerRadius(const float innerRadius) { this->_innerRadius = innerRadius; };
                    /**
                     * @brief Set the Outer Radius object
                     *
                     * @param outerRadius
                     */
                    inline void SetOuterRadius(const float outerRadius) { this->_outerRadius = outerRadius; };
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
                    float           _innerRadius; /*! Float object */
                    float           _outerRadius; /*! Float object */
                    float           _startAngle; /*! Float object */
                    float           _endAngle; /*! Float object */
                    int             _segments; /*! Int object */
                    Misc::Colors    _colors; /*! Misc::Colors */
            };

            class RingLines : public IRing {
                public:
                    RingLines(const Misc::Vector<2>, const float, const float, const float, const float, const int, const Misc::Colors&);
                    RingLines();
                    RingLines(const RingLines &);
                    RingLines& operator=(const RingLines &);
                    /**
                     * @brief Destroy the Ring Lines object
                     *
                     */
                    ~RingLines() = default;

                    /**
                     * @brief Get the Vector object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVector() const { return this->_center; };
                    /**
                     * @brief Get the Inner Radius object
                     *
                     * @return float
                     */
                    inline float GetInnerRadius() const { return this->_innerRadius; };
                    /**
                     * @brief Get the Outer Radius object
                     *
                     * @return float
                     */
                    inline float GetOuterRadius() const { return this->_outerRadius; };
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
                     * @brief Set the Inner Radius object
                     *
                     * @param innerRadius
                     */
                    inline void SetInnerRadius(const float innerRadius) { this->_innerRadius = innerRadius; };
                    /**
                     * @brief Set the Outer Radius object
                     *
                     * @param outerRadius
                     */
                    inline void SetOuterRadius(const float outerRadius) { this->_outerRadius = outerRadius; };
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
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object*/
                    float           _innerRadius; /*! Float object */
                    float           _outerRadius; /*! Float object */
                    float           _startAngle; /*! Float object */
                    float           _endAngle; /*! Float object */
                    int             _segments; /*! int object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };
        }
    }
}