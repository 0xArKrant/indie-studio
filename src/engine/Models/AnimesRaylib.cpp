/*
** EPITECH PROJECT, 2021
** indiedemerde
** File description:
** AnimesRaylib
*/

#include "AnimesRaylib.hpp"
#include "Core.hpp"

Indie::Raylib::AnimesRaylib::AnimesRaylib()
{

}
 
Indie::Raylib::AnimesRaylib::AnimesRaylib(const std::string &dirPath, const std::string &texturePath)
{
    this->_texture = ::LoadTexture(texturePath.c_str());
    this->_textureList.emplace_back(this->_texture);

    for (const auto &it : std::filesystem::directory_iterator(dirPath)) {
        if (it.path().string().find(".mtl") == std::string::npos) {
            std::string mtlPath = it.path().string();
            this->_pathList.emplace_back(mtlPath);
        }
    }
    std::sort(this->_pathList.begin(), this->_pathList.end());
    for (const auto &it : this->_pathList) {
        if (it.find(".obj")) {
            this->_objList.emplace_back(::LoadModel(it.c_str()));
            std::cout << it << std::endl;
        }
    }
    for (const auto it : this->_objList) {
        ::SetMaterialTexture(&it.materials[0], MATERIAL_MAP_DIFFUSE, this->_texture);
    }
}

void Indie::Raylib::AnimesRaylib::update(float elapsed, Misc::Vector<3> &pos, float &fRotaAngle,  Misc::Vector<3> &scale, const Misc::Vector<3> &vRotaAngle) 
{
    this->_pos.x = pos.getX();
    this->_pos.y = pos.getY();
    this->_pos.z = pos.getZ();
    this->_scale.x = scale.getX();
    this->_scale.y = scale.getY();
    this->_scale.z = scale.getZ();
    this->_vRotaAngle.x = vRotaAngle.getX();
    this->_vRotaAngle.y = vRotaAngle.getY();
    this->_vRotaAngle.z = vRotaAngle.getZ();
    this->_fRotaAngle = fRotaAngle;
    this->_frameCount += (int)(elapsed * 60.0);

    if (this->_frameCount == this->_objList.size())
        this->_frameCount = 0;

}

void Indie::Raylib::AnimesRaylib::draw() 
{
    ::DrawModelEx(this->_objList[this->_frameCount], this->_pos, this->_vRotaAngle, this->_fRotaAngle, this->_scale, ::Color(WHITE));
}


Indie::Raylib::AnimesRaylib::~AnimesRaylib()
{
    for (const auto it : this->_textureList)
        ::UnloadTexture(it);
}