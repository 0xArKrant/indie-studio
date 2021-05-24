/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** GetCollisionRay
*/

#include "indie.hpp"

#ifndef GETCOLLISIONRAY_HPP_
#define GETCOLLISIONRAY_HPP_

namespace IModels {
    class GetCollisionRayMesh : public Models {
        public:
            GetCollisionRayMesh(const Misc::Ray, ::Mesh, const Misc::Matrix);
            ~GetCollisionRayMesh() = default;

            inline Misc::Ray    GetRay()    const { return this->_ray;    };
            inline ::Mesh       GetMesh()   const { return this->_mesh;   };
            inline Misc::Matrix GetMatrix() const { return this->_matrix; };

            inline void SetRay(const Misc::Ray ray)          { this->_ray = ray;       };
            inline void SetMesh(const ::Mesh mesh)           { this->_mesh = mesh;     };
            inline void SetMatrix(const Misc::Matrix matrix) { this->_matrix = matrix; };

            Misc::RayHitInfo GetCollision();
        private:
            Misc::Ray    _ray;
            ::Mesh       _mesh;
            Misc::Matrix _matrix;
    };

    class GetCollisionRayModel {
        public:
            GetCollisionRayModel(const Misc::Ray, const ::Model);
            ~GetCollisionRayModel() = default;

            inline Misc::Ray GetRay()   const { return this->_ray;   };
            inline ::Model   GetModel() const { return this->_model; };

            inline void SetRay(const Misc::Ray ray)     { this->_ray = ray; };
            inline void SetModel(const ::Model model)   { this->_model = model;}

            Misc::RayHitInfo GetCollision();
        private:
            Misc::Ray _ray;
            ::Model   _model;
    };

    class GetCollisionRayTriangle {
        public:
            GetCollisionRayTriangle(const Misc::Ray, const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Vector<3>);
            ~GetCollisionRayTriangle() = default;

            inline Misc::Ray    GetRay()   const { return this->_ray; };
            inline Misc::Vector<3> GetP1() const { return this->_p1;  };
            inline Misc::Vector<3> GetP2() const { return this->_p2;  };
            inline Misc::Vector<3> GetP3() const { return this->_p3;  };

            inline void SetRay(const Misc::Ray ray)     { this->_ray = ray; };
            inline void SetP1(const Misc::Vector<3> p1) { this->_p1 = p1;   };
            inline void SetP2(const Misc::Vector<3> p2) { this->_p2 = p2;   };
            inline void SetP3(const Misc::Vector<3> p3) { this->_p3 = p3;   };

            Misc::RayHitInfo GetCollision();
        private:
            Misc::Ray       _ray;
            Misc::Vector<3> _p1;
            Misc::Vector<3> _p2;
            Misc::Vector<3> _p3;
    };

    class GetCollisionRayGround {
        public:
            GetCollisionRayGround(const Misc::Ray, const float);
            ~GetCollisionRayGround() = default;

            inline Misc::Ray GetRay()          const { return this->_ray;          };
            inline float     GetGroundHeight() const { return this->_groundHeight; };

            inline void SetRay(const Misc::Ray ray)               { this->_ray = ray;                   };
            inline void SetGroundHeight(const float groundHeight) { this->_groundHeight = groundHeight; };

            Misc::RayHitInfo GetCollision();
        private:
            Misc::Ray _ray;
            float     _groundHeight;
    };
}

#endif /* !GETCOLLISIONRAY_HPP_ */
