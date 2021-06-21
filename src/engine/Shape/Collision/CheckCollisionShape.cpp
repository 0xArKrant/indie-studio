/**
 * @file CheckCollisionShape.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief  Encapsulation of the Shape/Collision module from raylib
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "CheckCollisionShape.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Recs:: Check Collision Recs object
 *
 * @param rectangle1
 * @param rectangle2
 */
Indie::Raylib::Shape::CheckCollisionRecs::CheckCollisionRecs(const Misc::Rectangle rectangle1, const Misc::Rectangle rectangle2) {
    this->_rectangle1 = rectangle1;
    this->_rectangle2 = rectangle2;
}

Indie::Raylib::Shape::CheckCollisionRecs::CheckCollisionRecs()
{
    this->_rectangle1 = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_rectangle2 = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
}

Indie::Raylib::Shape::CheckCollisionRecs::CheckCollisionRecs(const CheckCollisionRecs &cpy)
{
    this->_rectangle1 = cpy._rectangle1;
    this->_rectangle2 = cpy._rectangle2;
}

Indie::Raylib::Shape::CheckCollisionRecs& Indie::Raylib::Shape::CheckCollisionRecs::operator=(const CheckCollisionRecs &other)
{
    this->_rectangle1 = other.GetRectangle1();
    this->_rectangle1 = other.GetRectangle2();
    return (*this);
}

/**
 * @brief Check collision between two rectangles
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionRecs::CheckCollision() {
    return ::CheckCollisionRecs(
        ::Rectangle{ this->_rectangle1.getX(), this->_rectangle1.getY(), this->_rectangle1.getWidth(), this->_rectangle1.getHeight() },
        ::Rectangle{ this->_rectangle2.getX(), this->_rectangle2.getY(), this->_rectangle2.getWidth(), this->_rectangle2.getHeight() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Circles:: Check Collision Circles object
 *
 * @param center1
 * @param radius1
 * @param center2
 * @param radius2
 */
Indie::Raylib::Shape::CheckCollisionCircles::CheckCollisionCircles(const Misc::Vector<2> center1, const float radius1, const Misc::Vector<2> center2, const float radius2) {
    this->_center1 = center1;
    this->_radius1 = radius1;
    this->_center2 = center2;
    this->_radius2 = radius2;
}

Indie::Raylib::Shape::CheckCollisionCircles::CheckCollisionCircles()
{
    this->_center1 = {0.f, 0.f};
    this->_radius1 = 0.f;
    this->_center2 = {0.f, 0.f};
    this->_radius2 = 0.f;
}

Indie::Raylib::Shape::CheckCollisionCircles::CheckCollisionCircles(const CheckCollisionCircles &cpy)
{
    this->_center1 = cpy._center1;
    this->_radius1 = cpy._radius1;
    this->_center2 = cpy._center2;
    this->_radius2 = cpy._radius2;
}

Indie::Raylib::Shape::CheckCollisionCircles& Indie::Raylib::Shape::CheckCollisionCircles::operator=(const CheckCollisionCircles &other)
{
    this->_center1 = other.GetVectorCenter1();
    this->_radius1 = other.GetRadius1();
    this->_center2 = other.GetVectorCenter2();
    this->_radius2 = other.GetRadius2();
    return (*this);
}

/**
 * @brief Check collision between two circles
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionCircles::CheckCollision() {
    return ::CheckCollisionCircles(
        ::Vector2{ this->_center1.getX(), this->_center1.getY() },
        this->_radius1,
        ::Vector2 { this->_center2.getX(), this->_center2.getY() },
        this->_radius2
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Circle Rec:: Check Collision Circle Rec object
 *
 * @param center
 * @param radius
 * @param rectangle
 */
Indie::Raylib::Shape::CheckCollisionCircleRec::CheckCollisionCircleRec(const Misc::Vector<2> center, const float radius, const Misc::Rectangle rectangle) {
    this->_center = center;
    this->_radius = radius;
    this->_rectangle = rectangle;
}

Indie::Raylib::Shape::CheckCollisionCircleRec::CheckCollisionCircleRec()
{
    this->_center = {0.f, 0.f};
    this->_radius = 0.f;
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
}

Indie::Raylib::Shape::CheckCollisionCircleRec::CheckCollisionCircleRec(const CheckCollisionCircleRec &cpy)
{
    this->_center = cpy._center;
    this->_radius = cpy._radius;
    this->_rectangle = cpy._rectangle;
}

Indie::Raylib::Shape::CheckCollisionCircleRec& Indie::Raylib::Shape::CheckCollisionCircleRec::operator=(const CheckCollisionCircleRec &other)
{
    this->_center = other.GetVectorCenter();
    this->_radius = other.GetRadius();
    this->_rectangle = other.GetRectangle();
    return (*this);
}

/**
 * @brief Check collision between circle and rectangle
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionCircleRec::CheckCollision() {
    return ::CheckCollisionCircleRec(
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_radius,
        ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Point Rec:: Check Collision Point Rec object
 *
 * @param point
 * @param rectangle
 */
Indie::Raylib::Shape::CheckCollisionPointRec::CheckCollisionPointRec(const Misc::Vector<2> point, const Misc::Rectangle rectangle) {
    this->_point = point;
    this->_rectangle = rectangle;
}

Indie::Raylib::Shape::CheckCollisionPointRec::CheckCollisionPointRec()
{
    this->_point = {0.f, 0.f};
    this->_rectangle = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
}

Indie::Raylib::Shape::CheckCollisionPointRec::CheckCollisionPointRec(const CheckCollisionPointRec &cpy)
{
    this->_point = cpy._point;
    this->_rectangle = cpy._rectangle;
}

Indie::Raylib::Shape::CheckCollisionPointRec& Indie::Raylib::Shape::CheckCollisionPointRec::operator=(const CheckCollisionPointRec &other)
{
    this->_point = other.GetVectorPoint();
    this->_rectangle = other.GetRectangle();
    return (*this);
}

/**
 * @brief Check if point is inside rectangle
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionPointRec::CheckCollision() {
    return ::CheckCollisionPointRec(
        ::Vector2{ this->_point.getX(), this->_point.getY() },
        ::Rectangle{ this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getWidth(), this->_rectangle.getHeight() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Point Circle:: Check Collision Point Circle object
 *
 * @param point
 * @param center
 * @param radius
 */
Indie::Raylib::Shape::CheckCollisionPointCircle::CheckCollisionPointCircle(const Misc::Vector<2> point, const Misc::Vector<2> center, float radius) {
    this->_point = point;
    this->_center = center;
    this->_radius = radius;
}

Indie::Raylib::Shape::CheckCollisionPointCircle::CheckCollisionPointCircle()
{
    this->_point = {0.f, 0.f};
    this->_center = {0.f, 0.f};
    this->_radius = 0.f;
}

Indie::Raylib::Shape::CheckCollisionPointCircle::CheckCollisionPointCircle(const CheckCollisionPointCircle &cpy)
{
    this->_point = cpy._point;
    this->_center = cpy._center;
    this->_radius = cpy._radius;
}

Indie::Raylib::Shape::CheckCollisionPointCircle& Indie::Raylib::Shape::CheckCollisionPointCircle::operator=(const CheckCollisionPointCircle &other)
{
    this->_point = other.GetVectorPoint();
    this->_center = other.GetVectorCenter();
    this->_radius = other.GetRadius();
    return (*this);
}

/**
 * @brief Check if point is inside circle
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionPointCircle::CheckCollision() {
    return ::CheckCollisionPointCircle(
        ::Vector2{ this->_point.getX(), this->_point.getY() },
        ::Vector2{ this->_center.getX(), this->_center.getY() },
        this->_radius
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Point Triangle:: Check Collision Point Triangle object
 *
 * @param point
 * @param p1
 * @param p2
 * @param p3
 */
Indie::Raylib::Shape::CheckCollisionPointTriangle::CheckCollisionPointTriangle(const Misc::Vector<2> point, const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3) {
    this->_point = point;
    this->_p1 = p1;
    this->_p2 = p2;
    this->_p3 = p3;
}

Indie::Raylib::Shape::CheckCollisionPointTriangle::CheckCollisionPointTriangle()
{
    this->_point = {0.f, 0.f};
    this->_p1 = {0.f, 0.f};
    this->_p2 = {0.f, 0.f};
    this->_p3 = {0.f, 0.f};
}

Indie::Raylib::Shape::CheckCollisionPointTriangle::CheckCollisionPointTriangle(const CheckCollisionPointTriangle &cpy)
{
    this->_point = cpy._point;
    this->_p1 = cpy._p1;
    this->_p2 = cpy._p2;
    this->_p3 = cpy._p3;
}

Indie::Raylib::Shape::CheckCollisionPointTriangle& Indie::Raylib::Shape::CheckCollisionPointTriangle::operator=(const CheckCollisionPointTriangle &other)
{
    this->_point = other.GetVectorPoint();
    this->_p1 = other.GetVectorP1();
    this->_p2 = other.GetVectorP2();
    this->_p3 = other.GetVectorP3();
    return (*this);
}

/**
 * @brief Check if point is inside a triangle
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionPointTriangle::CheckCollision() {
    return ::CheckCollisionPointTriangle(
        ::Vector2{ this->_point.getX(), this->_point.getY() },
        ::Vector2{ this->_p1.getX(), this->_p1.getY() },
        ::Vector2{ this->_p2.getX(), this->_p2.getY() },
        ::Vector2{ this->_p3.getX(), this->_p3.getY() }
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Check Collision Lines:: Check Collision Lines object
 *
 * @param startPos1
 * @param endPos1
 * @param startPos2
 * @param endPos2
 * @param collisionPoint
 */
Indie::Raylib::Shape::CheckCollisionLines::CheckCollisionLines(const Misc::Vector<2> startPos1, const Misc::Vector<2> endPos1, const Misc::Vector<2> startPos2, const Misc::Vector<2> endPos2, const Misc::Vector<2> collisionPoint) {
    this->_startPos1 = startPos1;
    this->_endPos1 = endPos1;
    this->_startPos2 = startPos2;
    this->_endPos2 = endPos2;
    this->_collisionPoint = collisionPoint;
}

Indie::Raylib::Shape::CheckCollisionLines::CheckCollisionLines()
{
    this->_startPos1 = {0.f, 0.f};
    this->_endPos1 = {0.f, 0.f};
    this->_startPos2 = {0.f, 0.f};
    this->_endPos2 = {0.f, 0.f};
    this->_collisionPoint = {0.f, 0.f};
}

Indie::Raylib::Shape::CheckCollisionLines::CheckCollisionLines(const CheckCollisionLines &cpy)
{
    this->_startPos1 = cpy._startPos1;
    this->_endPos1 = cpy._endPos1;
    this->_startPos2 = cpy._startPos2;
    this->_endPos2 = cpy._endPos2;
    this->_collisionPoint = cpy._collisionPoint;
}

Indie::Raylib::Shape::CheckCollisionLines& Indie::Raylib::Shape::CheckCollisionLines::operator=(const CheckCollisionLines &other)
{
    this->_startPos1 = other.GetVectorStartPos1();
    this->_endPos1 = other.GetVectorEndPos1();
    this->_startPos2 = other.GetVectorStartPos2();
    this->_endPos2 = other.GetVectorEndPos2();
    this->_collisionPoint = other.GetVectorCollisionPoint();
    return (*this);
}

/**
 * @brief Check the collision between two lines defined by two points each, returns collision point by reference
 *
 * @return true
 * @return false
 */
bool Indie::Raylib::Shape::CheckCollisionLines::CheckCollision() {
    ::Vector2 points = { this->_collisionPoint.getX(), this->_collisionPoint.getY() };

    return ::CheckCollisionLines(
        ::Vector2{ this->_startPos1.getX(), this->_startPos1.getY() },
        ::Vector2{ this->_endPos1.getX(), this->_endPos1.getY() },
        ::Vector2{ this->_startPos2.getX(), this->_startPos2.getY() },
        ::Vector2{ this->_endPos2.getX(), this->_endPos2.getY() },
        &points
    );
}

/**
 * @brief Construct a new Indie:: Raylib:: Shape:: Get Collision Rec:: Get Collision Rec object
 *
 * @param rectangle1
 * @param rectangle2
 */
Indie::Raylib::Shape::GetCollisionRec::GetCollisionRec(const Misc::Rectangle rectangle1, const Misc::Rectangle rectangle2) {
    this->_rectangle1 = rectangle1;
    this->_rectangle2 = rectangle2;
}

Indie::Raylib::Shape::GetCollisionRec::GetCollisionRec()
{
    this->_rectangle1 = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
    this->_rectangle2 = Misc::Rectangle({0.f, 0.f, 0.f, 0.f});
}

Indie::Raylib::Shape::GetCollisionRec::GetCollisionRec(const GetCollisionRec &cpy)
{
    this->_rectangle1 = cpy._rectangle1;
    this->_rectangle2 = cpy._rectangle2;
}

Indie::Raylib::Shape::GetCollisionRec& Indie::Raylib::Shape::GetCollisionRec::operator=(const GetCollisionRec &other)
{
    this->_rectangle1 = other.GetRectangle1();
    this->_rectangle2 = other.GetRectangle2();
    return (*this);
}

/**
 * @brief Get collision rectangle for two rectangles collision
 *
 * @return Misc::Rectangle
 */
Misc::Rectangle Indie::Raylib::Shape::GetCollisionRec::GetCollision() {
    ::Rectangle rec = ::GetCollisionRec(
        ::Rectangle{ this->_rectangle1.getX(), this->_rectangle1.getY(), this->_rectangle1.getWidth(), this->_rectangle1.getHeight() },
        ::Rectangle{ this->_rectangle2.getX(), this->_rectangle2.getY(), this->_rectangle2.getWidth(), this->_rectangle2.getHeight() }
    );

    Misc::Rectangle vector({ rec.x, rec.y, rec.width, rec.height });
    return vector;
}