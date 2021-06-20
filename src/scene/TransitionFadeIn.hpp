/**
 * @file TransitionFadeIn.hpp
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
        class TransitionFadeIn : public Indie::Core::IScene {
        public:
            TransitionFadeIn();
            ~TransitionFadeIn();
            void update(Indie::Core::SceneManagement& scenemanagement, const double&);
            void draw();
        private:
            unsigned char _alpha;
            double _second;
        };
    }
}
