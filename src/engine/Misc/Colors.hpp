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
            ~Colors() = default;
            Colors& operator=(const Colors &other);
            bool operator()(const Colors& c1, const Colors& c2) const;
            bool operator<(const Misc::Colors &col);
            uchar getA() const; /*!< Alpha value getter @return alpha value */
            uchar getR() const; /*!< Red value getter @return red value */
            uchar getG() const; /*!< Green value getter @return green value */
            uchar getB() const; /*!< Blue value getter @return blue value */

            void setA(const uchar &); /*!< Alpha value setter @param alpha value between 0 255 */
            void setR(const uchar &); /*!< Red value setter @param red value between 0 255 */
            void setG(const uchar &); /*!< Green value setter @param green value between 0 255 */
            void setB(const uchar &); /*!< Blue value setter @param blue value between 0 255 */
        protected:
        private:
            uchar _a; /*!< Alpha value of color */
            uchar _r; /*!< Red value of color */
            uchar _g; /*!< Green value of color */
            uchar _b; /*!< Blue value of color */
    };
}

bool operator<(const Misc::Colors &c1, const Misc::Colors &c2);

#endif /* !COLORS_HPP_ */