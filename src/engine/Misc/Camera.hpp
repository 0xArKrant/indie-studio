/**
 * @file Camera.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Camera class substitution to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
#include "Vector.hpp"

namespace Misc {
    class Camera2D {
        public:
            Camera2D(const Misc::Vector<2>, const Misc::Vector<2>, float, float);
            Camera2D();
            ~Camera2D() = default; /*!< Camera2D default destructor */

            inline Misc::Vector<2> getOffset()    const { return this->_offset; }; /*!< Offset value getter @return Misc::Vector<2> offset */
            inline Misc::Vector<2> getTarget()    const { return this->_target; }; /*!< Target value getter @return Misc::Vector<2> target*/
            inline float           getRotation()  const { return this->_rotation; }; /*!< Rotation value getter @return float rotation*/
            inline float           getZoom()      const { return this->_zoom; }; /*!< Zoom value getter @return float zoom */
        private:
            Misc::Vector<2> _offset; /*!< Misc::Vector<2> offset value of Camera2D*/
            Misc::Vector<2> _target; /*!< Misc::Vector<2> target value of Camera2D*/
            float           _rotation; /*!< Float rotation value of Camera2D*/
            float           _zoom; /*!< Float zoom value of Camera2D*/
    };

    class Camera3D {
        public:
            Camera3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Vector<3>, float, int);
            Camera3D();
            ~Camera3D() = default; /*!< Camera3D default destructor */
        private:
            Misc::Vector<3> _position; /*!< Misc::Vector<3> position value of Camera3D*/
            Misc::Vector<3> _target; /*!< Misc::Vector<3> target value of Camera3D*/
            Misc::Vector<3> _up; /*!< Misc::Vector<3> up value of Camera3D*/
            float           _fovy; /*!< Float fovy (y view) offset value of Camera3D*/
            int             _projection; /*!< Int projection value of Camera3D*/
    };
}
