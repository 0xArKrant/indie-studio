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
 *  @param r R (red)
 *  @param g G (green)
 *  @param b B (blue)
 *  @param a A (alpha)
 **/
Misc::Colors::Colors(const uchar &r, const uchar &g, const uchar &b, const uchar &a)
{
    this->_r = r;
    this->_g = g;
    this->_b = b;
    this->_a = a;
}

/**
 *  Colors copy constructor
 *  @param cpy colors to be copied
 **/
Misc::Colors::Colors(const Colors &cpy)
{
    this->_r = cpy._r;
    this->_g = cpy._g;
    this->_b = cpy._b;
    this->_a = cpy._a;
}

Misc::Colors::Colors()
{
    this->_r = 0;
    this->_g = 0;
    this->_b = 0;
    this->_a = 0;
}

/**
 *  Colors equals operator implementation
 *  @param other colors to copy
 **/
Misc::Colors& Misc::Colors::operator=(const Colors &other)
{
    this->_r = other.getR();
    this->_g = other.getG();
    this->_b = other.getB();
    this->_a = other.getA();
    return (*this);
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