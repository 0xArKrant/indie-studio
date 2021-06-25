/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Map
*/

#include "Map.hpp"

Indie::Raylib::Map::Map(const std::string texturePath, const std::string cubicPath, int mode)
{
    this->_camera = { { 16.0f, 35.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f }, 25.0f, 0 };
    this->_img = ::LoadImage(cubicPath.c_str());
    this->cubicmap = ::LoadTextureFromImage(this->_img);       // Convert image to texture to display (VRAM)
    this->_mesh = GenMeshCubicmap(this->_img, { 1.0f, 1.0f, 1.0f });
    this->_model = LoadModelFromMesh(this->_mesh);
    this->texture = ::LoadTexture(texturePath.c_str());    // Load map texture
    this->_model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = this->texture;             // Set map diffuse texture
    this->mapPosition = { -8.0f, 0.0f, -7.0f };          // Set model position
    this->_mapPixels = LoadImageColors(_img);
    this->_height = this->_img.height;
    this->_witdh = this->_img.width;
    ::UnloadImage(this->_img);
    ::SetCameraMode(this->_camera, mode);
    ::SetTargetFPS(60);
}

void Indie::Raylib::Map::draw()
{
    ::DrawModel(this->_model, this->mapPosition, 1.0f, GRAY);
}

Indie::Raylib::Map::~Map()
{
    ::UnloadTexture(this->cubicmap);    // Unload cubicmap texture
    ::UnloadTexture(this->texture);     // Unload map texture
    ::UnloadModel(this->_model);
}

Misc::Vector<3> Indie::Raylib::Map::getMapPosition() const
{
    return Misc::Vector<3>(this->mapPosition.x, this->mapPosition.y, this->mapPosition.z);
}

std::vector<Misc::Colors> Indie::Raylib::Map::getMapPixels()
{
    std::vector<Misc::Colors> res = std::vector<Misc::Colors>();

    for(int i = 0; i < this->_height * this->_witdh; i++)
        res.emplace_back(Misc::Colors(_mapPixels[i].r, _mapPixels[i].g, _mapPixels[i].b, _mapPixels[i].a));
    return res;
}