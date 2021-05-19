/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** GenMesh
*/

#include "indie.hpp"

#ifndef GENMESH_HPP_
#define GENMESH_HPP_

namespace IModels {
    class GenMeshPoly : public Models {
        public:
            GenMeshPoly(int, float);
            ~GenMeshPoly() = default;
            ::Mesh GenerateMesh();
        private:
            int _sides;
            int _radius;
    };
    class GenMeshPlane : public Models {
        public:
            GenMeshPlane(float, float, int, int);
            ~GenMeshPlane() = default;
            ::Mesh GenerateMesh();
        private:
            float _width;
            float _length;
            int _resX;
            int _resZ;
    };
    class GenMeshCube : public Models {
        public:
            GenMeshCube(float, float, float);
            ~GenMeshCube() = default;
            ::Mesh GenerateMesh();
        private:
            float _width;
            float _height;
            float _length;
    };
    class GenMeshSphere : public Models {
        public:
            GenMeshSphere(float, int, int);
            ~GenMeshSphere() = default;
            ::Mesh GenerateMesh();
        private:
            float _radius;
            int _rings;
            int _slices;
    };
    class GenMeshHemiSphere : public Models {
        public:
            GenMeshHemiSphere(float, int, int);
            ~GenMeshHemiSphere() = default;
            ::Mesh GenerateMesh();
        private:
            float _radius;
            int _rings;
            int _slices;
    };
    class GenMeshCylinder : public Models {
        public:
            GenMeshCylinder(float, float, int);
            ~GenMeshCylinder() = default;
            ::Mesh GenerateMesh();
        private:
            float _radius;
            float _height;
            int _slices;
    };
    class GenMeshTorus : public Models {
        public:
            GenMeshTorus(float, float, int, int);
            ~GenMeshTorus() = default;
            ::Mesh GenerateMesh();
        private:
            float _radius;
            float _size;
            int _radSeg;
            int _sides;
    };
    class GenMeshKnot : public Models {
        public:
            GenMeshKnot(float, float, int, int);
            ~GenMeshKnot() = default;
            ::Mesh GenerateMesh();
        private:
            float _radius;
            float _size;
            int _radSeg;
            int _sides;
    };
    class GenMeshHeightmap : public Models {
        public:
            GenMeshHeightmap(::Image, ::Vector3);
            ~GenMeshHeightmap() = default;
            ::Mesh GenerateMesh();
        private:
            ::Image _heightmap;
            ::Vector3 _size;
    };
    class GenMeshCubicmap : public Models {
        public:
            GenMeshCubicmap(::Image, ::Vector3);
            ~GenMeshCubicmap() = default;
            ::Mesh GenerateMesh();
        private:
            ::Image _cubicmap;
            ::Vector3 _cubeSize;
    };
}

#endif /* !GENMESH_HPP_ */
