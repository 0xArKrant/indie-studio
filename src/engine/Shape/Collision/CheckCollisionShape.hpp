/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** CheckCollision
*/

#pragma once

#include "IShape.hpp"
#include "RectangleVector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class CheckCollisionRecs : public IShape {
                public:
                    CheckCollisionRecs(const Misc::Rectangle, const Misc::Rectangle);
                    ~CheckCollisionRecs() = default;

                    inline Misc::Rectangle GetRectangle1() const { return this->_rectangle1; };
                    inline Misc::Rectangle GetRectangle2() const { return this->_rectangle2; };

                    inline void SetRectangle1(const Misc::Rectangle rectangle1) { this->_rectangle1 = rectangle1; };
                    inline void SetRectangle2(const Misc::Rectangle rectangle2) { this->_rectangle2 = rectangle2; };

                    bool CheckCollision();
                private:
                    Misc::Rectangle _rectangle1;
                    Misc::Rectangle _rectangle2;
            };

            class CheckCollisionCircles : public IShape {
                public:
                    CheckCollisionCircles(const Misc::Vector<2>, const float, const Misc::Vector<2>, const float);
                    ~CheckCollisionCircles() = default;

                    inline Misc::Vector<2> GetVectorCenter1() const { return this->_center1; };
                    inline float           GetRadius1()       const { return this->_radius1; };
                    inline Misc::Vector<2> GetVectorCenter2() const { return this->_center2; };
                    inline float           GetRadius2()       const { return this->_radius2; };

                    inline void SetVectorCenter1(const Misc::Vector<2> center1) { this->_center1 = center1; };
                    inline void SetVectorRadius1(const float radius1) { this->_radius1 = radius1; };
                    inline void SetVectorCenter2(const Misc::Vector<2> center2) { this->_center2 = center2; };
                    inline void SetVectorRadius2(const float radius2) { this->_radius2 = radius2; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _center1;
                    float           _radius1;
                    Misc::Vector<2> _center2;
                    float           _radius2;
            };

            class CheckCollisionCircleRec : public IShape {
                public:
                    CheckCollisionCircleRec(const Misc::Vector<2>, const float, const Misc::Rectangle);
                    ~CheckCollisionCircleRec() = default;

                    inline Misc::Vector<2> GetVectorCenter() const { return this->_center; };
                    inline float           GetRadius()       const { return this->_radius; };
                    inline Misc::Rectangle GetRectangle()    const { return this->_rectangle; };

                    inline void SetVectorCenter(const Misc::Vector<2> center) { this->_center = center; };
                    inline void SetVectorRadius(const float radius) { this->_radius = radius; };
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _center;
                    float           _radius;
                    Misc::Rectangle _rectangle;
            };

            class CheckCollisionPointRec : public IShape {
                public:
                    CheckCollisionPointRec(const Misc::Vector<2>, const Misc::Rectangle);
                    ~CheckCollisionPointRec() = default;

                    inline Misc::Vector<2> GetVectorPoint() const { return this->_point; };
                    inline Misc::Rectangle GetRectangle()   const { return this->_rectangle; };

                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point;
                    Misc::Rectangle _rectangle;
            };

            class CheckCollisionPointCircle : public IShape {
                public:
                    CheckCollisionPointCircle(const Misc::Vector<2>, const Misc::Vector<2>, const float);
                    ~CheckCollisionPointCircle() = default;

                    inline Misc::Vector<2> GetVectorPoint()  const { return this->_point; };
                    inline Misc::Vector<2> GetVectorCenter() const { return this->_center; };
                    inline float           GetRadius()       const { return this->_radius; };

                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    inline void SetVectorCenter(const Misc::Vector<2> center) { this->_center = center; };
                    inline void SetVectorRadius(const float radius) { this->_radius = radius; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point;
                    Misc::Vector<2> _center;
                    float           _radius;
            };

            class CheckCollisionPointTriangle : public IShape {
                public:
                    CheckCollisionPointTriangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
                    ~CheckCollisionPointTriangle() = default;

                    inline Misc::Vector<2> GetVectorPoint() const { return this->_point; };
                    inline Misc::Vector<2> GetVectorP1()    const { return this->_p1; };
                    inline Misc::Vector<2> GetVectorP2()    const { return this->_p2; };
                    inline Misc::Vector<2> GetVectorP3()    const { return this->_p3; };

                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    inline void SetVectorP1(const Misc::Vector<2> p1) { this->_p1 = p1; };
                    inline void SetVectorP2(const Misc::Vector<2> p2) { this->_p2 = p2; };
                    inline void SetVectorP3(const Misc::Vector<2> p3) { this->_p3 = p3; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point;
                    Misc::Vector<2> _p1;
                    Misc::Vector<2> _p2;
                    Misc::Vector<2> _p3;
            };

            class CheckCollisionLines : public IShape {
                public:
                    CheckCollisionLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
                    ~CheckCollisionLines() = default;

                    inline Misc::Vector<2> GetVectorStartPos1()      const { return this->_startPos1; };
                    inline Misc::Vector<2> GetVectorEndPos1()        const { return this->_endPos1; };
                    inline Misc::Vector<2> GetVectorStartPos2()      const { return this->_startPos2; };
                    inline Misc::Vector<2> GetVectorEndPos2()        const { return this->_endPos2; };
                    inline Misc::Vector<2> GetVectorCollisionPoint() const { return this->_collisionPoint; };

                    inline void SetVectorStartPos1(const Misc::Vector<2> startPos1) { this->_startPos1 = startPos1; };
                    inline void SetVectorEndPos1(const Misc::Vector<2> endPos1) { this->_endPos1 = endPos1; };
                    inline void SetVectorStartPos2(const Misc::Vector<2> startPos2) { this->_startPos2 = startPos2; };
                    inline void SetVectorEndPos2(const Misc::Vector<2> endPos2) { this->_endPos2 = endPos2; };
                    inline void SetVectorCollisionPoint(const Misc::Vector<2> CollisionPoint) { this->_collisionPoint = CollisionPoint; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _startPos1;
                    Misc::Vector<2> _endPos1;
                    Misc::Vector<2> _startPos2;
                    Misc::Vector<2> _endPos2;
                    Misc::Vector<2> _collisionPoint;
            };

            class GetCollisionRec : public IShape {
                public:
                    GetCollisionRec(const Misc::Rectangle, const Misc::Rectangle);
                    ~GetCollisionRec() = default;

                    inline Misc::Rectangle GetRectangle1() const { return this->_rectangle1; };
                    inline Misc::Rectangle GetRectangle2() const { return this->_rectangle2; };

                    inline void SetRectangle1(const Misc::Rectangle rectangle1) { this->_rectangle1 = rectangle1; };
                    inline void SetRectangle2(const Misc::Rectangle rectangle2) { this->_rectangle2 = rectangle2; };

                    Misc::Rectangle GetCollision();
                private:
                    Misc::Rectangle _rectangle1;
                    Misc::Rectangle _rectangle2;
            };
        }
    }
}