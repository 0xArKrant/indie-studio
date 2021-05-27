/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** IText
*/

#include "indie.hpp"

#ifndef ITEXT_HPP_
#define ITEXT_HPP_

namespace IText {
    class Text {
        public:
            virtual ~Text() = default;
            virtual void DrawText() = 0;
            virtual void Compute();
    };
}

#endif /* !ITEXT_HPP */
