/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#pragma once

#include "indie.hpp"
#include "SceneManagement.hpp"

namespace Indie {
   namespace Core {
      class Core {
         public:
            Core();
            ~Core();
            void loop();
         private:
            int _width;
            int _height;
            std::string _name;
            std::unique_ptr<Indie::Core::SceneManagement> _sceneManagement;
      };
   }
} // namespace Indie
