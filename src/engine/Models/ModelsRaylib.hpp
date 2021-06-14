/**
 * @file ModelsRaylib.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
#include "Vector.hpp"
#include "Colors.hpp"
#include "IModels.hpp"

namespace Indie {
    namespace Raylib {
        namespace Models {
            class ModelsRaylib : public IModels {
                public:
                    ModelsRaylib();
                    ModelsRaylib(std::string filename);
                    void DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint);
                    void DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
                    void DrawModelWires(Misc::Vector<3> position, float scale, Misc::Colors tint);
                    void DrawModelWiresEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
                    void DrawBoundingBox(Misc::Colors color);
                    void DrawModels();
                    void ComputeMesh();
                    ::Mesh GenerateMesh();
                    Misc::Colors GetColors() const;
                    void SetColors(const Misc::Colors);
                    ~ModelsRaylib();

                private:
                    ::Model _model; /*! Model structure from raylib */
                    ::BoundingBox _BoundingBox; /*! BoundingBox structure from raylib*/
                    Misc::Colors _colors;
            };
        }
    }
}
