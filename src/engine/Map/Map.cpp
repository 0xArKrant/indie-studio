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
    this->_mesh = GenMeshCubicmap(this->_img, (Vector3){ 1.0f, 1.0f, 1.0f });
    this->_model = LoadModelFromMesh(this->_mesh);
    this->texture = ::LoadTexture(texturePath.c_str());    // Load map texture
    this->_model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = this->texture;             // Set map diffuse texture
    this->mapPosition = { -8.0f, 0.0f, -7.0f };          // Set model position
    ::UnloadImage(this->_img);
    ::SetCameraMode(this->_camera, mode);
    ::SetTargetFPS(60);
}

void Indie::Raylib::Map::draw()
{
    ::UpdateCamera(&this->_camera);
    ::BeginMode3D(this->_camera);
        ::DrawModel(this->_model, this->mapPosition, 1.0f, GRAY);
    ::EndMode3D();
    ::DrawFPS(10, 10);
}

Indie::Raylib::Map::~Map()
{
    ::UnloadTexture(this->cubicmap);    // Unload cubicmap texture
    ::UnloadTexture(this->texture);     // Unload map texture
    ::UnloadModel(this->_model); 
}
