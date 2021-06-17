/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu()
{

    this->_camera = { { 16.0f, 14.0f, 16.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f }, 45.0f, 0 };

    this->_img = LoadImage("./src/scene/cubicmap.png");      // Load cubicmap image (RAM)
    this->cubicmap = LoadTextureFromImage(this->_img);       // Convert image to texture to display (VRAM)

    this->_mesh = GenMeshCubicmap(this->_img, (Vector3){ 1.0f, 1.0f, 1.0f });
    this->_model = LoadModelFromMesh(this->_mesh);
    this->texture = LoadTexture("./src/scene//cubicmap_atlas.png");    // Load map texture
    this->_model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = this->texture;             // Set map diffuse texture
    this->mapPosition = { -8.0f, 0.0f, -8.0f };          // Set model position


    UnloadImage(this->_img);     // Unload cubesmap image from RAM, already uploaded to VRAM

    SetCameraMode(this->_camera, CAMERA_ORBITAL);
    SetTargetFPS(60);
}

Indie::Scene::MainMenu::~MainMenu()
{
}

void Indie::Scene::MainMenu::setMenu()
{

}

void Indie::Scene::MainMenu::update(Indie::Core::SceneManagement &scenemanagement)
{
    (void) scenemanagement;
}

void Indie::Scene::MainMenu::draw()
{
    UpdateCamera(&this->_camera);
    BeginMode3D(this->_camera);
        DrawModel(this->_model, this->mapPosition, 1.0f, GRAY);
    EndMode3D();
    DrawFPS(10, 10);
}