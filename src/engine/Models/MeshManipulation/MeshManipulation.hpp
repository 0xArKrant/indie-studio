/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** MeshManipulation
*/

#include "indie.hpp"

#ifndef MESHMANIPULATION_HPP_
#define MESHMANIPULATION_HPP_

namespace IModels {
    class MeshTangents : public Models {
        public:
            MeshTangents(::Mesh *);
            ~MeshTangents() = default;
            void ComputeMesh();
        private:
            ::Mesh *_mesh;
    };
    class MeshBinormals : public Models {
        public:
            MeshBinormals(::Mesh *);
            ~MeshBinormals() = default;
            void ComputeMesh();
        private:
            ::Mesh *_mesh;
    };
    class MeshBoundingBox : public Models {
        public:
            MeshBoundingBox(::Mesh);
            ~MeshBoundingBox() = default;
            BoundingBox ComputeMeshBox();
        private:
            ::Mesh _mesh;
    };
}

#endif