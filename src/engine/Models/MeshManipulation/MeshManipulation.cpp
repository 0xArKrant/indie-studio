/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** MeshManipulation
*/

#include "indie.hpp"

IModels::MeshTangents::MeshTangents(::Mesh *mesh)
{
    this->_mesh = mesh;
}

void IModels::MeshTangents::ComputeMesh()
{
    ::MeshTangents(this->_mesh);
}

IModels::MeshBinormals::MeshBinormals(::Mesh *mesh)
{
    this->_mesh = mesh;
}

void IModels::MeshBinormals::ComputeMesh()
{
    ::MeshBinormals(this->_mesh);
}

IModels::MeshBoundingBox::MeshBoundingBox(::Mesh mesh)
{
    this->_mesh = mesh;
}

BoundingBox IModels::MeshBoundingBox::ComputeMeshBox()
{
    return ::MeshBoundingBox(this->_mesh);
}
