/**
 * @file Rectangle.cpp
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

#include "Rectangle.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle:: Rectangle object
 *
 * @param posX
 * @param posY
 * @param width
 * @param height
 * @param values
 */
Indie::Raylib::Shape::Rectangle::Rectangle(const int posX, const int posY, const int width, const int height, const Misc::Colors& values) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled rectangle
 *
 */
void Indie::Raylib::Shape::Rectangle::DrawShape() {
    ::DrawRectangle(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle V:: Rectangle V object
 *
 * @param position
 * @param size
 * @param values
 */
Indie::Raylib::Shape::RectangleV::RectangleV(const Misc::Vector<2> position, const Misc::Vector<2> size, const Misc::Colors& values) {
    this->_position = position;
    this->_size = size;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled rectangle (Vector version)
 *
 */
void Indie::Raylib::Shape::RectangleV::DrawShape() {
    ::DrawRectangleV(
        ::Vector2{ this->_position.getX(), this->_position.getY() },
        ::Vector2{ this->_size.getX(), this->_size.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Rec:: Rectangle Rec object
 *
 * @param rectangle
 * @param values
 */
Indie::Raylib::Shape::RectangleRec::RectangleRec(const Misc::Rectangle rectangle, const Misc::Colors& values) {
    this->_rectangle = rectangle;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled rectangle
 *
 */
void Indie::Raylib::Shape::RectangleRec::DrawShape() {
    ::DrawRectangleRec(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Pro:: Rectangle Pro object
 *
 * @param rectangle
 * @param origin
 * @param rotation
 * @param values
 */
Indie::Raylib::Shape::RectanglePro::RectanglePro(const Misc::Rectangle rectangle, const Misc::Vector<2> origin, float rotation, const Misc::Colors& values) {
    this->_rectangle = rectangle;
    this->_origin = origin;
    this->_rotation = rotation;
    this->_colors = values;
}

/**
 * @brief Draw a color-filled rectangle with pro parameters
 *
 */
void Indie::Raylib::Shape::RectanglePro::DrawShape() {
    ::DrawRectanglePro(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Vector2{ this->_origin.getX(), this->_origin.getY() },
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Gradient V:: Rectangle Gradient V object
 *
 * @param posX
 * @param posY
 * @param width
 * @param height
 * @param values1
 * @param values2
 */
Indie::Raylib::Shape::RectangleGradientV::RectangleGradientV(const int posX, const int posY, const int width, const int height, const Misc::Colors& values1, const Misc::Colors& values2) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

/**
 * @brief Draw a vertical-gradient-filled rectangle
 *
 */
void Indie::Raylib::Shape::RectangleGradientV::DrawShape() {
    ::DrawRectangleGradientV(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color{ this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Gradient H:: Rectangle Gradient H object
 *
 * @param posX
 * @param posY
 * @param width
 * @param height
 * @param values1
 * @param values2
 */
Indie::Raylib::Shape::RectangleGradientH::RectangleGradientH(const int posX, const int posY, const int width, const int height, const Misc::Colors& values1, const Misc::Colors& values2) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = values1;
    this->_colors2 = values2;
}

/**
 * @brief Draw a horizontal-gradient-filled rectangle
 *
 */
void Indie::Raylib::Shape::RectangleGradientH::DrawShape() {
    ::DrawRectangleGradientH(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color{ this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Gradient Ex:: Rectangle Gradient Ex object
 *
 * @param rectangle
 * @param values1
 * @param values2
 * @param values3
 * @param values4
 */
Indie::Raylib::Shape::RectangleGradientEx::RectangleGradientEx(const Misc::Rectangle rectangle, const Misc::Colors& values1, const Misc::Colors& values2, const Misc::Colors& values3, const Misc::Colors& values4) {
    this->_rectangle = rectangle;
    this->_colors1 = values1;
    this->_colors2 = values2;
    this->_colors3 = values3;
    this->_colors4 = values4;
}

/**
 * @brief Draw a gradient-filled rectangle with custom vertex colors
 *
 */
void Indie::Raylib::Shape::RectangleGradientEx::DrawShape() {
    ::DrawRectangleGradientEx(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        ::Color{ this->_colors1.getR(), this->_colors1.getG(), this->_colors1.getB(), this->_colors1.getA() },
        ::Color{ this->_colors2.getR(), this->_colors2.getG(), this->_colors2.getB(), this->_colors2.getA() },
        ::Color{ this->_colors3.getR(), this->_colors3.getG(), this->_colors3.getB(), this->_colors3.getA() },
        ::Color{ this->_colors4.getR(), this->_colors4.getG(), this->_colors4.getB(), this->_colors4.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Lines:: Rectangle Lines object
 *
 * @param posX
 * @param posY
 * @param width
 * @param height
 * @param values
 */
Indie::Raylib::Shape::RectangleLines::RectangleLines(int posX, int posY, int width, int height, const Misc::Colors& values) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = values;
}

/**
 * @brief Draw rectangle outline
 *
 */
void Indie::Raylib::Shape::RectangleLines::DrawShape() {
    ::DrawRectangleLines(
        this->_posX,
        this->_posY,
        this->_width,
        this->_height,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Lines Ex:: Rectangle Lines Ex object
 *
 * @param rectangle
 * @param linethick
 * @param values
 */
Indie::Raylib::Shape::RectangleLinesEx::RectangleLinesEx(const Misc::Rectangle rectangle, const int linethick, const Misc::Colors& values) {
    this->_rectangle = rectangle;
    this->_linethick = linethick;
    this->_colors = values;
}

/**
 * @brief Draw rectangle outline with extended parameters
 *
 */
void Indie::Raylib::Shape::RectangleLinesEx::DrawShape() {
    ::DrawRectangleLinesEx(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Rounded:: Rectangle Rounded object
 *
 * @param rectangle
 * @param roundness
 * @param segments
 * @param values
 */
Indie::Raylib::Shape::RectangleRounded::RectangleRounded(const Misc::Rectangle rectangle, const float roundness, const int segments, const Misc::Colors& values) {
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_colors = values;
}

/**
 * @brief Draw rectangle with rounded edges
 *
 */
void Indie::Raylib::Shape::RectangleRounded::DrawShape() {
    ::DrawRectangleRounded(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_roundness,
        this->_segments,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Rectangle Rounded Lines:: Rectangle Rounded Lines object
 *
 * @param rectangle
 * @param roundness
 * @param segments
 * @param linethick
 * @param values
 */
Indie::Raylib::Shape::RectangleRoundedLines::RectangleRoundedLines(const Misc::Rectangle rectangle, const float roundness, const int segments, const int linethick, const Misc::Colors& values) {
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_linethick = linethick;
    this->_colors = values;
}

/**
 * @brief raw rectangle with rounded edges outline
 *
 */
void Indie::Raylib::Shape::RectangleRoundedLines::DrawShape() {
    ::DrawRectangleRoundedLines(
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() },
        this->_roundness,
        this->_segments,
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}