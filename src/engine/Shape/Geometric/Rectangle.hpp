/**
 * @file Rectangle.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of all Shape/Rectangle module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "IRectangle.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class Rectangle : public IRectangle {
                public:
                    Rectangle(const int, const int, const int, const int, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle object
                     *
                     */
                    ~Rectangle() = default;

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
                     * @brief Get the Width object
                     *
                     * @return int
                     */
                    inline int GetWidth() const { return this->_width; };
                    /**
                     * @brief Get the Height object
                     *
                     * @return int
                     */
                    inline int GetHeight() const { return this->_height; };
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
                     * @brief Set the Width object
                     *
                     * @param width
                     */
                    inline void SetWidth(const int width) { this->_width = width; };
                    /**
                     * @brief Set the Height object
                     *
                     * @param height
                     */
                    inline void SetHeight(const int height) { this->_height = height; };
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
                    int          _width; /*! int object */
                    int          _height; /*! int object */
                    Misc::Colors _colors; /*! Misc::Colors object*/
            };

            class RectangleV : public IRectangle {
                public:
                    RectangleV(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle V object
                     *
                     */
                    ~RectangleV() = default;

                    /**
                     * @brief Get the Vector Position object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorPosition() const { return this->_position; };
                    /**
                     * @brief Get the Vector Size object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorSize() const { return this->_size; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Vector Position object
                     *
                     * @param position
                     */
                    inline void SetVectorPosition(const Misc::Vector<2> position) { this->_position = position; };
                    /**
                     * @brief Set the Vector Size object
                     *
                     * @param size
                     */
                    inline void SetVectorSize(const Misc::Vector<2> size) { this->_size = size; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Vector<2> _position; /*! Misc::Vector<2> object */
                    Misc::Vector<2> _size; /*! Misc::Vector<2> object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class RectangleRec : public IRectangle {
                public:
                    RectangleRec(const Misc::Rectangle, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Rec object
                     *
                     */
                    ~RectangleRec() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object */
                    Misc::Colors    _colors; /*! Misc::Colors object */
            };

            class RectanglePro : public IRectangle {
                public:
                    RectanglePro(const Misc::Rectangle, const Misc::Vector<2>, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Pro object
                     *
                     */
                    ~RectanglePro() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
                    /**
                     * @brief Get the Vector Origin object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorOrigin() const { return this->_origin; };
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
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
                    /**
                     * @brief Set the Vector Origin object
                     *
                     * @param origin
                     */
                    inline void SetVectorOrigin(const Misc::Vector<2> origin) { this->_origin = origin; };
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
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object */
                    Misc::Vector<2> _origin;  /*! Misc::Vector<2> object */
                    float           _rotation;  /*! float object */
                    Misc::Colors    _colors;  /*! Misc::Colors object*/
            };

            class RectangleGradientV : public IRectangle {
                public:
                    RectangleGradientV(const int, const int, const int, const int, const Misc::Colors&, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Gradient V object
                     *
                     */
                    ~RectangleGradientV() = default;

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
                     * @brief Get the Width object
                     *
                     * @return int
                     */
                    inline int GetWidth() const { return this->_width; };
                    /**
                     * @brief Get the Height object
                     *
                     * @return int
                     */
                    inline int GetHeight()  const { return this->_height; };
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
                     * @brief Set the Width object
                     *
                     * @param width
                     */
                    inline void SetWidth(const int width) { this->_width = width; };
                    /**
                     * @brief Set the Height object
                     *
                     * @param height
                     */
                    inline void SetHeight(const int height) { this->_height = height; };
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
                    int          _posX;  /*! int object */
                    int          _posY;  /*! int object */
                    int          _width;  /*! int object*/
                    int          _height;  /*! int object*/
                    Misc::Colors _colors1;  /*! Misc::Colors object */
                    Misc::Colors _colors2;  /*! Misc::Colors object */
            };

            class RectangleGradientH : public IRectangle {
                public:
                    RectangleGradientH(const int, const int, const int, const int, const Misc::Colors&, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Gradient H object
                     *
                     */
                    ~RectangleGradientH() = default;

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
                     * @brief Get the Width object
                     *
                     * @return int
                     */
                    inline int GetWidth() const { return this->_width; };
                    /**
                     * @brief Get the Height object
                     *
                     * @return int
                     */
                    inline int GetHeight()  const { return this->_height; };
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
                     * @brief Set the Width object
                     *
                     * @param width
                     */
                    inline void SetWidth(const int width) { this->_width = width; };
                    /**
                     * @brief Set the Height object
                     *
                     * @param height
                     */
                    inline void SetHeight(const int height) { this->_height = height; };
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
                    int          _posX;  /*! int object*/
                    int          _posY;  /*! int object*/
                    int          _width; /*! int object*/
                    int          _height; /*! int object*/
                    Misc::Colors _colors1; /*! Misc::Colors object*/
                    Misc::Colors _colors2; /*! Misc::Colors object*/
            };

            class RectangleGradientEx : public IRectangle {
                public:
                    RectangleGradientEx(const Misc::Rectangle, const Misc::Colors&, const Misc::Colors&, const Misc::Colors&, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Gradient Ex object
                     *
                     */
                    ~RectangleGradientEx() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
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
                     * @brief Get the Colors 3 object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors3() const { return this->_colors3; };
                    /**
                     * @brief Get the Colors 4 object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors4() const { return this->_colors4; };

                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
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
                    /**
                     * @brief Set the Colors 3 object
                     *
                     * @param colors3
                     */
                    inline void SetColors3(const Misc::Colors colors3) { this->_colors3 = colors3; };
                    /**
                     * @brief Set the Colors 4 object
                     *
                     * @param colors4
                     */
                    inline void SetColors4(const Misc::Colors colors4) { this->_colors4 = colors4; };

                    void DrawShape();
                private:
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle */
                    Misc::Colors    _colors1; /*! Misc::Colors object*/
                    Misc::Colors    _colors2; /*! Misc::Colors object*/
                    Misc::Colors    _colors3; /*! Misc::Colors object*/
                    Misc::Colors    _colors4; /*! Misc::Colors object*/
            };

            class RectangleLines : public IRectangle {
                public:
                    RectangleLines(const int, const int, const int, const int, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Lines object
                     *
                     */
                    ~RectangleLines() = default;

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
                     * @brief Get the Width object
                     *
                     * @return int
                     */
                    inline int GetWidth() const { return this->_width; };
                    /**
                     * @brief Get the Height object
                     *
                     * @return int
                     */
                    inline int GetHeight() const { return this->_height; };
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
                     * @brief Set the Width object
                     *
                     * @param width
                     */
                    inline void SetWidth(const int width) { this->_width = width; };
                    /**
                     * @brief Set the Height object
                     *
                     * @param height
                     */
                    inline void SetHeight(const int height) { this->_height = height; };
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
                    int          _width; /*! int object */
                    int          _height; /*! int object */
                    Misc::Colors _colors; /*! Misc::Colors object */
            };

            class RectangleLinesEx : public IRectangle {
                public:
                    RectangleLinesEx(const Misc::Rectangle, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Lines Ex object
                     *
                     */
                    ~RectangleLinesEx() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
                    /**
                     * @brief Get the Thickness object
                     *
                     * @return int
                     */
                    inline float GetThickness() const { return this->_linethick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
                    /**
                     * @brief Set the Thickness object
                     *
                     * @param thickness
                     */
                    inline void SetThickness(const float thickness) { this->_linethick = thickness; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object*/
                    float             _linethick; /*! int object*/
                    Misc::Colors    _colors; /*! Misc::Colors object*/
            };

            class RectangleRounded : public IRectangle {
                public:
                    RectangleRounded(const Misc::Rectangle, const float, const int, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Rounded object
                     *
                     */
                    ~RectangleRounded() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
                    /**
                     * @brief Get the Roundness object
                     *
                     * @return float
                     */
                    inline float GetRoundness() const { return this->_roundness; };
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
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
                    /**
                     * @brief Set the Roundness object
                     *
                     * @param roundness
                     */
                    inline void SetRoundness(const float roundness) { this->_roundness = roundness; };
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
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object*/
                    float           _roundness; /*! float object*/
                    int             _segments; /*! int object*/
                    Misc::Colors    _colors; /*! Misc::Colors object*/
            };

            class RectangleRoundedLines : public IRectangle {
                public:
                    RectangleRoundedLines(const Misc::Rectangle, const float, const int, const float, const Misc::Colors&);
                    /**
                     * @brief Destroy the Rectangle Rounded Lines object
                     *
                     */
                    ~RectangleRoundedLines() = default;

                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };
                    /**
                     * @brief Get the Roundness object
                     *
                     * @return float
                     */
                    inline float GetRoundness() const { return this->_roundness; };
                    /**
                     * @brief Get the Segments object
                     *
                     * @return int
                     */
                    inline int GetSegments()  const { return this->_segments; };
                    /**
                     * @brief Get the Thickness object
                     *
                     * @return int
                     */
                    inline float GetThickness() const { return this->_linethick; };
                    /**
                     * @brief Get the Colors object
                     *
                     * @return Misc::Colors
                     */
                    inline Misc::Colors GetColors() const { return this->_colors; };

                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };
                    /**
                     * @brief Set the Roundness object
                     *
                     * @param roundness
                     */
                    inline void SetRoundness(const float roundness) { this->_roundness = roundness; };
                    /**
                     * @brief Set the Segments object
                     *
                     * @param segments
                     */
                    inline void SetSegments(const int segments) { this->_segments = segments; };
                    /**
                     * @brief Set the Thickness object
                     *
                     * @param thickness
                     */
                    inline void SetThickness(const float thickness) { this->_linethick = thickness; };
                    /**
                     * @brief Set the Colors object
                     *
                     * @param colors
                     */
                    inline void SetColors(const Misc::Colors colors) { this->_colors = colors; };

                    void DrawShape();
                private:
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object*/
                    float           _roundness; /*! float object*/
                    int             _segments; /*! int object*/
                    float             _linethick; /*! float object*/
                    Misc::Colors    _colors; /*! Misc::Colors object*/
            };
        }
    }
}