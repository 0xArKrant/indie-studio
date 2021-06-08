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
#include <stack>

#include "IScene.hpp"
#include "SceneManagement.hpp"
#include "LibraryLoader.hpp"
#include "Core.hpp"
#include "Exception.hpp"

#include "Vector.hpp"
#include "Colors.hpp"
#include "RectangleVector.hpp"
#include "Texture.hpp"
#include "RayVector.hpp"
#include "RayHitInfo.hpp"
#include "Matrix.hpp"

// Geometric Shape Interfaces
#include "IShape.hpp"
#include "IRectangle.hpp"
#include "IPixel.hpp"
#include "IEllipse.hpp"
#include "IPolygon.hpp"
#include "IRing.hpp"
#include "ITriangle.hpp"
#include "ILine.hpp"
#include "ICircle.hpp"

// Geometric Shape Classes
#include "Rectangle.hpp"
#include "Pixel.hpp"
#include "Ellipse.hpp"
#include "Polygon.hpp"
#include "Ring.hpp"
#include "Triangle.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "CheckCollisionShape.hpp"

// Geometric Models Interfaces
#include "IModels.hpp"
#include "ILine3D.hpp"
#include "IPoint3D.hpp"
#include "ITriangle3D.hpp"
#include "ICube.hpp"
#include "IRay.hpp"
#include "IPlane.hpp"
#include "IGrid.hpp"
#include "ICylinder.hpp"
#include "ICircle3D.hpp"
#include "ISphere.hpp"

// Geometric Models Classes

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
//#include "GenMesh.hpp"
//#include "MeshManipulation.hpp"
//#include "DrawBoundingBox.hpp"
//#include "DrawBillboard.hpp"
//#include "DrawModel.hpp"
//#include "GetCollisionRay.hpp"

#include "IText.hpp"

#endif /* !INDIE_HPP_ */
