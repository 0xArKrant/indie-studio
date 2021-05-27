/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** GenMesh
*/

#include "indie.hpp"

IModels::GenMeshPoly::GenMeshPoly(int sides, float radius)
{
    this->_sides = sides;
    this->_radius = radius;
}

::Mesh IModels::GenMeshPoly::GenerateMesh()
{
    return ::GenMeshPoly(this->_sides, this->_radius);
}

IModels::GenMeshPlane::GenMeshPlane(float width, float length, int resX, int resZ)
{
    this->_width = width;
    this->_length = length;
    this->_resX = resX;
    this->_resZ = resZ;
}

::Mesh IModels::GenMeshPlane::GenerateMesh()
{
    return ::GenMeshPlane(this->_width, this->_length, this->_resX, this->_resZ);
}

IModels::GenMeshCube::GenMeshCube(float width, float height, float length)
{
    this->_width = width;
    this->_height = height;
    this->_length = length;
}

::Mesh IModels::GenMeshCube::GenerateMesh()
{
    return ::GenMeshCube(this->_width, this->_length, this->_height);
}

IModels::GenMeshSphere::GenMeshSphere(float radius, int rings, int slices)
{
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
}

::Mesh IModels::GenMeshSphere::GenerateMesh()
{
    return ::GenMeshSphere(this->_radius, this->_rings, this->_slices);
}

IModels::GenMeshHemiSphere::GenMeshHemiSphere(float radius, int rings, int slices)
{
    this->_radius = radius;
    this->_rings = rings;
    this->_slices = slices;
}

::Mesh IModels::GenMeshHemiSphere::GenerateMesh()
{
    return ::GenMeshHemiSphere(this->_radius, this->_rings, this->_slices);
}

IModels::GenMeshCylinder::GenMeshCylinder(float radius, float height, int slices)
{
    this->_radius = radius;
    this->_height = height;
    this->_slices = slices;
}

::Mesh IModels::GenMeshCylinder::GenerateMesh()
{
    return ::GenMeshCylinder(this->_radius, this->_height, this->_slices);
}


IModels::GenMeshTorus::GenMeshTorus(float radius, float size, int radSeg, int sides)
{
    this->_radius = radius;
    this->_size = size;
    this->_radSeg = radSeg;
    this->_sides = sides;
}

::Mesh IModels::GenMeshTorus::GenerateMesh()
{
    return ::GenMeshTorus(this->_radius, this->_size, this->_radSeg, this->_sides);
}

IModels::GenMeshKnot::GenMeshKnot(float radius, float size, int radSeg, int sides)
{
    this->_radius = radius;
    this->_size = size;
    this->_radSeg = radSeg;
    this->_sides = sides;
}

::Mesh IModels::GenMeshKnot::GenerateMesh()
{
    return ::GenMeshKnot(this->_radius, this->_size, this->_radSeg, this->_sides);
}


IModels::GenMeshHeightmap::GenMeshHeightmap(::Image heightmap, ::Vector3 size)
{
    this->_heightmap = heightmap;
    this->_size = size;
}

::Mesh IModels::GenMeshHeightmap::GenerateMesh()
{
    return ::GenMeshHeightmap(this->_heightmap, this->_size);
}

IModels::GenMeshCubicmap::GenMeshCubicmap(::Image cubicmap, ::Vector3 cubeSize)
{
    this->_cubicmap = cubicmap;
    this->_cubeSize = cubeSize;
}

::Mesh IModels::GenMeshCubicmap::GenerateMesh()
{
    return ::GenMeshCubicmap(this->_cubicmap, this->_cubeSize);
}



