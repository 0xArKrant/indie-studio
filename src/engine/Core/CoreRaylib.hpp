/**
 * @file CoreRaylib.hpp
 * @author QuentinMarchand1
 * @author RaphMandica
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of the core module from raylib
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "ICore.hpp"
#include "Colors.hpp"
#include "Camera.hpp"

namespace Indie {
    namespace Raylib {
        namespace Core {
            class Core : public ICore {
                public:
                    static Core& getInstance(void);
                    // Core(Core &) = delete;
                    // void operator=(const Core &) = delete;

                    //Getter
                    /**
                     * @brief Get the Cursor object
                     *
                     * @return Cursor
                     */
                    inline Cursor getCursor() const { return this->_cursor; };
                    /**
                     * @brief Get the Input Gamepads object
                     *
                     * @return InputGamepads
                     */
                    inline InputGamepads getInputGamepads() const { return this->_inputGamepads; };
                    /**
                     * @brief Get the Input Keyboard object
                     *
                     * @return InputKeyboard
                     */
                    inline InputKeyboard getInputKeyboard() const { return this->_inputKeyboard; };
                    /**
                     * @brief Get the Input Mouse object
                     *
                     * @return InputMouse
                     */
                    inline InputMouse getInputMouse() const { return this->_inputMouse; };

                    //Window
                    /**
                     * @brief Check if KEY_ESCAPE pressed or Close icon pressed
                     *
                     * @return true
                     * @return false
                     */
                    inline bool WindowShouldClose(void) const { return ::WindowShouldClose(); };
                    /**
                     * @brief Check if window has been initialized successfully
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowReady(void) const { return ::IsWindowReady(); };
                    /**
                     * @brief Check if window is currently fullscreen
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowFullscreen(void) const { return ::IsWindowFullscreen(); };
                    /**
                     * @brief Check if window is currently hidden
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowHidden(void) const { return ::IsWindowHidden(); };
                    /**
                     * @brief Check if window is currently minimized
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowMinimized(void) const { return ::IsWindowMinimized(); };
                    /**
                     * @brief Check if window is currently maximized
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowMaximized(void) const { return ::IsWindowMaximized(); };
                    /**
                     * @brief Check if window is currently focused
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowFocused(void) const { return ::IsWindowFocused(); };
                    /**
                     * @brief Check if window has been resized last frame
                     *
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowResized(void) const { return ::IsWindowResized(); };
                    /**
                     * @brief Check if one specific window flag is enabled
                     *
                     * @param flag
                     * @return true
                     * @return false
                     */
                    inline bool IsWindowState(unsigned int flag) const { return ::IsWindowState(flag); };

                    /**
                     * @brief Set window configuration state using flags
                     *
                     * @param flags
                     */
                    inline void SetWindowState(unsigned int flags) const { ::SetWindowState(flags); };
                    /**
                     * @brief Clear window configuration state flags
                     *
                     * @param flags
                     */
                    inline void ClearWindowState(unsigned int flags) const { ::ClearWindowState(flags); };
                    /**
                     * @brief Toggle window state: fullscreen/windowed
                     *
                     */
                    inline void ToggleFullscreen(void) const { ::ToggleFullscreen(); };
                    /**
                     * @brief Set window state: maximized, if resizable
                     *
                     */
                    inline void MaximizeWindow(void) const { ::MaximizeWindow(); };
                    /**
                     * @brief Set window state: minimized, if resizable
                     *
                     */
                    inline void MinimizeWindow(void) const { ::MinimizeWindow(); };
                    /**
                     * @brief Set window state: not minimized/maximized
                     *
                     */
                    inline void RestoreWindow(void) const { ::RestoreWindow(); };

                    /**
                     * @brief Set icon for window
                     *
                     * @param image
                     */
                    inline void SetWindowIcon(Image image) const { ::SetWindowIcon(image); };
                    /**
                     * @brief Set title for window
                     *
                     * @param title
                     */
                    inline void SetWindowTitle(const std::string& title) const { ::SetWindowTitle(title.c_str()); };
                    /**
                     * @brief Set window position on screen
                     *
                     * @param x
                     * @param y
                     */
                    inline void SetWindowPosition(int x, int y) const { ::SetWindowPosition(x, y); };
                    /**
                     * @brief Set monitor for the current window
                     *
                     * @param monitor
                     */
                    inline void SetWindowMonitor(int monitor) const { ::SetWindowMonitor(monitor); };
                    /**
                     * @brief Set window minimum dimensions
                     *
                     * @param width
                     * @param height
                     */
                    inline void SetWindowMinSize(int width, int height)  const { ::SetWindowMinSize(width, height); };
                    /**
                     * @brief Set window dimensions
                     *
                     * @param width
                     * @param height
                     */
                    inline void SetWindowSize(int width, int height) const { ::SetWindowSize(width, height); };

                    /**
                     * @brief Get native window handle
                     *
                     * @return void*
                     */
                    inline void* GetWindowHandle(void) const { return ::GetWindowHandle(); };
                    /**
                     * @brief Get current screen width
                     *
                     * @return int
                     */
                    inline int GetScreenWidth(void) const { return ::GetScreenWidth(); };
                    /**
                     * @brief Get current screen height
                     *
                     * @return int
                     */
                    inline int GetScreenHeight(void) const { return ::GetScreenHeight(); };

                    /**
                     * @brief Get number of connected monitors
                     *
                     * @return int
                     */
                    inline int GetMonitorCount(void) const { return ::GetMonitorCount(); };
                    /**
                     * @brief Get current connected monitor
                     *
                     * @return int
                     */
                    inline int GetCurrentMonitor(void) const { return ::GetCurrentMonitor(); };
                    /**
                     * @brief Get specified monitor width (max available by monitor)
                     *
                     * @param monitor
                     * @return int
                     */
                    inline int GetMonitorWidth(int monitor) const { return ::GetMonitorWidth(monitor); };
                    /**
                     * @brief Get specified monitor height (max available by monitor)
                     *
                     * @param monitor
                     * @return int
                     */
                    inline int GetMonitorHeight(int monitor) const { return ::GetMonitorHeight(monitor); };
                    /**
                     * @brief Get specified monitor physical width in millimetres
                     *
                     * @param monitor
                     * @return int
                     */
                    inline int GetMonitorPhysicalWidth(int monitor) const { return ::GetMonitorPhysicalWidth(monitor); };
                    /**
                     * @brief Get specified monitor physical height in millimetres
                     *
                     * @param monitor
                     * @return int
                     */
                    inline int GetMonitorPhysicalHeight(int monitor) const { return ::GetMonitorPhysicalHeight(monitor); };
                    /**
                     * @brief Get specified monitor refresh rate
                     *
                     * @param monitor
                     * @return int
                     */
                    inline int GetMonitorRefreshRate(int monitor) const { return ::GetMonitorRefreshRate(monitor); };

                    Misc::Vector<2> GetMonitorPosition(int monitor);
                    Misc::Vector<2> GetWindowPosition(void);
                    Misc::Vector<2> GetWindowScaleDPI(void);
                    void SetCameraMode(Misc::Camera3D, int);

                    void UpdateCamera(Misc::Camera3D &);

                    /**
                     * @brief Get clipboard text content
                     *
                     * @return const std::string
                     */
                    inline const std::string GetClipboardText(void) const { return std::string(::GetClipboardText()); };
                    /**
                     * @brief Get the human-readable, UTF-8 encoded name of the primary monitor
                     *
                     * @param monitor
                     * @return const std::string
                     */
                    inline const std::string GetMonitorName(int monitor) const { return std::string(::GetMonitorName(monitor)); };

                    /**
                     * @brief Set clipboard text content
                     *
                     * @param text
                     */
                    inline void SetClipboardText(const std::string& text) { ::SetClipboardText(text.c_str()); };

                    /**
                     * @brief Set background color (framebuffer clear color)
                     *
                     * @param color
                     */
                    inline void ClearBackground(Misc::Colors color) { ::ClearBackground(::Color{ color.getR(), color.getG(), color.getB(), color.getA() }); };

                    /**
                     * @brief Setup canvas (framebuffer) to start drawing
                     *
                     */
                    inline void BeginDrawing(void) { ::BeginDrawing(); };
                    /**
                     * @brief Initialize 2D mode with custom camera (2D)
                     *
                     * @param camera
                     */
                    inline void BeginMode2D(Camera2D camera) { ::BeginMode2D(camera); };
                    /**
                     * @brief Initializes 3D mode with custom camera (3D)
                     *
                     * @param camera
                     */
                    inline void BeginMode3D(Camera3D camera) { ::BeginMode3D(camera); };
                    /**
                     * @brief Initializes render texture for drawing
                     *
                     * @param target
                     */
                    inline void BeginTextureMode(RenderTexture2D target) { ::BeginTextureMode(target); };

                    /**
                     * @brief End canvas drawing and swap buffers (double buffering)
                     *
                     */
                    inline void EndDrawing(void) { ::EndDrawing(); };
                    /**
                     * @brief Ends 2D mode with custom camera
                     *
                     */
                    inline void EndMode2D(void) { ::EndMode2D(); };
                    /**
                     * @brief Ends 3D mode and returns to default 2D orthographic mode
                     *
                     */
                    inline void EndMode3D(void) { ::EndMode3D(); };
                    /**
                     * @brief Ends drawing to render texture
                     *
                     */
                    inline void EndTextureMode(void) { ::EndTextureMode(); };

                    /**
                     * @brief Set target FPS (maximum)
                     *
                     * @param fps
                     */
                    inline void SetTargetFPS(int fps) const { ::SetTargetFPS(fps); };
                    /**
                     * @brief Returns current FPS
                     *
                     * @return int
                     */
                    inline int GetFPS(void) const { return ::GetFPS(); };
                    /**
                     * @brief Returns time in seconds for last frame drawn (delta time)
                     *
                     * @return float
                     */
                    inline float GetFrameTime(void) const { return ::GetFrameTime(); };
                    /**
                     * @brief Returns elapsed time in seconds since InitWindow()
                     *
                     * @return double
                     */
                    inline double GetTime(void) const { return ::GetTime(); };
                private:
                    Core(int width, int height, const std::string& title);
                    ~Core();
                    Cursor        _cursor; /*! Cursor class for events */
                    InputGamepads _inputGamepads; /*! InputGamePads class for events */
                    InputKeyboard _inputKeyboard; /*! InputKeyboard class for events */
                    InputMouse    _inputMouse; /*! InputMouse class for events */
            };
        } // namespace Core
    } // namespace Raylib
} // namespace Indie