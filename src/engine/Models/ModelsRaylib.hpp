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
                    ModelsRaylib() {}
                    ModelsRaylib(const std::string &filename);
                    ModelsRaylib(const std::string &filename, const std::string &texturePath);
                    ModelsRaylib(const ModelsRaylib &cpy)
                    {
                        this->_model = cpy._model;
                        this->_BoundingBox = cpy._BoundingBox;
                        this->_colors = cpy._colors;
                        this->_texture = cpy._texture;;
                    }
                    void DrawModel(Misc::Vector<3> position, float scale, Misc::Colors tint);
                    void DrawModelEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
                    void DrawModelWires(Misc::Vector<3> position, float scale, Misc::Colors tint);
                    void DrawModelWiresEx(Misc::Vector<3> position, Misc::Vector<3> rotationAxis, float rotationAngle, Misc::Vector<3> scale, Misc::Colors tint);
                    void DrawBoundingBox(Misc::Colors color);

                    void SetColors(const Misc::Colors);
                    Misc::Colors GetColors() const;
                    ~ModelsRaylib();
                private:
                    ::Model _model; /*! Model structure from raylib */
                    ::BoundingBox _BoundingBox; /*! BoundingBox structure from raylib*/
                    Misc::Colors _colors;
                    ::Texture2D _texture;
            };
        }
    }
}
