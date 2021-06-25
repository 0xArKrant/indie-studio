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
                void update(Indie::Core::SceneManagement &scenemanagement, const double &);
                void draw();

            protected:
            private:
                ::Image _background;
                ::Image _play;
                ::Image _quit;
                ::Image _title;
                ::Texture2D _texturebg;
                ::Texture2D _textureplay;
                ::Texture2D _texturequit;
                ::Texture2D _texturetitle;
                ::Rectangle _playrec;
                ::Rectangle _quitrec;
                ::Rectangle _sourceRecPlay;
                ::Rectangle _sourceRecQuit;
        };
    }
}
