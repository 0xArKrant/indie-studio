/**
 * @file SplashScreen.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief
 * @version 0.1
 * @date 16-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
#include "IScene.hpp"
#include "Camera.hpp"
#include "Texture.hpp"
#include "CoreRaylib.hpp"
#include "ModelsRaylib.hpp"

namespace Indie {
    namespace Scene {
        class SplashScreen : public Indie::Core::IScene {
            public:
                SplashScreen();
                ~SplashScreen();
                void update(Indie::Core::SceneManagement &scenemanagement, const double &);
                void draw();
            private:
                unsigned char _alpha;
                Indie::Raylib::Models::ModelsRaylib _model;
                Indie::Raylib::Models::ModelsRaylib _model2;
                ::Camera3D _camera;
                ::Vector3 _pos;
        };
    }
}
