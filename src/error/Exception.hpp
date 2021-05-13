/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Exception
*/

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include "indie.hpp"

namespace Errors {
    class Exception : public std::exception {
        public:
            explicit Exception();
            explicit Exception(const char *err, std::string currentfile, int currentline);
            explicit Exception(const char *err, std::string errplus, std::string currentfile, int currentline);

            virtual const char *what() const noexcept;
        protected:
            std::string _message;
        private:
    };
}

#endif /* !EXCEPTION_HPP_ */
