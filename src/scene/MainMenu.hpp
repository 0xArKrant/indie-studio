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

namespace Indie {
    namespace Scene {
        class MainMenu : public Indie::Core::IScene {
            public:
                MainMenu();
                ~MainMenu();
                void update(std::stack<Indie::Core::IScene *> &);
                void draw();

            protected:
            private:
        };
    }
}

#endif /* !MAINMENU_HPP_ */
