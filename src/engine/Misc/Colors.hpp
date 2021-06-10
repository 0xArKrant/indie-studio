/**
 * @file Colors.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Colors substitution class to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

typedef unsigned char uchar;

namespace Misc {
    /*! Generic color class */
    class Colors {
        public:
            Colors(const uchar&, const uchar&, const uchar&, const uchar&);
            Colors(const Colors &);
            Colors(); /*! < Colors default constructor */
            ~Colors() = default; /*! < Colors destructor */

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