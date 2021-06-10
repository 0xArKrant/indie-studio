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
            Colors(); /*!  Colors default constructor */
            ~Colors() = default; /*!  Colors destructor */

            Colors& operator=(const Colors &other);
            bool operator()(const Colors& c1, const Colors& c2) const;
            bool operator<(const Misc::Colors &col);

            /**
             * @brief Get Red value
             *
             * @return uchar
             */
            inline uchar getR() const { return this->_r; };
            /**
             * @brief Get Green value
             *
             * @return uchar
             */
            inline uchar getG() const { return this->_g; };
            /**
             * @brief Get Blue value
             *
             * @return uchar
             */
            inline uchar getB() const { return this->_b; };
            /**
             * @brief Get Alpha value
             *
             * @return uchar
             */
            inline uchar getA() const { return this->_a; };

            /**
             * @brief Set Red value between 0 255
             *
             * @param r
             */
            inline void setR(const uchar &r) { this->_r = r; };
            /**
             * @brief Set Green value between 0 255
             *
             * @param g
             */
            inline void setG(const uchar &g) { this->_g = g; };
            /**
             * @brief Set Blue value between 0 255
             *
             * @param b
             */
            inline void setB(const uchar &b) { this->_b = b; };
            /**
             * @brief Set Alpha value between 0 255
             *
             * @param a
             */
            inline void setA(const uchar &a) { this->_a = a; };
        private:
            uchar _r; /*! Red value of color */
            uchar _g; /*! Green value of color */
            uchar _b; /*! Blue value of color */
            uchar _a; /*! Alpha value of color */
    };
}

bool operator<(const Misc::Colors &c1, const Misc::Colors &c2);