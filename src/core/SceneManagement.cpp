#include "SceneManagement.hpp"
#include "Colors.hpp"

Indie::Core::SceneManagement::SceneManagement(int width, int height, std::string& name) :
_cam(
    Misc::Vector<3>(16.f, 35.0f, 0.0f),
    Misc::Vector<3>(0.0f, 0.0f, 0.0f),
    Misc::Vector<3>(0.0f, 1.0f, 0.0f),
    25.0f, 0)
{
    (void)width;
    (void)height;
    (void)name;
    // this->_window = Indie::Raylib::Core::Core::getInstance(width, height, name);
    Indie::Raylib::Core::Core::getInstance().SetCameraMode(this->_cam, CAMERA_PERSPECTIVE);
    std::unique_ptr<Indie::Scene::SplashScreen> scene = std::make_unique<Indie::Scene::SplashScreen>();
    this->_stack.push(std::move(scene));
}

Indie::Core::SceneManagement::~SceneManagement() {
}

void Indie::Core::SceneManagement::loop() {
    while (!this->_window.WindowShouldClose()) {
        this->_stack.top()->update(*this, this->_window.GetElapsedTime());
        this->_window.BeginDrawing();
        this->_window.ClearBackground(Misc::Colors(0, 0, 0, 0));
        this->_window.UpdateCamera(this->_cam);
        this->_window.BeginMode3D(this->_cam);
        // Ajout de tick //
        this->_stack.top()->draw();
        this->_window.EndMode3D();
        this->_window.EndDrawing();
    }
}

void Indie::Core::SceneManagement::pop() {
    this->_stack.top().reset();
    this->_stack.pop();
}
