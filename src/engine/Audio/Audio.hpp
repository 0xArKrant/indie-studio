/**
 * @file Audio.hpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Encapsulation of the audio module from raylib
 * @version 0.1
 * @date 2021-06-10
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#pragma once

#include "indie.hpp"
namespace Indie {
    namespace Raylib {
        namespace Audio     {
            class Wave         {
                public:
                    Wave(std::string);
                    Wave(std::string, const unsigned char*, int);
                    ~Wave();

                    inline bool ExportWave(std::string fileName)       const { return ::ExportWave(this->_wave, fileName.c_str());       }; /*! < Export wave data to file @param fileName @return true on success @*/
                    inline bool ExportWaveAsCode(std::string fileName) const { return ::ExportWaveAsCode(this->_wave, fileName.c_str()); };  /*! < Export wave sample data to code @param fileName @return true on success @*/
                private:
                    ::Wave _wave; /*!< Wave structure from raylib */
            };

            class Sound         {
                public:
                    Sound(std::string);
                    ~Sound();

                    inline void UpdateSound(const void* data, int samplesCount) { ::UpdateSound(this->_sound, data, samplesCount); }; /*! < Update sound buffer with new data @param data @param samplesCount*/

                    inline bool isSoundPlaying(void) const { return ::IsSoundPlaying(this->_sound); }; /*! < Check if a sound is currently playing @return bool State of sound */

                    inline void PlaySound(void)      const { ::PlaySound(this->_sound);      }; /*! < Play a sound */
                    inline void StopSound(void)      const { ::StopSound(this->_sound);      }; /*! < Stop playing a sound */
                    inline void PauseSound(void)     const { ::PauseSound(this->_sound);     }; /*! < Pause a sound */
                    inline void ResumeSound(void)    const { ::ResumeSound(this->_sound);    }; /*! < Resume a paused sound */
                    inline void PlaySoundMulti(void) const { ::PlaySoundMulti(this->_sound); }; /*! < Play a sound (using multichannel buffer pool) */
                    inline void StopSoundMulti(void) const { ::StopSoundMulti();             }; /*! < Stop any sound playing (using multichannel buffer pool) */

                    inline int GetSoundsPlaying(void) const { return ::GetSoundsPlaying(); }; /*! < Get number of sounds playing in the multichannel @return Number of sounds */

                    inline void SetSoundVolume(float volume) const { ::SetSoundVolume(this->_sound, volume); }; /*! < Set volume for a sound (1.0 is max level) @param volume */
                    inline void SetSoundPitch(float pitch)   const { ::SetSoundPitch(this->_sound, pitch);   }; /*! < Set pitch for a sound (1.0 is base level) @param pitch */

                private:
                    ::Sound _sound; /*!< Sound structure from raylib */
            };

            class Music         {
                public:
                    Music(std::string);
                    Music(std::string, unsigned char*, int);
                    ~Music();

                    inline bool isMusicStreamPlaying(void) const { return ::IsMusicStreamPlaying(this->_music); }; /*! < Check if a sound is currently playing @return bool State of sound */
                    inline void UpdateMusicStream(void)    const { ::UpdateMusicStream(this->_music);           }; /*! < Updates buffers for music streaming */

                    inline void PlayMusicStream(void)   const { ::PlayMusicStream(this->_music);   }; /*! < Start music playing */
                    inline void StopMusicStream(void)   const { ::StopMusicStream(this->_music);   }; /*! < Stop music playing */
                    inline void PauseMusicStream(void)  const { ::PauseMusicStream(this->_music);  }; /*! < Pause music playing */
                    inline void ResumeMusicStream(void) const { ::ResumeMusicStream(this->_music); }; /*! < Resume music playing */

                    inline void SetMusicVolume(float volume) { ::SetMusicVolume(this->_music, volume); }; /*! < Set volume for music (1.0 is max level) @param volume */
                    inline void SetMusicPitch(float pitch)   { ::SetMusicPitch(this->_music, pitch);   }; /*! < Set pitch for a music (1.0 is base level) @param pitch */

                    inline float GetMusicTimeLength(void) const { return ::GetMusicTimeLength(this->_music); }; /*! < Get music time length (in seconds) @return music length */
                    inline float GetMusicTimePlayed(void) const { return ::GetMusicTimePlayed(this->_music); }; /*! < Get current music time played (in seconds) @return music time played */

                private:
                    ::Music _music; /*! < Music structure from raylib */
            };

            class AudioStream         {
                public:
                    AudioStream(unsigned int, unsigned int, unsigned int);
                    ~AudioStream();

                    inline void UpdateAudioStream(const void* data, int samplesCount) const { ::UpdateAudioStream(this->_audiostream, data, samplesCount); };  /*! < Update audio stream buffers with data @param data @param samplesCount */

                    inline bool isAudioStreamProcessed(void) const { return ::IsAudioStreamProcessed(this->_audiostream); }; /*! < Check if any audio stream buffers requires refill @return bool status */
                    inline bool isAudioStreamPlaying(void)   const { return ::IsAudioStreamPlaying(this->_audiostream);   }; /*! < Check if audio stream is playing @return bool status */

                    inline void PlayAudioStream(void)   const { ::PlayAudioStream(this->_audiostream);   }; /*! < Play audio stream */
                    inline void PauseAudioStream(void)  const { ::PauseAudioStream(this->_audiostream);  }; /*! < Pause audio stream */
                    inline void ResumeAudioStream(void) const { ::ResumeAudioStream(this->_audiostream); }; /*! < Resume audio stream */
                    inline void StopAudioStream(void)   const { ::StopAudioStream(this->_audiostream);   }; /*! < Stop audio stream */

                    inline void SetAudioStreamVolume(float volume)        const { ::SetAudioStreamVolume(this->_audiostream, volume); }; /*! < Set volume for audio stream (1.0 is max level) @param volume*/
                    inline void SetAudioStreamPitch(float pitch)          const { ::SetAudioStreamPitch(this->_audiostream, pitch);   }; /*! < Set pitch for audio stream (1.0 is base level) @param pitch */
                    inline void SetAudioStreamBufferSizeDefault(int size) const { ::SetAudioStreamBufferSizeDefault(size);            }; /*! < Default size for new audio streams @param size */

                private:
                    ::AudioStream _audiostream; /*!< Audiostream structure from raylib */
            };
        } // namespace Audio
    } // namespace Raylib
} // namespace Indie