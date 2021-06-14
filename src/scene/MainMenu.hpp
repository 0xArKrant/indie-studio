/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#ifndef MAINMENU_HPP_
#define MAINMENU_HPP_

#include "indie.hpp"
#include "../core/IScene.hpp"
#include "Camera.hpp"
#include "DrawBillboard.hpp"

namespace Indie {
    namespace Scene {
        class MainMenu : public Indie::Core::IScene {
            public:
                MainMenu();
                ~MainMenu();
                void setMenu();
                void update(std::stack<Indie::Core::IScene *> &);
                void draw();

            protected:
            private:
                ::Camera3D _camera;
                ::Texture2D bill;
                Misc::Vector<3> billPosition;
        };
    }
}

#endif /* !MAINMENU_HPP_ */
