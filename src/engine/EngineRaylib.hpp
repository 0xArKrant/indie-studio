/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** EngineRaylib
*/

#ifndef ENGINERAYLIB_HPP_
#define ENGINERAYLIB_HPP_
#include "IEngines.hpp"

namespace indie {
    class Engine_RAYLIB : public indie::IEngines {
        public:
            Engine_RAYLIB();
            ~Engine_RAYLIB();
            std::map<indie::keyEvent, bool> getEvent();
        private:
            bool fup() const;
            bool fdown() const;
            bool fleft() const;
            bool fright() const;
            bool fquit() const;
            bool fmenu() const;
            bool fmain_menu() const;
            bool fconfirm() const;
    };
}

#endif /* !ENGINERAYLIB_HPP_ */
