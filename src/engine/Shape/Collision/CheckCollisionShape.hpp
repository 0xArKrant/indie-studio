/**
 * @file CheckCollisionShape.hpp
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

#pragma once

#include "IShape.hpp"
#include "RectangleVector.hpp"

namespace Indie {
    namespace Raylib {
        namespace Shape {
            class CheckCollisionRecs : public IShape {
                public:
                    CheckCollisionRecs(const Misc::Rectangle, const Misc::Rectangle);
                    CheckCollisionRecs();
                    CheckCollisionRecs(const CheckCollisionRecs &);
                    CheckCollisionRecs& operator=(const CheckCollisionRecs &);
                    /**
                     * @brief Destroy the Check Collision Recs object
                     *
                     */
                    ~CheckCollisionRecs() = default;

                    /**
                     * @brief Get the Rectangle 1 object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle1() const { return this->_rectangle1; };
                    /**
                     * @brief Get the Rectangle 2 object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle2() const { return this->_rectangle2; };

                    /**
                     * @brief Set the Rectangle 1 object
                     *
                     * @param rectangle1
                     */
                    inline void SetRectangle1(const Misc::Rectangle rectangle1) { this->_rectangle1 = rectangle1; };
                    /**
                     * @brief Set the Rectangle 2 object
                     *
                     * @param rectangle2
                     */
                    inline void SetRectangle2(const Misc::Rectangle rectangle2) { this->_rectangle2 = rectangle2; };

                    bool CheckCollision();
                private:
                    Misc::Rectangle _rectangle1; /*! Misc::Rectangle object*/
                    Misc::Rectangle _rectangle2;  /*! Misc::Rectangle object*/
            };

            class CheckCollisionCircles : public IShape {
                public:
                    CheckCollisionCircles(const Misc::Vector<2>, const float, const Misc::Vector<2>, const float);
                    CheckCollisionCircles();
                    CheckCollisionCircles(const CheckCollisionCircles &);
                    CheckCollisionCircles& operator=(const CheckCollisionCircles &);
                    /**
                     * @brief Destroy the Check Collision Circles object
                     *
                     */
                    ~CheckCollisionCircles() = default;

                    /**
                     * @brief Get the Vector Center 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorCenter1() const { return this->_center1; };
                    /**
                     * @brief Get the Radius 1 object
                     *
                     * @return float
                     */
                    inline float GetRadius1() const { return this->_radius1; };
                    /**
                     * @brief Get the Vector Center 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorCenter2() const { return this->_center2; };
                    /**
                     * @brief Get the Radius 2 object
                     *
                     * @return float
                     */
                    inline float GetRadius2() const { return this->_radius2; };

                    /**
                     * @brief Set the Vector Center 1 object
                     *
                     * @param center1
                     */
                    inline void SetVectorCenter1(const Misc::Vector<2> center1) { this->_center1 = center1; };
                    /**
                     * @brief Set the Vector Radius 1 object
                     *
                     * @param radius1
                     */
                    inline void SetVectorRadius1(const float radius1) { this->_radius1 = radius1; };
                    /**
                     * @brief Set the Vector Center 2 object
                     *
                     * @param center2
                     */
                    inline void SetVectorCenter2(const Misc::Vector<2> center2) { this->_center2 = center2; };
                    /**
                     * @brief Set the Vector Radius 2 object
                     *
                     * @param radius2
                     */
                    inline void SetVectorRadius2(const float radius2) { this->_radius2 = radius2; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _center1; /*! Misc::Vector<2> object*/
                    float           _radius1; /*! float object*/
                    Misc::Vector<2> _center2; /*! Misc::Vector<2> object*/
                    float           _radius2; /*! float object */
            };

            class CheckCollisionCircleRec : public IShape {
                public:
                    CheckCollisionCircleRec(const Misc::Vector<2>, const float, const Misc::Rectangle);
                    CheckCollisionCircleRec();
                    CheckCollisionCircleRec(const CheckCollisionCircleRec &);
                    CheckCollisionCircleRec& operator=(const CheckCollisionCircleRec &);
                    /**
                     * @brief Destroy the Check Collision Circle Rec object
                     *
                     */
                    ~CheckCollisionCircleRec() = default;

                    /**
                     * @brief Get the Vector Center object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorCenter() const { return this->_center; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };
                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };

                    /**
                     * @brief Set the Vector Center object
                     *
                     * @param center
                     */
                    inline void SetVectorCenter(const Misc::Vector<2> center) { this->_center = center; };
                    /**
                     * @brief Set the Vector Radius object
                     *
                     * @param radius
                     */
                    inline void SetVectorRadius(const float radius) { this->_radius = radius; };
                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object*/
                    float           _radius; /*! float object*/
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object*/
            };

            class CheckCollisionPointRec : public IShape {
                public:
                    CheckCollisionPointRec(const Misc::Vector<2>, const Misc::Rectangle);
                    CheckCollisionPointRec();
                    CheckCollisionPointRec(const CheckCollisionPointRec &);
                    CheckCollisionPointRec& operator=(const CheckCollisionPointRec &);
                    /**
                     * @brief Destroy the Check Collision Point Rec object
                     *
                     */
                    ~CheckCollisionPointRec() = default;

                    /**
                     * @brief Get the Vector Point object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorPoint() const { return this->_point; };
                    /**
                     * @brief Get the Rectangle object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle() const { return this->_rectangle; };

                    /**
                     * @brief Set the Vector Point object
                     *
                     * @param point
                     */
                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    /**
                     * @brief Set the Rectangle object
                     *
                     * @param rectangle
                     */
                    inline void SetRectangle(const Misc::Rectangle rectangle) { this->_rectangle = rectangle; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point; /*! Misc::Vector<2> object*/
                    Misc::Rectangle _rectangle; /*! Misc::Rectangle object*/
            };

            class CheckCollisionPointCircle : public IShape {
                public:
                    CheckCollisionPointCircle(const Misc::Vector<2>, const Misc::Vector<2>, const float);
                    CheckCollisionPointCircle();
                    CheckCollisionPointCircle(const CheckCollisionPointCircle &);
                    CheckCollisionPointCircle& operator=(const CheckCollisionPointCircle &);
                    /**
                     * @brief Destroy the Check Collision Point Circle object
                     *
                     */
                    ~CheckCollisionPointCircle() = default;

                    /**
                     * @brief Get the Vector Point object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorPoint() const { return this->_point; };
                    /**
                     * @brief Get the Vector Center object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorCenter() const { return this->_center; };
                    /**
                     * @brief Get the Radius object
                     *
                     * @return float
                     */
                    inline float GetRadius() const { return this->_radius; };

                    /**
                     * @brief Set the Vector Point object
                     *
                     * @param point
                     */
                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    /**
                     * @brief Set the Vector Center object
                     *
                     * @param center
                     */
                    inline void SetVectorCenter(const Misc::Vector<2> center) { this->_center = center; };
                    /**
                     * @brief Set the Vector Radius object
                     *
                     * @param radius
                     */
                    inline void SetVectorRadius(const float radius) { this->_radius = radius; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point; /*! Misc::Vector<2> object*/
                    Misc::Vector<2> _center; /*! Misc::Vector<2> object*/
                    float           _radius; /*! Float object*/
            };

            class CheckCollisionPointTriangle : public IShape {
                public:
                    CheckCollisionPointTriangle(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
                    CheckCollisionPointTriangle();
                    CheckCollisionPointTriangle(const CheckCollisionPointTriangle &);
                    CheckCollisionPointTriangle& operator=(const CheckCollisionPointTriangle &);
                    /**
                     * @brief Destroy the Check Collision Point Triangle object
                     *
                     */
                    ~CheckCollisionPointTriangle() = default;

                    /**
                     * @brief Get the Vector Point object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorPoint() const { return this->_point; };
                    /**
                     * @brief Get the Vector P 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorP1() const { return this->_p1; };
                    /**
                     * @brief Get the Vector P 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorP2() const { return this->_p2; };
                    /**
                     * @brief Get the Vector P 3 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorP3() const { return this->_p3; };

                    /**
                     * @brief Set the Vector Point object
                     *
                     * @param point
                     */
                    inline void SetVectorPoint(const Misc::Vector<2> point) { this->_point = point; };
                    /**
                     * @brief Set the Vector P 1 object
                     *
                     * @param p1
                     */
                    inline void SetVectorP1(const Misc::Vector<2> p1) { this->_p1 = p1; };
                    /**
                     * @brief Set the Vector P 2 object
                     *
                     * @param p2
                     */
                    inline void SetVectorP2(const Misc::Vector<2> p2) { this->_p2 = p2; };
                    /**
                     * @brief Set the Vector P 3 object
                     *
                     * @param p3
                     */
                    inline void SetVectorP3(const Misc::Vector<2> p3) { this->_p3 = p3; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _point; /*! Misc::Vector<2> object*/
                    Misc::Vector<2> _p1; /*! Misc::Vector<2> object*/
                    Misc::Vector<2> _p2; /*! Misc::Vector<2> object*/
                    Misc::Vector<2> _p3; /*! Misc::Vector<2> object*/
            };

            class CheckCollisionLines : public IShape {
                public:
                    CheckCollisionLines(const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>, const Misc::Vector<2>);
                    CheckCollisionLines();
                    CheckCollisionLines(const CheckCollisionLines &);
                    CheckCollisionLines& operator=(const CheckCollisionLines &);
                    /**
                     * @brief Destroy the Check Collision Lines object
                     *
                     */
                    ~CheckCollisionLines() = default;

                    /**
                     * @brief Get the Vector Start Pos 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos1() const { return this->_startPos1; };
                    /**
                     * @brief Get the Vector End Pos 1 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos1() const { return this->_endPos1; };
                    /**
                     * @brief Get the Vector Start Pos 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorStartPos2() const { return this->_startPos2; };
                    /**
                     * @brief Get the Vector End Pos 2 object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorEndPos2() const { return this->_endPos2; };
                    /**
                     * @brief Get the Vector Collision Point object
                     *
                     * @return Misc::Vector<2>
                     */
                    inline Misc::Vector<2> GetVectorCollisionPoint() const { return this->_collisionPoint; };

                    /**
                     * @brief Set the Vector Start Pos 1 object
                     *
                     * @param startPos1
                     */
                    inline void SetVectorStartPos1(const Misc::Vector<2> startPos1) { this->_startPos1 = startPos1; };
                    /**
                     * @brief Set the Vector End Pos 1 object
                     *
                     * @param endPos1
                     */
                    inline void SetVectorEndPos1(const Misc::Vector<2> endPos1) { this->_endPos1 = endPos1; };
                    /**
                     * @brief Set the Vector Start Pos 2 object
                     *
                     * @param startPos2
                     */
                    inline void SetVectorStartPos2(const Misc::Vector<2> startPos2) { this->_startPos2 = startPos2; };
                    /**
                     * @brief Set the Vector End Pos 2 object
                     *
                     * @param endPos2
                     */
                    inline void SetVectorEndPos2(const Misc::Vector<2> endPos2) { this->_endPos2 = endPos2; };
                    /**
                     * @brief Set the Vector Collision Point object
                     *
                     * @param CollisionPoint
                     */
                    inline void SetVectorCollisionPoint(const Misc::Vector<2> CollisionPoint) { this->_collisionPoint = CollisionPoint; };

                    bool CheckCollision();
                private:
                    Misc::Vector<2> _startPos1; /*! Misc::Vector<2>*/
                    Misc::Vector<2> _endPos1; /*! Misc::Vector<2>*/
                    Misc::Vector<2> _startPos2; /*! Misc::Vector<2>*/
                    Misc::Vector<2> _endPos2; /*! Misc::Vector<2>*/
                    Misc::Vector<2> _collisionPoint; /*! Misc::Vector<2>*/
            };

            class GetCollisionRec : public IShape {
                public:
                    GetCollisionRec(const Misc::Rectangle, const Misc::Rectangle);
                    GetCollisionRec();
                    GetCollisionRec(const GetCollisionRec &);
                    GetCollisionRec& operator=(const GetCollisionRec &);
                    /**
                     * @brief Destroy the Get Collision Rec object
                     *
                     */
                    ~GetCollisionRec() = default;

                    /**
                     * @brief Get the Rectangle 1 object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle1() const { return this->_rectangle1; };
                    /**
                     * @brief Get the Rectangle 2 object
                     *
                     * @return Misc::Rectangle
                     */
                    inline Misc::Rectangle GetRectangle2() const { return this->_rectangle2; };

                    /**
                     * @brief Set the Rectangle 1 object
                     *
                     * @param rectangle1
                     */
                    inline void SetRectangle1(const Misc::Rectangle rectangle1) { this->_rectangle1 = rectangle1; };
                    /**
                     * @brief Set the Rectangle 2 object
                     *
                     * @param rectangle2
                     */
                    inline void SetRectangle2(const Misc::Rectangle rectangle2) { this->_rectangle2 = rectangle2; };

                    Misc::Rectangle GetCollision();
                private:
                    Misc::Rectangle _rectangle1; /*! Misc::Rectangle object*/
                    Misc::Rectangle _rectangle2; /*! Misc::Rectangle object*/
            };
        }
    }
}