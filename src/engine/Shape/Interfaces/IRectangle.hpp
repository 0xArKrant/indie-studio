/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** IRectangle
*/

#pragma once

#include "IShape.hpp"
#include "RectangleVector.hpp"


namespace Indie {
    namespace Raylib {
        namespace Shape {
            class IRectangle : public IShape {
                public:
                    virtual ~IRectangle() = default;

                    virtual int             GetPosX()      const = 0;
                    virtual int             GetPosY()      const = 0;
                    virtual int             GetWidth()     const = 0;
                    virtual int             GetHeight()    const = 0;
                    virtual int             GetThickness() const = 0;
                    virtual int             GetSegments()  const = 0;
                    virtual float           GetRotation()  const = 0;
                    virtual float           GetRoundness() const = 0;
                    virtual Misc::Rectangle GetRectangle() const = 0;
                    virtual Misc::Vector<2> GetPosition()  const = 0;
                    virtual Misc::Vector<2> GetSize()      const = 0;
                    virtual Misc::Vector<2> GetOrigin()    const = 0;
                    virtual Misc::Colors    GetColors1()   const = 0;
                    virtual Misc::Colors    GetColors2()   const = 0;
                    virtual Misc::Colors    GetColors3()   const = 0;
                    virtual Misc::Colors    GetColors4()   const = 0;

                    virtual void SetPosX(const int) = 0;
                    virtual void SetPosY(const int) = 0;
                    virtual void SetWidth(const int) = 0;
                    virtual void SetHeight(const int) = 0;
                    virtual void SetThickness(const int) = 0;
                    virtual void SetSegments(const int) = 0;
                    virtual void SetRotation(const float) = 0;
                    virtual void SetRoundness(const float) = 0;
                    virtual void SetRectangle(const Misc::Rectangle) = 0;
                    virtual void SetPosition(const Misc::Vector<2>) = 0;
                    virtual void SetSize(const Misc::Vector<2>) = 0;
                    virtual void SetOrigin(const Misc::Vector<2>) = 0;
                    virtual void SetColors1(const Misc::Colors) = 0;
                    virtual void SetColors2(const Misc::Colors) = 0;
                    virtual void SetColors3(const Misc::Colors) = 0;
                    virtual void SetColors4(const Misc::Colors) = 0;
            };
        }
    }
}
