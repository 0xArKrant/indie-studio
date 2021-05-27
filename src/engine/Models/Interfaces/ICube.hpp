/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ICube
*/

#pragma once

#include "indie.hpp"

namespace Models {
    class ICube : public IModels {
        public:
            virtual ~ICube() = default;

            virtual Misc::Vector<3> GetPosition() const = 0;
            virtual Misc::Vector<3> GetSize()     const = 0;
            virtual Misc::Texture   GetTexture()  const = 0;
            virtual float           GetWidth()    const = 0;
            virtual float           GetHeight()   const = 0;
            virtual float           GetLength()   const = 0;

            virtual void SetPosition(const Misc::Vector<3>) = 0;
            virtual void SetSize(const Misc::Vector<3>) = 0;
            virtual void SetTexture(const Misc::Texture) = 0;
            virtual void SetWidth(const float) = 0;
            virtual void SetHeight(const float) = 0;
            virtual void SetLength(const float) = 0;
    };
}
