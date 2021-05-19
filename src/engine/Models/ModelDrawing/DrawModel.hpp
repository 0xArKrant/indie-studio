/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** DrawModel
*/

#include "indie.hpp"

#ifndef DRAWMODEL_HPP_
#define DRAWMODEL_HPP_

namespace IModels {
    class DrawModel : public Models {
        public:
            DrawModel(::Model, ::Vector3, float, ::Color);
            ~DrawModel() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Model _model;
            ::Vector3 _position;
            float _scale;
            ::Color _tint;
    };
    class DrawModelEx : public Models {
        public:
            DrawModelEx(::Model, ::Vector3, ::Vector3, float, ::Vector3, ::Color);
            ~DrawModelEx() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Model _model;
            ::Vector3 _position;
            ::Vector3 _rotationAxis;
            float _rotationAngle;
            ::Vector3 _scale;
            ::Color _tint;
    };
    class DrawModelWires : public Models {
        public:
            DrawModelWires(::Model, ::Vector3, float, ::Color);
            ~DrawModelWires() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Model _model;
            ::Vector3 _position;
            float _scale;
            ::Color _tint;
    };
    class DrawModelWiresEx : public Models {
        public:
            DrawModelWiresEx(::Model, ::Vector3, ::Vector3, float, ::Vector3, ::Color);
            ~DrawModelWiresEx() = default;
            void DrawModels();
            ::Color GetColor() { return this->_tint; };
            void SetColor(::Color tint) { this->_tint = tint; };
        private:
            ::Model _model;
            ::Vector3 _position;
            ::Vector3 _rotationAxis;
            float _rotationAngle;
            ::Vector3 _scale;
            ::Color _tint;
    };
};

#endif