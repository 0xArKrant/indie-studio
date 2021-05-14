/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** IEngines
*/

#ifndef IENGINES_HPP_
#define IENGINES_HPP_

#include "Event.hpp"
#include <map>

namespace indie {
    class IEngines {
        public:
            virtual ~IEngines() = default;
            virtual std::map<keyEvent, bool> getEvent() = 0;
            virtual void initWindow(const size_t &, const size_t &, const std::string &) = 0;
        protected:
        private:
    };
}

#endif /* !IENGINES_HPP_ */
