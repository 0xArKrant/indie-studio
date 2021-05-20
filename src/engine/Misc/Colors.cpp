/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Colors
*/

/**
 *  @file   Colors.cpp
 *  @brief  Generic color file
 *  @author Benjamin Lafouge
 *  @date   2021-05-20
 **/

#include "Colors.hpp"

/**
 *  Colors constructor
 *  @param a A (alpha)
 *  @param r R (red)
 *  @param g G (green)
 *  @param b B (blue)
 **/
Misc::Colors::Colors(const uchar &a, const uchar &r, const uchar &g, const uchar &b)
{
    this->_a = a;
    this->_r = r;
    this->_g = g;
    this->_b = b;
}

/**
 *  Colors copy constructor
 *  @param cpy colors to be copied
 **/
Misc::Colors::Colors(const Colors &cpy)
{
    this->_a = cpy._a;
    this->_b = cpy._b;
    this->_g = cpy._g;
    this->_r = cpy._r;
}

/**
 *  Colors equals operator implementation
 *  @param other colors to copy
 **/
Misc::Colors& Misc::Colors::operator=(const Colors &other)
{
    this->_a = other.getA();
    this->_r = other.getR();
    this->_g = other.getG();
    this->_b = other.getB();
    return (*this);
}

/**
 *  Alpha getter
 *  @return Alpha value (0-255)
 **/
uchar Misc::Colors::getA() const
{
    return (this->_a);
}

/**
 *  Red getter
 *  @return Red value (0-255)
 **/
uchar Misc::Colors::getR() const
{
    return (this->_r);
}

/**
 *  Green getter
 *  @return Green value (0-255)
 **/
uchar Misc::Colors::getG() const
{
    return (this->_g);
}

/**
 *  Blue getter
 *  @return Blue value (0-255)
 **/
uchar Misc::Colors::getB() const
{
    return (this->_b);
}

/**
 *  Alpha setter
 *  @param a Alpha value (0-255)
 **/
void Misc::Colors::setA(const uchar &a)
{
    this->_a = a;
}

/**
 *  Red setter
 *  @param r Red value (0-255)
 **/
void Misc::Colors::setR(const uchar &r)
{
    this->_r = r;
}

/**
 *  Green setter
 *  @param g Green value (0-255)
 **/
void Misc::Colors::setG(const uchar &g)
{
    this->_g = g;
}

/**
 *  Blue setter
 *  @param b Blue value (0-255)
 **/
void Misc::Colors::setB(const uchar &b)
{
    this->_b = b;
}

/**
 *  Colors equals operator implementation
 *  @param other colors to copy
 **/
bool Misc::Colors::operator()(const Colors& c1, const Colors& c2) const
{
    return (c1.getA() + c1.getR() + c1.getG() + c1.getB() < c2.getA() + c2.getR() + c2.getG() + c2.getB());
}

/**
 *  Colors inferior operator implementation
 *  @param col colors to be compared
 **/
bool Misc::Colors::operator<(const Misc::Colors &col)
{
    return (this->_a + this->_r + this->_g + this->_b < col.getA() + col.getR() + col.getG() + col.getB());
}

/**
 *  Colors inferior operator implementation
 *  @param c1 c2 colors to be compared
 **/
bool operator<(const Misc::Colors &c1, const Misc::Colors &c2)
{
    return (c1.getA() + c1.getR() + c1.getG() + c1.getB() < c2.getA() + c2.getR() + c2.getG() + c2.getB());
}