/**
 * @file Camera.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Camera class substitution to raylib structure
 * @version 0.1
 * @date 10-06-2021
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
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
            /**
             * @brief Destroy the Camera 2D object
             *
             */
            ~Camera2D() = default;

            /**
             * @brief Get the Offset object
             *
             * @return Misc::Vector<2>
             */
            inline Misc::Vector<2> getOffset()    const { return this->_offset;   };
            /**
             * @brief Get the Target object
             *
             * @return Misc::Vector<2>
             */
            inline Misc::Vector<2> getTarget()    const { return this->_target;   };
            /**
             * @brief Get the Rotation object
             *
             * @return float
             */
            inline float           getRotation()  const { return this->_rotation; };
            /**
             * @brief Get the Zoom object
             *
             * @return float
             */
            inline float           getZoom()      const { return this->_zoom;     };

            /**
             * @brief Get the Offset reference object
             *
             * @return Misc::Vector<2>
             */
            inline Misc::Vector<2> &getOffset()     { return this->_offset;   };
            /**
             * @brief Get the Target reference object
             *
             * @return Misc::Vector<2>
             */
            inline Misc::Vector<2> &getTarget()     { return this->_target;   };
            /**
             * @brief Get the Rotation reference object
             *
             * @return float
             */
            inline float           &getRotation()   { return this->_rotation; };
            /**
             * @brief Get the Zoom reference object
             *
             * @return float
             */
            inline float           &getZoom()       { return this->_zoom;     };
        private:
            Misc::Vector<2> _offset; /*! Misc::Vector<2> offset value of Camera2D*/
            Misc::Vector<2> _target; /*! Misc::Vector<2> target value of Camera2D*/
            float           _rotation; /*! Float rotation value of Camera2D*/
            float           _zoom; /*! Float zoom value of Camera2D*/
    };

    class Camera3D {
        public:
            Camera3D(const Misc::Vector<3>, const Misc::Vector<3>, const Misc::Vector<3>, float, int);
            Camera3D();
            /**
             * @brief Destroy the Camera 3D object
             *
             */
            ~Camera3D() = default;
            /**
             * @brief Get the Position object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> getPosition()   const { return this->_position;   };
            /**
             * @brief Get the Target object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> getTarget()     const { return this->_target;     };
            /**
             * @brief Get the Up object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> getUp()         const { return this->_up;         };
            /**
             * @brief Get the Fovy object
             *
             * @return float
             */
            inline float           getFovy()       const { return this->_fovy;       };
            /**
             * @brief Get the Projection object
             *
             * @return int
             */
            inline int             getProjection() const { return this->_projection; };
            /**
             * @brief Get the Position object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> &getPosition()    { return this->_position;   };
            /**
             * @brief Get the Target object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> &getTarget()      { return this->_target;     };
            /**
             * @brief Get the Up object
             *
             * @return Misc::Vector<3>
             */
            inline Misc::Vector<3> &getUp()          { return this->_up;         };
            /**
             * @brief Get the Fovy object
             *
             * @return float
             */
            inline float           &getFovy()        { return this->_fovy;       };
            /**
             * @brief Get the Projection object
             *
             * @return int
             */
            inline int             &getProjection()  { return this->_projection; };
        private:
            Misc::Vector<3> _position; /*! Misc::Vector<3> position value of Camera3D*/
            Misc::Vector<3> _target; /*! Misc::Vector<3> target value of Camera3D*/
            Misc::Vector<3> _up; /*! Misc::Vector<3> up value of Camera3D*/
            float           _fovy; /*! Float fovy (y view) offset value of Camera3D*/
            int             _projection; /*! Int projection value of Camera3D*/
    };
}
