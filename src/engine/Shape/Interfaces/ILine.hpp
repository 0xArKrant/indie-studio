/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** ILine
*/

#pragma once

#include "indie.hpp"

namespace Shape {
    class ILine : public IShape {
        public:
            virtual ~ILine() = default;

            virtual int             GetStartPosX()        const = 0;
            virtual int             GetStartPosY()        const = 0;
            virtual int             GetEndPosX()          const = 0;
            virtual int             GetEndPosY()          const = 0;
            virtual int             GetPointsCount()      const = 0;
            virtual float           GetThickness()        const = 0;
            virtual Misc::Vector<2> GetVectorStartPos()   const = 0;
            virtual Misc::Vector<2> GetVectorEndPos()     const = 0;
            virtual Misc::Vector<2> GetVectorControlPos() const = 0;
            virtual Misc::Vector<2> GetVectorPoints()     const = 0;

            virtual void SetStartPosX(const int) = 0;
            virtual void SetStartPosY(const int) = 0;
            virtual void SetEndPosX(const int) = 0;
            virtual void SetEndPosY(const int) = 0;
            virtual void SetPointsCount(const int) = 0;
            virtual void SetThickness(const float) = 0;
            virtual void SetVectorStartPosX(const Misc::Vector<2>) = 0;
            virtual void SetVectorEndPosX(const Misc::Vector<2>) = 0;
            virtual void SetVectorControlPos(const Misc::Vector<2>) = 0;
            virtual void SetVectorPoints(const Misc::Vector<2>) = 0;
    };
}
