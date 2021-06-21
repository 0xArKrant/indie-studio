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
 * @param colors
 */
Indie::Raylib::Shape::Rectangle::Rectangle(const int posX, const int posY, const int width, const int height, const Misc::Colors& colors) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = colors;
}

Indie::Raylib::Shape::Rectangle::Rectangle()
{
    this->_posX = 0;
    this->_posY = 0;
    this->_width = 0;
    this->_height = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::Rectangle::Rectangle(const Rectangle &cpy)
{
    this->_posX = cpy._posX;
    this->_posY = cpy._posY;
    this->_width = cpy._width;
    this->_height = cpy._height;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::Rectangle& Indie::Raylib::Shape::Rectangle::operator=(const Rectangle &other)
{
    this->_posX = other.GetPosX();
    this->_posY = other.GetPosY();
    this->_width = other.GetWidth();
    this->_height = other.GetHeight();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleV::RectangleV(const Misc::Vector<2> position, const Misc::Vector<2> size, const Misc::Colors& colors) {
    this->_position = position;
    this->_size = size;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleV::RectangleV()
{
    this->_position = {0.f, 0.f};
    this->_size = {0.f, 0.f};
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleV::RectangleV(const RectangleV &cpy)
{
    this->_position = cpy._position;
    this->_size = cpy._size;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleV& Indie::Raylib::Shape::RectangleV::operator=(const RectangleV &other)
{
    this->_position = other.GetPosition();
    this->_size = other.GetSize();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleRec::RectangleRec(const Misc::Rectangle rectangle, const Misc::Colors& colors) {
    this->_rectangle = rectangle;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleRec::RectangleRec()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleRec::RectangleRec(const RectangleRec &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleRec& Indie::Raylib::Shape::RectangleRec::operator=(const RectangleRec &other)
{
    this->_rectangle = other.GetRectangle();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectanglePro::RectanglePro(const Misc::Rectangle rectangle, const Misc::Vector<2> origin, float rotation, const Misc::Colors& colors) {
    this->_rectangle = rectangle;
    this->_origin = origin;
    this->_rotation = rotation;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectanglePro::RectanglePro()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_origin = {0.f, 0.f};
    this->_rotation = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectanglePro::RectanglePro(const RectanglePro &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_origin = cpy._origin;
    this->_rotation = cpy._rotation;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectanglePro& Indie::Raylib::Shape::RectanglePro::operator=(const RectanglePro &other)
{
    this->_rectangle = other.GetRectangle();
    this->_origin = other.GetOrigin();
    this->_rotation = other.GetRotation();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors1
 * @param colors2
 */
Indie::Raylib::Shape::RectangleGradientV::RectangleGradientV(const int posX, const int posY, const int width, const int height, const Misc::Colors& colors1, const Misc::Colors& colors2) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = colors1;
    this->_colors2 = colors2;
}

Indie::Raylib::Shape::RectangleGradientV::RectangleGradientV()
{
    this->_posX = 0;
    this->_posY = 0;
    this->_width = 0;
    this->_height = 0;
    this->_colors1 = {0, 0, 0, 0};
    this->_colors2 = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleGradientV::RectangleGradientV(const RectangleGradientV &cpy)
{
    this->_posX = cpy._posX;
    this->_posY = cpy._posY;
    this->_width = cpy._width;
    this->_height = cpy._height;
    this->_colors1 = cpy._colors1;
    this->_colors2 = cpy._colors2;
}

Indie::Raylib::Shape::RectangleGradientV& Indie::Raylib::Shape::RectangleGradientV::operator=(const RectangleGradientV &other)
{
    this->_posX = other.GetPosX();
    this->_posY = other.GetPosY();
    this->_width = other.GetWidth();
    this->_height = other.GetHeight();
    this->_colors1 = other.GetColors1();
    this->_colors2 = other.GetColors2();
    return (*this);
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
 * @param colors1
 * @param colors2
 */
Indie::Raylib::Shape::RectangleGradientH::RectangleGradientH(const int posX, const int posY, const int width, const int height, const Misc::Colors& colors1, const Misc::Colors& colors2) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors1 = colors1;
    this->_colors2 = colors2;
}

Indie::Raylib::Shape::RectangleGradientH::RectangleGradientH()
{
    this->_posX = 0;
    this->_posY = 0;
    this->_width = 0;
    this->_height = 0;
    this->_colors1 = {0, 0, 0, 0};
    this->_colors2 = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleGradientH::RectangleGradientH(const RectangleGradientH &cpy)
{
    this->_posX = cpy._posX;
    this->_posY = cpy._posY;
    this->_width = cpy._width;
    this->_height = cpy._height;
    this->_colors1 = cpy._colors1;
    this->_colors2 = cpy._colors2;
}

Indie::Raylib::Shape::RectangleGradientH& Indie::Raylib::Shape::RectangleGradientH::operator=(const RectangleGradientH &other)
{
    this->_posX = other.GetPosX();
    this->_posY = other.GetPosY();
    this->_width = other.GetWidth();
    this->_height = other.GetHeight();
    this->_colors1 = other.GetColors1();
    this->_colors2 = other.GetColors2();
    return (*this);
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
 * @param colors1
 * @param colors2
 * @param colors3
 * @param colors4
 */
Indie::Raylib::Shape::RectangleGradientEx::RectangleGradientEx(const Misc::Rectangle rectangle, const Misc::Colors& colors1, const Misc::Colors& colors2, const Misc::Colors& colors3, const Misc::Colors& colors4) {
    this->_rectangle = rectangle;
    this->_colors1 = colors1;
    this->_colors2 = colors2;
    this->_colors3 = colors3;
    this->_colors4 = colors4;
}

Indie::Raylib::Shape::RectangleGradientEx::RectangleGradientEx()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_colors1 = {0, 0, 0, 0};
    this->_colors2 = {0, 0, 0, 0};
    this->_colors3 = {0, 0, 0, 0};
    this->_colors4 = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleGradientEx::RectangleGradientEx(const RectangleGradientEx &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_colors1 = cpy._colors1;
    this->_colors2 = cpy._colors2;
    this->_colors3 = cpy._colors3;
    this->_colors4 = cpy._colors4;
}

Indie::Raylib::Shape::RectangleGradientEx& Indie::Raylib::Shape::RectangleGradientEx::operator=(const RectangleGradientEx &other)
{
    this->_rectangle = other.GetRectangle();
    this->_colors1 = other.GetColors1();
    this->_colors2 = other.GetColors2();
    this->_colors3 = other.GetColors3();
    this->_colors4 = other.GetColors4();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleLines::RectangleLines(int posX, int posY, int width, int height, const Misc::Colors& colors) {
    this->_posX = posX;
    this->_posY = posY;
    this->_width = width;
    this->_height = height;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleLines::RectangleLines()
{
    this->_posX = 0;
    this->_posY = 0;
    this->_width = 0;
    this->_height = 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleLines::RectangleLines(const RectangleLines &cpy)
{
    this->_posX = cpy._posX;
    this->_posY = cpy._posY;
    this->_width = cpy._width;
    this->_height = cpy._height;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleLines& Indie::Raylib::Shape::RectangleLines::operator=(const RectangleLines &other)
{
    this->_posX = other.GetPosX();
    this->_posY = other.GetPosY();
    this->_width = other.GetWidth();
    this->_height = other.GetHeight();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleLinesEx::RectangleLinesEx(const Misc::Rectangle rectangle, const float linethick, const Misc::Colors& colors) {
    this->_rectangle = rectangle;
    this->_linethick = linethick;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleLinesEx::RectangleLinesEx()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_linethick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleLinesEx::RectangleLinesEx(const RectangleLinesEx &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_linethick = cpy._linethick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleLinesEx& Indie::Raylib::Shape::RectangleLinesEx::operator=(const RectangleLinesEx &other)
{
    this->_rectangle = other.GetRectangle();
    this->_linethick = other.GetThickness();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleRounded::RectangleRounded(const Misc::Rectangle rectangle, const float roundness, const int segments, const Misc::Colors& colors) {
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleRounded::RectangleRounded()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_roundness = 0.f;
    this->_segments= 0;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleRounded::RectangleRounded(const RectangleRounded &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_roundness = cpy._roundness;
    this->_segments = cpy._segments;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleRounded& Indie::Raylib::Shape::RectangleRounded::operator=(const RectangleRounded &other)
{
    this->_rectangle = other.GetRectangle();
    this->_roundness = other.GetRoundness();
    this->_segments = other.GetSegments();
    this->_colors = other.GetColors();
    return (*this);
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
 * @param colors
 */
Indie::Raylib::Shape::RectangleRoundedLines::RectangleRoundedLines(const Misc::Rectangle rectangle, const float roundness, const int segments, const float linethick, const Misc::Colors& colors) {
    this->_rectangle = rectangle;
    this->_roundness = roundness;
    this->_segments = segments;
    this->_linethick = linethick;
    this->_colors = colors;
}

Indie::Raylib::Shape::RectangleRoundedLines::RectangleRoundedLines()
{
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_roundness = 0.f;
    this->_segments= 0;
    this->_linethick = 0.f;
    this->_colors = {0, 0, 0, 0};
}

Indie::Raylib::Shape::RectangleRoundedLines::RectangleRoundedLines(const RectangleRoundedLines &cpy)
{
    this->_rectangle = cpy._rectangle;
    this->_roundness = cpy._roundness;
    this->_segments = cpy._segments;
    this->_linethick = cpy._linethick;
    this->_colors = cpy._colors;
}

Indie::Raylib::Shape::RectangleRoundedLines& Indie::Raylib::Shape::RectangleRoundedLines::operator=(const RectangleRoundedLines &other)
{
    this->_rectangle = other.GetRectangle();
    this->_roundness = other.GetRoundness();
    this->_segments = other.GetSegments();
    this->_linethick = other.GetThickness();
    this->_colors = other.GetColors();
    return (*this);
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