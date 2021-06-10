/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Polygon
*/

#include "Polygon.hpp"

Indie::Raylib::Shape::Polygon::Polygon(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = values;
}

void Indie::Raylib::Shape::Polygon::DrawShape() {
    ::DrawPoly(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Indie::Raylib::Shape::PolygonLines::PolygonLines(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_colors = values;
}

void Indie::Raylib::Shape::PolygonLines::DrawShape() {
    ::DrawPolyLines(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}

Indie::Raylib::Shape::PolygonLinesEx::PolygonLinesEx(const Misc::Vector<2> center, const int sides, const float radius, const float rotation, const float linethick, const Misc::Colors& values) {
    this->_center = center;
    this->_sides = sides;
    this->_radius = radius;
    this->_rotation = rotation;
    this->_linethick = linethick;
    this->_colors = values;
}

void Indie::Raylib::Shape::PolygonLinesEx::DrawShape() {
    ::DrawPolyLinesEx(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_sides,
        this->_radius,
        this->_rotation,
        this->_linethick,
        ::Color { this->_colors.getR(), this->_colors.getG(), this->_colors.getB(), this->_colors.getA() }
    );
}



