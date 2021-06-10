/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Triangle
*/

#include "Triangle.hpp"

Indie::Raylib::Shape::Triangle::Triangle(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& values) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = values;
}

void Indie::Raylib::Shape::Triangle::DrawShape() {
    ::DrawTriangle(
        ::Vector2{ this->_point1.getX(), this->_point1.getY() },
        ::Vector2{ this->_point2.getX(), this->_point2.getY() },
        ::Vector2{ this->_point3.getX(), this->_point3.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Indie::Raylib::Shape::TriangleLines::TriangleLines(const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3, const Misc::Colors& values) {
    this->_point1 = p1;
    this->_point2 = p2;
    this->_point3 = p3;
    this->_colors = values;
}

void Indie::Raylib::Shape::TriangleLines::DrawShape() {
    ::DrawTriangleLines(
        ::Vector2{ this->_point1.getX(), this->_point1.getY() },
        ::Vector2{ this->_point2.getX(), this->_point2.getY() },
        ::Vector2{ this->_point3.getX(), this->_point3.getY() },
        ::Color{ this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Indie::Raylib::Shape::TriangleFan::TriangleFan(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& values) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = values;
}

void Indie::Raylib::Shape::TriangleFan::DrawShape() {
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleFan(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Indie::Raylib::Shape::TriangleStrip::TriangleStrip(const Misc::Vector<2> point, const int pointsCount, const Misc::Colors& values) {
    this->_point = point;
    this->_pointsCount = pointsCount;
    this->_colors = values;
}

void Indie::Raylib::Shape::TriangleStrip::DrawShape() {
    ::Vector2 points = { this->_point.getX(), this->_point.getY() };

    ::DrawTriangleStrip(
        &points,
        this->_pointsCount,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}