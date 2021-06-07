/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** SceneManagement
*/

#ifndef SCENEMANAGEMENT_HPP_
#define SCENEMANAGEMENT_HPP_

#include "indie.hpp"

namespace Core {
    class SceneManagement {
        public:
            SceneManagement();
            ~SceneManagement();

        protected:
        private:
            std::stack <IScene> _stack;
    };
}

#endif /* !SCENEMANAGEMENT_HPP_ */
