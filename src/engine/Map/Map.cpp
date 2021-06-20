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
    _mapPixels = LoadImageColors(_img);
    ::UnloadImage(this->_img);
    ::SetCameraMode(this->_camera, mode);
    ::SetTargetFPS(60);
}

void Indie::Raylib::Map::draw()
{
    //::UpdateCamera(&this->_camera);
    //::BeginMode3D(this->_camera);
    ::DrawModel(this->_model, this->mapPosition, 1.0f, GRAY);
    // ::EndMode3D();
    ::DrawFPS(10, 10);
}

Indie::Raylib::Map::~Map()
{
    ::UnloadTexture(this->cubicmap);    // Unload cubicmap texture
    ::UnloadTexture(this->texture);     // Unload map texture
    ::UnloadModel(this->_model); 
}

bool Indie::Raylib::Map::checkCollision(Misc::Vector<2> playerPos)
{
    float playerRadius = 0.1f;  // Collision radius (player is modelled as a cilinder for collision)

    int playerCellX = (int)(playerPos.getX() - mapPosition.x + 0.5f);
    int playerCellY = (int)(playerPos.getY() - mapPosition.z + 0.5f);

    // Out-of-limits security check
    if (playerCellX < 0) playerCellX = 0;
    else if (playerCellX >= cubicmap.width) playerCellX = cubicmap.width - 1;

    if (playerCellY < 0) playerCellY = 0;
    else if (playerCellY >= cubicmap.height) playerCellY = cubicmap.height - 1;

    // Check map collisions using image data and player position
    // TODO: Improvement: Just check player surrounding cells for collision
    for (int y = 0; y < cubicmap.height; y++) {
        for (int x = 0; x < cubicmap.width; x++) {
            if ((_mapPixels[y * cubicmap.width + x].r == 255) &&       // Collision: white pixel, only check R channel
                (CheckCollisionCircleRec({playerPos.getX(), playerPos.getY()}, playerRadius,
                (Rectangle){ mapPosition.x - 0.5f + x*1.0f, mapPosition.z - 0.5f + y*1.0f, 1.0f, 1.0f }))) {
                // Collision detected, reset camera position
                return true;
            }
        }
    }
    return false;
}