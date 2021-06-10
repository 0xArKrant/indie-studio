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
        namespace Audio {
            class Wave {
                public:
                    Wave(std::string);
                    Wave(std::string, const unsigned char*, int);
                    ~Wave();

                    /**
                     * @brief Export wave data to file, returns true on success
                     *
                     * @param fileName
                     * @return true
                     * @return false
                     */
                    inline bool ExportWave(std::string fileName) const { return ::ExportWave(this->_wave, fileName.c_str()); };
                    /**
                     * @brief Export wave sample data to code (.h), returns true on success
                     *
                     * @param fileName
                     * @return true
                     * @return false
                     */
                    inline bool ExportWaveAsCode(std::string fileName) const { return ::ExportWaveAsCode(this->_wave, fileName.c_str()); };
                private:
                    ::Wave _wave; /*!Wave structure from raylib */
            };

            class Sound {
                public:
                    Sound(std::string);
                    ~Sound();
                    /**
                     * @brief Update sound buffer with new data
                     *
                     * @param data
                     * @param samplesCount
                     */
                    inline void UpdateSound(const void* data, int samplesCount) { ::UpdateSound(this->_sound, data, samplesCount); };
                    /**
                     * @brief Check if a sound is currently playing
                     *
                     * @return true
                     * @return false
                     */
                    inline bool isSoundPlaying(void) const { return ::IsSoundPlaying(this->_sound); };
                    /**
                     * @brief Play a sound
                     *
                     */
                    inline void PlaySound(void) const { ::PlaySound(this->_sound); };
                    /**
                     * @brief Stop a sound
                     *
                     */
                    inline void StopSound(void) const { ::StopSound(this->_sound); };
                    /**
                     * @brief Pause a sound
                     *
                     */
                    inline void PauseSound(void) const { ::PauseSound(this->_sound); };
                    /**
                     * @brief Resume a sound
                     *
                     */
                    inline void ResumeSound(void) const { ::ResumeSound(this->_sound); };
                    /**
                     * @brief Play a sound (using multichannel buffer pool)
                     *
                     */
                    inline void PlaySoundMulti(void) const { ::PlaySoundMulti(this->_sound); };
                    /**
                     * @brief Stop any sound playing (using multichannel buffer pool)
                     *
                     */
                    inline void StopSoundMulti(void) const { ::StopSoundMulti(); };
                    /**
                     * @brief Get the Sounds Playing object
                     *
                     * @return int
                     */
                    inline int GetSoundsPlaying(void) const { return ::GetSoundsPlaying(); };
                    /**
                     * @brief Set the Sound Volume object
                     *
                     * @param volume
                     */
                    inline void SetSoundVolume(float volume) const { ::SetSoundVolume(this->_sound, volume); };
                    /**
                     * @brief Set the Sound Pitch object
                     *
                     * @param pitch
                     */
                    inline void SetSoundPitch(float pitch) const { ::SetSoundPitch(this->_sound, pitch); };

                private:
                    ::Sound _sound; /*!Sound structure from raylib */
            };

            class Music {
                public:
                    Music(std::string);
                    Music(std::string, unsigned char*, int);
                    ~Music();
                    /**
                     * @brief Check if music is playing
                     *
                     * @return true
                     * @return false
                     */
                    inline bool isMusicStreamPlaying(void) const { return ::IsMusicStreamPlaying(this->_music); };
                    /**
                     * @brief Updates buffers for music streaming
                     *
                     */
                    inline void UpdateMusicStream(void) const { ::UpdateMusicStream(this->_music); };
                    /**
                     * @brief Start music playing
                     *
                     */
                    inline void PlayMusicStream(void) const { ::PlayMusicStream(this->_music); };
                    /**
                     * @brief Stop music playing
                     *
                     */
                    inline void StopMusicStream(void) const { ::StopMusicStream(this->_music); };
                    /**
                     * @brief Pause music playing
                     *
                     */
                    inline void PauseMusicStream(void) const { ::PauseMusicStream(this->_music); };
                    /**
                     * @brief Resume music playing
                     *
                     */
                    inline void ResumeMusicStream(void) const { ::ResumeMusicStream(this->_music); };
                    /**
                     * @brief Set the Music Volume object
                     *
                     * @param volume
                     */
                    inline void SetMusicVolume(float volume) { ::SetMusicVolume(this->_music, volume); };
                    /**
                     * @brief Set volume for music (1.0 is max level)
                     *
                     * @param pitch
                     */
                    inline void SetMusicPitch(float pitch) { ::SetMusicPitch(this->_music, pitch); };
                    /**
                     * @brief Set pitch for a music (1.0 is base level)
                     *
                     * @return float
                     */
                    inline float GetMusicTimeLength(void) const { return ::GetMusicTimeLength(this->_music); };
                    /**
                     * @brief Get current music time played (in seconds)
                     *
                     * @return float
                     */
                    inline float GetMusicTimePlayed(void) const { return ::GetMusicTimePlayed(this->_music); };

                private:
                    ::Music _music; /*! Music structure from raylib */
            };

            class AudioStream {
                public:
                    AudioStream(unsigned int, unsigned int, unsigned int);
                    ~AudioStream();

                    /**
                     * @brief Update audio stream buffers with data
                     *
                     * @param data
                     * @param samplesCount
                     */
                    inline void UpdateAudioStream(const void* data, int samplesCount) const { ::UpdateAudioStream(this->_audiostream, data, samplesCount); };
                    /**
                     * @brief Check if any audio stream buffers requires refill
                     *
                     * @return true
                     * @return false
                     */
                    inline bool isAudioStreamProcessed(void) const { return ::IsAudioStreamProcessed(this->_audiostream); };
                    /**
                     * @brief Check if audio stream is playing
                     *
                     * @return true
                     * @return false
                     */
                    inline bool isAudioStreamPlaying(void) const { return ::IsAudioStreamPlaying(this->_audiostream); };

                    /**
                     * @brief Play audio stream
                     *
                     */
                    inline void PlayAudioStream(void) const { ::PlayAudioStream(this->_audiostream); };
                    /**
                     * @brief Pause audio stream
                     *
                     */
                    inline void PauseAudioStream(void) const { ::PauseAudioStream(this->_audiostream); };
                    /**
                     * @brief Resume audio stream
                     *
                     */
                    inline void ResumeAudioStream(void) const { ::ResumeAudioStream(this->_audiostream); };
                    /**
                     * @brief Stop audio stream
                     *
                     */
                    inline void StopAudioStream(void) const { ::StopAudioStream(this->_audiostream); };

                    /**
                     * @brief Set volume for audio stream (1.0 is max level)
                     *
                     * @param volume
                     */
                    inline void SetAudioStreamVolume(float volume) const { ::SetAudioStreamVolume(this->_audiostream, volume); };
                    /**
                     * @brief Set pitch for audio stream (1.0 is base level)
                     *
                     * @param pitch
                     */
                    inline void SetAudioStreamPitch(float pitch) const { ::SetAudioStreamPitch(this->_audiostream, pitch); };
                    /**
                     * @brief Default size for new audio streams
                     *
                     * @param size
                     */
                    inline void SetAudioStreamBufferSizeDefault(int size) const { ::SetAudioStreamBufferSizeDefault(size); };

                private:
                    ::AudioStream _audiostream; /*!Audiostream structure from raylib */
            };
        } // namespace Audio
    } // namespace Raylib
} // namespace Indie