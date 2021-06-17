/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#pragma once

#include "indie.hpp"
#include "../core/IScene.hpp"
#include "./Camera.hpp"
#include "../Texture/Texture.hpp"
#include "../engine/Map/Map.hpp"


namespace Indie {
    namespace Scene {
        class MainMenu : public Indie::Core::IScene {
            public:
                MainMenu();
                ~MainMenu();
                void setMenu();
                void update(std::stack<std::unique_ptr<Indie::Core::IScene>> &);
                void draw();

            protected:
            private:
                Indie::Raylib::Map _map;
        };
    }
}
