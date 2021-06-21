/**
 * @file Line.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Line module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "ILine.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Line : public ILine {
                public:
                    Line(const int, const int, const int, const int, const Misc::Colors&);
                    Line();
                    Line(const Line &);
                    Line& operator=(const Line &);
                    /**
                     * @brief Destroy the Line object
                     *
                     */
                    ~Line() = default;

                    /**
                     * @brief Get the Start Pos X object
                     *
                     * @return int
                     */
                    inline int GetStartPosX() const { return this->_startPosX; };
                    /**
                     * @brief Get the Start Pos Y object
                     *
                     * @return int
                     */
                    inline int GetStartPosY() const { return this->_startPosY; };
                    /**
                     * @brief Get the End Pos X object
                     *
                     * @return int
                     */
                    inline int GetEndPosX() const { return this->_endPosX; };
                    /**
                     * @brief Get the End Pos Y object
                     *
                     * @return int
                     */
                    inline int GetEndPosY() const { return this->_endPosY; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Start Pos X object
                     *
                     * @param startPosX
                     */
                    inline void SetStartPosX(const int startPosX) { this->_startPosX = startPosX; };
                    /**
                     * @brief Set the Start Pos Y object
                     *
                     * @param startPosY
                     */
                    inline void SetStartPosY(const int startPosY) { this->_startPosY = startPosY; };
                    /**
                     * @brief Set the End Pos X object
                     *
                     * @param endPosX
                     */
                    inline void SetEndPosX(const int endPosX) { this->_endPosX = endPosX; };
                    /**
                     * @brief Set the End Pos Y object
                     *
                     * @param endPosY
                     */
                    inline void SetEndPosY(const int endPosY) { this->_endPosY = endPosY; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    int          _startPosX; /*! int object */
                    int          _startPosY; /*! int object */
                    int          _endPosX; /*! int object */
                    int          _endPosY; /*! int object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class LineV : public ILine {
                public:
                    LineV(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors&);
                    LineV();
                    LineV(const LineV &);
                    LineV& operator=(const LineV &);
                    /**
                     * @brief Destroy the Line V object
                     *
                     */
                    ~LineV() = default;

                    /**
                     * @brief Get the Vector Start Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
                    /**
                     * @brief Get the Vector End Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos() const { return this->_endPos; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector Start Pos X object
                     *
                     * @param startPosX
                     */
                    inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
                    /**
                     * @brief Set the Vector End Pos X object
                     *
                     * @param endPosX
                     */
                    inline void SetVectorEndPosX(const Misc::Vector<2> endPosX) { this->_endPos = endPosX; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _startPos; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _endPos; /*! Misc::Vector<2> object */
                    Misc::Colors    _colors; /* Misc::Colors object */
            };

            class LineEx : public ILine {
                public:
                    LineEx(const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors&);
                    LineEx();
                    LineEx(const LineEx &);
                    LineEx& operator=(const LineEx &);
                    /**
                     * @brief Destroy the Line Ex object
                     *
                     */
                    ~LineEx() = default;

                    /**
                     * @brief Get the Vector Start Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
                    /**
                     * @brief Get the Vector End Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos() const { return this->_endPos; };
                    /**
                     * @brief Get the Thickness object
                     *
                     * @return float
                     */
                    inline float GetThickness() const { return this->_thick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector Start Pos X object
                     *
                     * @param startPosX
                     */
                    inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
                    /**
                     * @brief Set the Vector End Pos X object
                     *
                     * @param endPosX
                     */
                    inline void SetVectorEndPosX(const Misc::Vector<2> endPosX) { this->_endPos = endPosX; };
                    /**
                     * @brief Set the Thickness object
                     *
                     * @param thickness
                     */
                    inline void SetThickness(const float thickness) { this->_thick = thickness; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _startPos;  /*! Misc::Vector<2> object */
                    Misc::Vector<2> _endPos; /*! Misc::Vector<2> object */
                    float           _thick; /*! float object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class LineBezier : public ILine {
                public:
                    LineBezier(const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors&);
                    LineBezier();
                    LineBezier(const LineBezier &);
                    LineBezier& operator=(const LineBezier &);
                    /**
                     * @brief Destroy the Line Bezier object
                     *
                     */
                    ~LineBezier() = default;

                    /**
                     * @brief Get the Vector Start Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
                    /**
                     * @brief Get the Vector End Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos() const { return this->_endPos; };
                    /**
                     * @brief Get the Thickness object
                     *
                     * @return float
                     */
                    inline float GetThickness() const { return this->_thick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector Start Pos X object
                     *
                     * @param startPosX
                     */
                    inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
                    /**
                     * @brief Set the Vector End Pos X object
                     *
                     * @param endPosX
                     */
                    inline void SetVectorEndPosX(const Misc::Vector<2> endPosX) { this->_endPos = endPosX; };
                    /**
                     * @brief Set the Thickness object
                     *
                     * @param thickness
                     */
                    inline void SetThickness(const float thickness) { this->_thick = thickness; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _startPos; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _endPos; /*! Misc::Vector<2> object */
                    float           _thick; /*! float object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class LineBezierQuad : public ILine {
                public:
                    LineBezierQuad(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const float, const Misc::Colors&);
                    LineBezierQuad();
                    LineBezierQuad(const LineBezierQuad &);
                    LineBezierQuad& operator=(const LineBezierQuad &);
                    /**
                     * @brief Destroy the Line Bezier Quad object
                     *
                     */
                    ~LineBezierQuad() = default;

                    /**
                     * @brief Get the Vector Start Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos() const { return this->_startPos; };
                    /**
                     * @brief Get the Vector End Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos() const { return this->_endPos; };
                    /**
                     * @brief Get the Vector Control Pos object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorControlPos() const { return this->_controlPos; };
                    /**
                     * @brief Get the Thickness object
                     *
                     * @return float
                     */
                    inline float GetThickness() const { return this->_thick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector Start Pos X object
                     *
                     * @param startPosX
                     */
                    inline void SetVectorStartPosX(const Misc::Vector<2> startPosX) { this->_startPos = startPosX; };
                    /**
                     * @brief Set the Vector End Pos X object
                     *
                     * @param endPosX
                     */
                    inline void SetVectorEndPosX(const Misc::Vector<2> endPosX) { this->_endPos = endPosX; };
                    /**
                     * @brief Set the Vector Control Pos object
                     *
                     * @param controlPos
                     */
                    inline void SetVectorControlPos(const Misc::Vector<2> controlPos) { this->_controlPos = controlPos; };
                    /**
                     * @brief Set the Thickness object
                     *
                     * @param thickness
                     */
                    inline void SetThickness(const float thickness) { this->_thick = thickness; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _startPos; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _endPos; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _controlPos; /*! Misc::Vector<2> object */
                    float           _thick; /*! float object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class LineStrip : public ILine {
                public:
                    LineStrip(Misc::Vector<2>, int, const Misc::Colors&);
                    LineStrip();
                    LineStrip(const LineStrip &);
                    LineStrip& operator=(const LineStrip &);
                    /**
                     * @brief Destroy the Line Strip object
                     *
                     */
                    ~LineStrip() = default;

                    /**
                     * @brief Get the Vector Points object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorPoints() const { return this->_points; };
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
                     * @brief Set the Vector Points object
                     *
                     * @param points
                     */
                    inline void SetVectorPoints(const Misc::Vector<2> points) { this->_points = points; };
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
                    Misc::Vector<2> _points; /*! Misc::Vector<2> object */
                    int             _pointsCount; /*! int object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };
        }
    }
}