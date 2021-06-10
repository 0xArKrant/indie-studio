/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Core
*/

#pragma once

#include "ICore.hpp"
#include "Colors.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core {
            class Core : public ICore {
                public:
                    static Core& getInstance(int width, int height, const std::string& title);
                    // Core(Core &) = delete;
                    //void operator=(const Core &) = delete;

                    //Getter
                    inline Cursor getCursor() const { return this->_cursor; };
                    inline InputGamepads getInputGamepads() const { return this->_inputGamepas; };
                    inline InputKeyboard getInputKeybord() const { return this->_inputKeyboard; };
                    inline InputMouse getInputMouse() const { return this->_inputMouse; };

                    //Window
                    inline bool WindowShouldClose(void) const { return ::WindowShouldClose(); };
                    inline bool IsWindowReady(void) const { return ::IsWindowReady(); };
                    inline bool IsWindowFullscreen(void) const { return ::IsWindowFullscreen(); };
                    inline bool IsWindowHidden(void) const { return ::IsWindowHidden(); };
                    inline bool IsWindowMinimized(void) const { return ::IsWindowMinimized(); };
                    inline bool IsWindowMaximized(void) const { return ::IsWindowMaximized(); };
                    inline bool IsWindowFocused(void) const { return ::IsWindowFocused(); };
                    inline bool IsWindowResized(void) const { return ::IsWindowResized(); };
                    inline bool IsWindowState(unsigned int flag) const { return ::IsWindowState(flag); };

                    inline void SetWindowState(unsigned int flags) const { ::SetWindowState(flags); };
                    inline void ClearWindowState(unsigned int flags) const { ::ClearWindowState(flags); };
                    inline void ToggleFullscreen(void) const { ::ToggleFullscreen(); };
                    inline void MaximizeWindow(void) const { ::MaximizeWindow(); };
                    inline void MinimizeWindow(void) const { ::MinimizeWindow(); };
                    inline void RestoreWindow(void) const { ::RestoreWindow(); };

                    inline void SetWindowIcon(Image image) const { ::SetWindowIcon(image); };
                    inline void SetWindowTitle(const std::string& title) const { ::SetWindowTitle(title.c_str()); };
                    inline void SetWindowPosition(int x, int y) const { ::SetWindowPosition(x, y); };
                    inline void SetWindowMonitor(int monitor) const { ::SetWindowMonitor(monitor); };
                    inline void SetWindowMinSize(int width, int height) const { ::SetWindowMinSize(width, height); };
                    inline void SetWindowSize(int width, int height) const { ::SetWindowSize(width, height); };

                    inline void* GetWindowHandle(void) const { return ::GetWindowHandle(); };
                    inline int GetScreenHeight(void) const { return ::GetScreenHeight(); };

                    inline int GetMonitorCount(void) const { return ::GetMonitorCount(); };
                    inline int GetCurrentMonitor(void) const { return ::GetCurrentMonitor(); };
                    inline int GetMonitorWidth(int monitor) const { return ::GetMonitorWidth(monitor); };
                    inline int GetMonitorHeight(int monitor) const { return ::GetMonitorHeight(monitor); };
                    inline int GetMonitorPhysicalWidth(int monitor) const { return ::GetMonitorPhysicalWidth(monitor); };
                    inline int GetMonitorPhysicalHeight(int monitor) const { return ::GetMonitorPhysicalHeight(monitor); };
                    inline int GetMonitorRefreshRate(int monitor) const { return ::GetMonitorRefreshRate(monitor); };

                    Misc::Vector<2> GetMonitorPosition(int monitor);
                    Misc::Vector<2> GetWindowPosition(void);
                    Misc::Vector<2> GetWindowScaleDPI(void);

                    inline const std::string GetClipboardText(void) const { return std::string(::GetClipboardText()); };
                    inline const std::string GetMonitorName(int monitor) const { return std::string(::GetMonitorName(monitor)); };

                    inline void SetClipboardText(const std::string& text) { ::SetClipboardText(text.c_str()); };

                    //Drawing
                    inline void ClearBackground(Misc::Colors color) { ::ClearBackground(::Color{ color.getR(), color.getG(), color.getB(), color.getA() }); };

                    inline void BeginDrawing(void) { ::BeginDrawing(); };
                    inline void BeginMode2D(Camera2D camera) { ::BeginMode2D(camera); };
                    inline void BeginMode3D(Camera3D camera) { ::BeginMode3D(camera); };
                    inline void BeginTextureMode(RenderTexture2D target) { ::BeginTextureMode(target); };

                    inline void EndDrawing(void) { ::EndDrawing(); };
                    inline void EndMode2D(void) { ::EndMode2D(); };
                    inline void EndMode3D(void) { ::EndMode3D(); };
                    inline void EndTextureMode(void) { ::EndTextureMode(); };

                    //Timing-related function
                    inline void SetTargetFPS(int fps) const { ::SetTargetFPS(fps); };
                    inline int GetFPS(void) const { return ::GetFPS(); };
                    inline float GetFrameTime(void) const { return ::GetFrameTime(); };
                    inline double GetTime(void) const { return ::GetTime(); };

                private:
                    Core(int width, int height, const std::string& title);
                    ~Core();
                    Cursor _cursor;
                    InputGamepads _inputGamepas;
                    InputKeyboard _inputKeyboard;
                    InputMouse _inputMouse;
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie