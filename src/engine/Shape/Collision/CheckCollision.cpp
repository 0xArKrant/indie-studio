/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** CheckCollision
*/

#include "indie.hpp"

IShape::CheckCollisionRecs::CheckCollisionRecs(const Misc::Vector<4> rectangle1, const Misc::Vector<4> rectangle2)
{
    this->_rectangle1 = rectangle1;
    this->_rectangle2 = rectangle2;
}

bool IShape::CheckCollisionRecs::CheckCollision()
{
    return ::CheckCollisionRecs(
            ::Rectangle { this->_rectangle1.getX(), this->_rectangle1.getY(), this->_rectangle1.getZ(), this->_rectangle1.getW() },
            ::Rectangle { this->_rectangle2.getX(), this->_rectangle2.getY(), this->_rectangle2.getZ(), this->_rectangle2.getW() }
    );
}

IShape::CheckCollisionCircles::CheckCollisionCircles(const Misc::Vector<2> center1, const float radius1, const Misc::Vector<2> center2, const float radius2)
{
    this->_center1 = center1;
    this->_radius1 = radius1;
    this->_center2 = center2;
    this->_radius2 = radius2;
}

bool IShape::CheckCollisionCircles::CheckCollision()
{
    return ::CheckCollisionCircles(
            ::Vector2 { this->_center1.getX(), this->_center1.getY() },
            this->_radius1,
            ::Vector2 { this->_center2.getX(), this->_center2.getY() },
            this->_radius2
    );
}

IShape::CheckCollisionCircleRec::CheckCollisionCircleRec(const Misc::Vector<2> center, const float radius, const Misc::Vector<4> rectangle)
{
    this->_center = center;
    this->_radius = radius;
    this->_rectangle = rectangle;
}

bool IShape::CheckCollisionCircleRec::CheckCollision()
{
    return ::CheckCollisionCircleRec(
            ::Vector2 { this->_center.getX(), this->_center.getY() },
            this->_radius,
            ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getZ(), this->_rectangle.getW() }
    );
}

IShape::CheckCollisionPointRec::CheckCollisionPointRec(const Misc::Vector<2> point, const Misc::Vector<4> rectangle)
{
    this->_point = point;
    this->_rectangle = rectangle;
}

bool IShape::CheckCollisionPointRec::CheckCollision()
{
    return ::CheckCollisionPointRec(
            ::Vector2 { this->_point.getX(), this->_point.getY() },
            ::Rectangle { this->_rectangle.getX(), this->_rectangle.getY(), this->_rectangle.getZ(), this->_rectangle.getW() }
    );
}

IShape::CheckCollisionPointCircle::CheckCollisionPointCircle(const Misc::Vector<2> point, const Misc::Vector<2> center, float radius)
{
    this->_point = point;
    this->_center = center;
    this->_radius = radius;
}

bool IShape::CheckCollisionPointCircle::CheckCollision()
{
    return ::CheckCollisionPointCircle(
            ::Vector2 { this->_point.getX(), this->_point.getY() },
            ::Vector2 { this->_center.getX(), this->_center.getY() },
            this->_radius
    );
}

IShape::CheckCollisionPointTriangle::CheckCollisionPointTriangle(const Misc::Vector<2> point, const Misc::Vector<2> p1, const Misc::Vector<2> p2, const Misc::Vector<2> p3)
{
    this->_point = point;
    this->_p1 = p1;
    this->_p2 = p2;
    this->_p3 = p3;
}

bool IShape::CheckCollisionPointTriangle::CheckCollision()
{
    return ::CheckCollisionPointTriangle(
            ::Vector2 { this->_point.getX(), this->_point.getY() },
            ::Vector2 { this->_p1.getX(), this->_p1.getY() },
            ::Vector2 { this->_p2.getX(), this->_p2.getY() },
            ::Vector2 { this->_p3.getX(), this->_p3.getY() }
    );
}

IShape::CheckCollisionLines::CheckCollisionLines(const Misc::Vector<2> startPos1, const Misc::Vector<2> endPos1, const Misc::Vector<2> startPos2, const Misc::Vector<2> endPos2, const Misc::Vector<2> collisionPoint)
{
    this->_startPos1 = startPos1;
    this->_endPos1 = endPos1;
    this->_startPos2 = startPos2;
    this->_endPos2 = endPos2;
    this->_collisionPoint = collisionPoint;
}

bool IShape::CheckCollisionLines::CheckCollision()
{
    ::Vector2 points = { this->_collisionPoint.getX(), this->_collisionPoint.getY() };

    return ::CheckCollisionLines(
            ::Vector2 { this->_startPos1.getX(), this->_startPos1.getY() },
            ::Vector2 { this->_endPos1.getX(), this->_endPos1.getY() },
            ::Vector2 { this->_startPos2.getX(), this->_startPos2.getY() },
            ::Vector2 { this->_endPos2.getX(), this->_endPos2.getY() },
            &points
    );
}

IShape::GetCollisionRec::GetCollisionRec(const Misc::Vector<4> rectangle1, const Misc::Vector<4> rectangle2)
{
    this->_rectangle1 = rectangle1;
    this->_rectangle2 = rectangle2;
}

Misc::Vector<4> IShape::GetCollisionRec::GetCollision()
{
    ::Rectangle rec = ::GetCollisionRec(
            ::Rectangle { this->_rectangle1.getX(), this->_rectangle1.getY(), this->_rectangle1.getZ(), this->_rectangle1.getW() },
            ::Rectangle { this->_rectangle2.getX(), this->_rectangle2.getY(), this->_rectangle2.getZ(), this->_rectangle2.getW() }
    );
    Misc::Vector<4> vector = Misc::Vector<4>(rec.x, rec.y, rec.width, rec.height);

    return vector;
}