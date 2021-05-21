/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** CheckCollision
*/

#ifndef CHECKCOLLISION_HPP_
#define CHECKCOLLISION_HPP_

#include "indie.hpp"

namespace IShape {
    class CheckCollisionRecs : public Shape {
        public:
            CheckCollisionRecs(const Misc::Vector<4>, const Misc::Vector<4>);
            ~CheckCollisionRecs() = default;

            inline Misc::Vector<4> GetVectorRectangle1() { return this->_rectangle1; };
            inline Misc::Vector<4> GetVectorRectangle2() { return this->_rectangle2; };

            inline void SetVectorRectangle1(Misc::Vector<4> rectangle1) { this->_rectangle1 = rectangle1; };
            inline void SetVectorRectangle2(Misc::Vector<4> rectangle2) { this->_rectangle2 = rectangle2; };

            bool CheckCollision();
        private:
            Misc::Vector<4> _rectangle1;
            Misc::Vector<4> _rectangle2;
    };

    class CheckCollisionCircles : public Shape {
        public:
            CheckCollisionCircles(const Misc::Vector<2>, const float, const Misc::Vector<2>, const float);
            ~CheckCollisionCircles() = default;

            inline Misc::Vector<2> GetVectorCenter1() { return this->_center1; };
            inline float           GetRadius1()       { return this->_radius1; };
            inline Misc::Vector<2> GetVectorCenter2() { return this->_center2; };
            inline float           GetRadius2()       { return this->_radius2; };

            inline void SetVectorCenter1(Misc::Vector<2> center1) { this->_center1 = center1; };
            inline void SetVectorRadius1(float radius1)           { this->_radius1 = radius1; };
            inline void SetVectorCenter2(Misc::Vector<2> center2) { this->_center2 = center2; };
            inline void SetVectorRadius2(float radius2)           { this->_radius2 = radius2; };

            bool CheckCollision();
        private:
            Misc::Vector<2> _center1;
            float           _radius1;
            Misc::Vector<2> _center2;
            float           _radius2;
    };

    class CheckCollisionCircleRec : public Shape {
        public:
            CheckCollisionCircleRec(const Misc::Vector<2>, const float, const Misc::Vector<4>);
            ~CheckCollisionCircleRec() = default;

            inline Misc::Vector<2> GetVectorCenter()    { return this->_center; };
            inline float           GetRadius()          { return this->_radius; };
            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };

            inline void SetVectorCenter(Misc::Vector<2> center)       { this->_center = center; };
            inline void SetVectorRadius(float radius)                 { this->_radius = radius; };
            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };

            bool CheckCollision();
        private:
            Misc::Vector<2> _center;
            float           _radius;
            Misc::Vector<4> _rectangle;
    };

    class CheckCollisionPointRec : public Shape {
        public:
            CheckCollisionPointRec(const Misc::Vector<2>, const Misc::Vector<4>);
            ~CheckCollisionPointRec() = default;

            inline Misc::Vector<2> GetVectorPoint()     { return this->_point;     };
            inline Misc::Vector<4> GetVectorRectangle() { return this->_rectangle; };

            inline void SetVectorPoint(Misc::Vector<2> point)         { this->_point = point;         };
            inline void SetVectorRectangle(Misc::Vector<4> rectangle) { this->_rectangle = rectangle; };

            bool CheckCollision();

        private:
            Misc::Vector<2> _point;
            Misc::Vector<4> _rectangle;
    };

    class CheckCollisionPointCircle : public Shape {
        public:
            CheckCollisionPointCircle(const Misc::Vector<2>, const Misc::Vector<2>, const float);
            ~CheckCollisionPointCircle() = default;

            inline Misc::Vector<2> GetVectorPoint()  { return this->_point;  };
            inline Misc::Vector<2> GetVectorCenter() { return this->_center; };
            inline float           GetRadius()       { return this->_radius; };

            inline void SetVectorPoint(Misc::Vector<2> point)   { this->_point = point;   };
            inline void SetVectorCenter(Misc::Vector<2> center) { this->_center = center; };
            inline void SetVectorRadius(float radius)           { this->_radius = radius; };

            bool CheckCollision();
        private:
            Misc::Vector<2> _point;
            Misc::Vector<2> _center;
            float           _radius;
    };

    class CheckCollisionPointTriangle : public Shape {
        public:
            CheckCollisionPointTriangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
            ~CheckCollisionPointTriangle() = default;

            inline Misc::Vector<2> GetVectorPoint() { return this->_point;  };
            inline Misc::Vector<2> GetVectorP1()    { return this->_p1;  };
            inline Misc::Vector<2> GetVectorP2()    { return this->_p2;  };
            inline Misc::Vector<2> GetVectorP3()    { return this->_p3;  };

            inline void SetVectorPoint(Misc::Vector<2> point) { this->_point = point;   };
            inline void SetVectorP1(Misc::Vector<2> p1)       { this->_p1 = p1;   };
            inline void SetVectorP2(Misc::Vector<2> p2)       { this->_p2 = p2;   };
            inline void SetVectorP3(Misc::Vector<2> p3)       { this->_p3 = p3;   };

            bool CheckCollision();
        private:
            Misc::Vector<2> _point;
            Misc::Vector<2> _p1;
            Misc::Vector<2> _p2;
            Misc::Vector<2> _p3;
    };

    class CheckCollisionLines : public Shape {
        public:
            CheckCollisionLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
            ~CheckCollisionLines() = default;

            inline Misc::Vector<2> GetVectorStartPos1()      { return this->_startPos1;      };
            inline Misc::Vector<2> GetVectorEndPos1()        { return this->_endPos1;        };
            inline Misc::Vector<2> GetVectorStartPos2()      { return this->_startPos2;      };
            inline Misc::Vector<2> GetVectorEndPos2()        { return this->_endPos2;        };
            inline Misc::Vector<2> GetVectorCollisionPoint() { return this->_collisionPoint; };

            inline void SetVectorStartPos1(Misc::Vector<2> startPos1)           { this->_startPos1 = startPos1;           };
            inline void SetVectorEndPos1(Misc::Vector<2> endPos1)               { this->_endPos1 = endPos1;               };
            inline void SetVectorStartPos2(Misc::Vector<2> startPos2)           { this->_startPos2 = startPos2;           };
            inline void SetVectorEndPos2(Misc::Vector<2> endPos2)               { this->_endPos2 = endPos2;               };
            inline void SetVectorCollisionPoint(Misc::Vector<2> CollisionPoint) { this->_collisionPoint = CollisionPoint; };

            bool CheckCollision();
        private:
            Misc::Vector<2> _startPos1;
            Misc::Vector<2> _endPos1;
            Misc::Vector<2> _startPos2;
            Misc::Vector<2> _endPos2;
            Misc::Vector<2> _collisionPoint;
    };

    class GetCollisionRec : public Shape {
        public:
            GetCollisionRec(const Misc::Vector<4>, const Misc::Vector<4>);
            ~GetCollisionRec() = default;

            inline Misc::Vector<4> GetVectorRectangle1() { return this->_rectangle1; };
            inline Misc::Vector<4> GetVectorRectangle2() { return this->_rectangle2; };

            inline void SetVectorRectangle1(Misc::Vector<4> rectangle1) { this->_rectangle1 = rectangle1; };
            inline void SetVectorRectangle2(Misc::Vector<4> rectangle2) { this->_rectangle2 = rectangle2; };

            Misc::Vector<4> GetCollision();
        private:
            Misc::Vector<4> _rectangle1;
            Misc::Vector<4> _rectangle2;
    };
}

#endif /* !CHECKCOLLISION_HPP_ */
