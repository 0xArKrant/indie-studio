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

namespace Indie {
    namespace Raylib {
        namespace Core {
            class Core : public ICore {
                public:
                    static Core& getInstance(int width, int height, const std::string& title);
                    // Core(Core &) = delete;
                    //void operator=(const Core &) = delete;

                    //Getter
                    inline Cursor getCursor()               const { return this->_cursor;        }; /*! Cursor class @return Indie::Raylib::Core::Cursor */
                    inline InputGamepads getInputGamepads() const { return this->_inputGamepads; }; /*! InputGamepads class @return Indie::Raylib::Core::Cursor */
                    inline InputKeyboard getInputKeyboard() const { return this->_inputKeyboard; }; /*! InputKeyboard class @return Indie::Raylib::Core::Cursor */
                    inline InputMouse getInputMouse()       const { return this->_inputMouse;    }; /*! InputMouse class @return Indie::Raylib::Core::Cursor */

                    //Window
                    inline bool WindowShouldClose(void)          const { return ::WindowShouldClose();  }; /*! Check if KEY_ESCAPE pressed or Close icon pressed @return true/false */
                    inline bool IsWindowReady(void)              const { return ::IsWindowReady();      }; /*! Check if window has been initialized successfully @return true/false */
                    inline bool IsWindowFullscreen(void)         const { return ::IsWindowFullscreen(); }; /*! Check if window is currently fullscreen @return true/false */
                    inline bool IsWindowHidden(void)             const { return ::IsWindowHidden();     }; /*! Check if window is currently hidden @return true/false */
                    inline bool IsWindowMinimized(void)          const { return ::IsWindowMinimized();  }; /*! Check if window is currently minimized @return true/false */
                    inline bool IsWindowMaximized(void)          const { return ::IsWindowMaximized();  }; /*! Check if window is currently maximized @return true/false */
                    inline bool IsWindowFocused(void)            const { return ::IsWindowFocused();    }; /*! Check if window is currently focused @return true/false */
                    inline bool IsWindowResized(void)            const { return ::IsWindowResized();    }; /*! Check if window has been resized last frame @return true/false */
                    inline bool IsWindowState(unsigned int flag) const { return ::IsWindowState(flag);  }; /*! Check if one specific window flag is enabled @return true/false */

                    inline void SetWindowState(unsigned int flags)   const { ::SetWindowState(flags);   }; /*! Set window configuration state using flags @param flags */
                    inline void ClearWindowState(unsigned int flags) const { ::ClearWindowState(flags); }; /*! Clear window configuration state flags @param flags*/
                    inline void ToggleFullscreen(void)               const { ::ToggleFullscreen();      }; /*! Toggle window state: fullscreen/windowed */
                    inline void MaximizeWindow(void)                 const { ::MaximizeWindow();        }; /*! Set window state: maximized, if resizable */
                    inline void MinimizeWindow(void)                 const { ::MinimizeWindow();        }; /*! Set window state: minimized, if resizable */
                    inline void RestoreWindow(void)                  const { ::RestoreWindow();         }; /*! Set window state: not minimized/maximized */

                    inline void SetWindowIcon(Image image)               const { ::SetWindowIcon(image);            }; /*! Set icon for window @param image*/
                    inline void SetWindowTitle(const std::string& title) const { ::SetWindowTitle(title.c_str());   }; /*! Set title for window @param title*/
                    inline void SetWindowPosition(int x, int y)          const { ::SetWindowPosition(x, y);         }; /*! Set window position on screen @param x @param y*/
                    inline void SetWindowMonitor(int monitor)            const { ::SetWindowMonitor(monitor);       }; /*! Set monitor for the current window @param monitor*/
                    inline void SetWindowMinSize(int width, int height)  const { ::SetWindowMinSize(width, height); }; /*! Set window minimum dimensions @param width @param height*/
                    inline void SetWindowSize(int width, int height)     const { ::SetWindowSize(width, height);    }; /*! Set window dimensions @param width @param height*/

                    inline void* GetWindowHandle(void) const { return ::GetWindowHandle(); }; /*! Get native window handle @return void* */
                    inline int GetScreenWidth(void)    const { return ::GetScreenWidth();  }; /*! Get current screen width @return int */
                    inline int GetScreenHeight(void)   const { return ::GetScreenHeight(); }; /*! Get current screen height @return int */

                    inline int GetMonitorCount(void)                 const { return ::GetMonitorCount();                 }; /*! Get number of connected monitors @return int */
                    inline int GetCurrentMonitor(void)               const { return ::GetCurrentMonitor();               }; /*! Get current connected monitor @return int*/
                    inline int GetMonitorWidth(int monitor)          const { return ::GetMonitorWidth(monitor);          }; /*! Get specified monitor width (max available by monitor) @param monitor @return int */
                    inline int GetMonitorHeight(int monitor)         const { return ::GetMonitorHeight(monitor);         }; /*! Get specified monitor height (max available by monitor) @param monitor @return int */
                    inline int GetMonitorPhysicalWidth(int monitor)  const { return ::GetMonitorPhysicalWidth(monitor);  }; /*! Get specified monitor physical width in millimetres @param monitor @return int */
                    inline int GetMonitorPhysicalHeight(int monitor) const { return ::GetMonitorPhysicalHeight(monitor); }; /*! Get specified monitor physical width in millimetres @param monitor @return int */
                    inline int GetMonitorRefreshRate(int monitor)    const { return ::GetMonitorRefreshRate(monitor);    }; /*! Get specified monitor refresh rate @param monitor @return int */

                    Misc::Vector<2> GetMonitorPosition(int monitor);
                    Misc::Vector<2> GetWindowPosition(void);
                    Misc::Vector<2> GetWindowScaleDPI(void);

                    inline const std::string GetClipboardText(void)      const { return std::string(::GetClipboardText());      }; /*! Get clipboard text content @return std::string */
                    inline const std::string GetMonitorName(int monitor) const { return std::string(::GetMonitorName(monitor)); }; /*! Get the human-readable, UTF-8 encoded name of the primary monitor @param monitor @return std::string*/

                    inline void SetClipboardText(const std::string& text) { ::SetClipboardText(text.c_str()); }; /*! Set clipboard text content @param text @return std::string */

                    //Drawing
                    inline void ClearBackground(Misc::Colors color) { ::ClearBackground(::Color{ color.getR(), color.getG(), color.getB(), color.getA() }); }; /*! Set background color (framebuffer clear color) @param color */

                    inline void BeginDrawing(void)                       { ::BeginDrawing();           }; /*! Setup canvas (framebuffer) to start drawing */
                    inline void BeginMode2D(Camera2D camera)             { ::BeginMode2D(camera);      }; /*! Initialize 2D mode with custom camera (2D) @param camera*/
                    inline void BeginMode3D(Camera3D camera)             { ::BeginMode3D(camera);      }; /*! Initializes 3D mode with custom camera (3D) @param camera */
                    inline void BeginTextureMode(RenderTexture2D target) { ::BeginTextureMode(target); }; /*! Initializes render texture for drawing @param target */

                    inline void EndDrawing(void)     { ::EndDrawing();     }; /*! End canvas drawing and swap buffers (double buffering) */
                    inline void EndMode2D(void)      { ::EndMode2D();      }; /*! Ends 2D mode with custom camera */
                    inline void EndMode3D(void)      { ::EndMode3D();      }; /*! Ends 3D mode and returns to default 2D orthographic mode */
                    inline void EndTextureMode(void) { ::EndTextureMode(); }; /*! Ends drawing to render texture */

                    //Timing-related function
                    inline void   SetTargetFPS(int fps) const { ::SetTargetFPS(fps);     }; /*! Set target FPS (maximum) @param fps*/
                    inline int    GetFPS(void)          const { return ::GetFPS();       }; /*! Returns current FPS @return int */
                    inline float  GetFrameTime(void)    const { return ::GetFrameTime(); }; /*! Returns time in seconds for last frame drawn (delta time) @return float */
                    inline double GetTime(void)         const { return ::GetTime();      }; /*! Returns elapsed time in seconds since Core::GetInstance() @return double */

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