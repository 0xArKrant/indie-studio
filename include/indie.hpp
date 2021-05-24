/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** indie
*/

#ifndef INDIE_HPP_
#define INDIE_HPP_

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <functional>
#include <memory>
#include <dlfcn.h>
#include <dirent.h>
#include <sys/types.h>
#include <list>
#include <filesystem>
#include <raylib.h>
#include <array>
#include <cstdint>
#include <cstring>

#include "Core.hpp"
#include "LibraryLoader.hpp"
#include "Exception.hpp"

#include "Vector.hpp"
#include "Colors.hpp"
#include "RectangleVector.hpp"
#include "Texture.hpp"

#include "IShape.hpp"
#include "Rectangle.hpp"
#include "Pixel.hpp"
#include "Ellipse.hpp"
#include "Polygon.hpp"
#include "Ring.hpp"
#include "Triangle.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "CheckCollision.hpp"

#include "IModels.hpp"
#include "Cube.hpp"
#include "Line3D.hpp"
#include "Point3D.hpp"
#include "Circle3D.hpp"
#include "Triangle3D.hpp"
#include "Ray.hpp"
#include "Plane.hpp"
#include "Grid.hpp"
#include "Cylinder.hpp"
#include "Sphere.hpp"
#include "GenMesh.hpp"
#include "MeshManipulation.hpp"
#include "DrawBoundingBox.hpp"
#include "DrawBillboard.hpp"
#include "DrawModel.hpp"

#include "IText.hpp"

#endif /* !INDIE_HPP_ */
