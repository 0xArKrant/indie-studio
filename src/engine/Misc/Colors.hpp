/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Colors
*/

/**
 *  @file   Colors.hpp
 *  @brief  Generic color file
 *  @author Benjamin Lafouge
 *  @date   2021-05-20
 **/

#ifndef COLORS_HPP_
#define COLORS_HPP_

typedef unsigned char uchar;

namespace Misc {
    /*! Generic color class */
    class Colors {
        public:
            Colors(const uchar&, const uchar&, const uchar&, const uchar&);
            Colors(const Colors &);
            Colors();
            ~Colors() = default;

            Colors& operator=(const Colors &other);
            bool operator()(const Colors& c1, const Colors& c2) const;
            bool operator<(const Misc::Colors &col);

            inline uchar getR() const { return this->_r; }; /*!< Red value getter @return red value */
            inline uchar getG() const { return this->_g; }; /*!< Green value getter @return green value */
            inline uchar getB() const { return this->_b; }; /*!< Blue value getter @return blue value */
            inline uchar getA() const { return this->_a; }; /*!< Alpha value getter @return alpha value */

            inline void setR(const uchar &r) { this->_r = r; }; /*!< Red value setter @param red value between 0 255 */
            inline void setG(const uchar &g) { this->_g = g; }; /*!< Green value setter @param green value between 0 255 */
            inline void setB(const uchar &b) { this->_b = b; }; /*!< Blue value setter @param blue value between 0 255 */
            inline void setA(const uchar &a) { this->_a = a; }; /*!< Alpha value setter @param alpha value between 0 255 */
        private:
            uchar _r; /*!< Red value of color */
            uchar _g; /*!< Green value of color */
            uchar _b; /*!< Blue value of color */
            uchar _a; /*!< Alpha value of color */
    };
}

bool operator<(const Misc::Colors &c1, const Misc::Colors &c2);

#endif /* !COLORS_HPP_ */