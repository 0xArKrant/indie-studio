/*
** EPITECH PROJECT, 2021
** tmp
** File description:
** MainMenu
*/

#include "MainMenu.hpp"

Indie::Scene::MainMenu::MainMenu()
{
    this->_background = ::LoadImage("./assets/menu/background.png");
    this->_play = ::LoadImage("./assets/menu/play.png");
    this->_quit = ::LoadImage("./assets/menu/quit.png");
    this->_title = ::LoadImage("./assets/menu/bomberman.png");
    this->_texturebg = ::LoadTextureFromImage(this->_background);
    this->_textureplay = ::LoadTextureFromImage(this->_play);
    this->_texturequit = ::LoadTextureFromImage(this->_quit);
    this->_texturetitle = ::LoadTextureFromImage(this->_title);
    this->_playrec = { 200, 600, (float)this->_textureplay.width, (float)this->_textureplay.height };
    this->_quitrec = { 200, 800, (float)this->_texturequit.width, (float)this->_texturequit.height };
    this->_sourceRecQuit = { 0, 0, (float)this->_texturequit.width, (float)this->_texturequit.height};
    this->_sourceRecPlay = { 0, 0, (float)this->_textureplay.width, (float)this->_textureplay.height};
}


Indie::Scene::MainMenu::~MainMenu()
{
    ::UnloadTexture(this->_texturebg);
    ::UnloadTexture(this->_textureplay);
    ::UnloadTexture(this->_texturequit);
    ::UnloadTexture(this->_texturetitle);
    ::UnloadImage(this->_background);
    ::UnloadImage(this->_title);
    ::UnloadImage(this->_play);
    ::UnloadImage(this->_quit);
}

void Indie::Scene::MainMenu::update(Indie::Core::SceneManagement &scenemanagement, const double &elapsed)
{
    (void) elapsed;
    auto mousePoint = GetMousePosition();
    if (CheckCollisionPointRec(mousePoint, this->_playrec)) {
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
            scenemanagement.push<Indie::Scene::GameScene>();
    }
    if (CheckCollisionPointRec(mousePoint, this->_quitrec)) {
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
            ::CloseWindow();
    }
    if (IsKeyPressed(KEY_P))
        scenemanagement.push<Indie::Scene::GameScene>();
}

void Indie::Scene::MainMenu::draw()
{
    ::DrawTexture(this->_texturebg, 0, 0, {255, 255, 255, 255});
    ::DrawTexture(this->_texturetitle, 20, 20, {255, 255, 255, 255});
    ::DrawTextureRec(this->_textureplay, this->_sourceRecPlay ,(Vector2){this->_playrec.x, this->_playrec.y }, {255, 255, 255, 255});
    ::DrawTextureRec(this->_texturequit, this->_sourceRecQuit,(Vector2){this->_quitrec.x, this->_quitrec.y }, {255, 255, 255, 255});
}