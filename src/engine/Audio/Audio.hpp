/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Audio
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

                    inline bool ExportWave(std::string fileName) const { return ::ExportWave(this->_wave, fileName.c_str()); };
                    inline bool ExportWaveAsCode(std::string fileName) const { return ::ExportWaveAsCode(this->_wave, fileName.c_str()); };
                private:
                    ::Wave _wave;
            };

            class Sound         {
                public:
                    Sound(std::string);
                    ~Sound();

                    inline void UpdateSound(const void* data, int samplesCount) { ::UpdateSound(this->_sound, data, samplesCount); };

                    inline bool isSoundPlaying(void) const { return ::IsSoundPlaying(this->_sound); };

                    inline void PlaySound(void) const { ::PlaySound(this->_sound); };
                    inline void StopSound(void) const { ::StopSound(this->_sound); };
                    inline void PauseSound(void) const { ::PauseSound(this->_sound); };
                    inline void ResumeSound(void) const { ::ResumeSound(this->_sound); };
                    inline void PlaySoundMulti(void) const { ::PlaySoundMulti(this->_sound); };
                    inline void StopSoundMulti(void) const { ::StopSoundMulti(); };

                    inline int GetSoundsPlaying(void) const { return ::GetSoundsPlaying(); };

                    inline void SetSoundVolume(float volume) const { ::SetSoundVolume(this->_sound, volume); };
                    inline void SetSoundPitch(float pitch) const { ::SetSoundPitch(this->_sound, pitch); };

                private:
                    ::Sound _sound;
            };

            class Music         {
                public:
                    Music(std::string);
                    Music(std::string, unsigned char*, int);
                    ~Music();

                    inline bool isMusicStreamPlaying(void) const { return ::IsMusicStreamPlaying(this->_music); };
                    inline void UpdateMusicStream(void) const { ::UpdateMusicStream(this->_music); };

                    inline void PlayMusicStream(void) const { ::PlayMusicStream(this->_music); };
                    inline void StopMusicStream(void) const { ::StopMusicStream(this->_music); };
                    inline void PauseMusicStream(void) const { ::PauseMusicStream(this->_music); };
                    inline void ResumeMusicStream(void) const { ::ResumeMusicStream(this->_music); };

                    inline void SetMusicVolume(float volume) { ::SetMusicVolume(this->_music, volume); };
                    inline void SetMusicPitch(float pitch) { ::SetMusicPitch(this->_music, pitch); };

                    inline float GetMusicTimeLength(void) const { return ::GetMusicTimeLength(this->_music); };
                    inline float GetMusicTimePlayed(void) const { return ::GetMusicTimePlayed(this->_music); };

                private:
                    ::Music _music;
            };

            class AudioStream         {
                public:
                    AudioStream(unsigned int, unsigned int, unsigned int);
                    ~AudioStream();

                    inline void UpdateAudioStream(const void* data, int samplesCount) const { ::UpdateAudioStream(this->_audiostream, data, samplesCount); };

                    inline bool isAudioStreamProcessed(void) const { return ::IsAudioStreamProcessed(this->_audiostream); };
                    inline bool isAudioStreamPlaying(void) const { return ::IsAudioStreamPlaying(this->_audiostream); };

                    inline void PlayAudioStream(void) const { ::PlayAudioStream(this->_audiostream); };
                    inline void PauseAudioStream(void) const { ::PauseAudioStream(this->_audiostream); };
                    inline void ResumeAudioStream(void) const { ::ResumeAudioStream(this->_audiostream); };
                    inline void StopAudioStream(void) const { ::StopAudioStream(this->_audiostream); };

                    inline void SetAudioStreamVolume(float volume) const { ::SetAudioStreamVolume(this->_audiostream, volume); };
                    inline void SetAudioStreamPitch(float pitch) const { ::SetAudioStreamPitch(this->_audiostream, pitch); };
                    inline void SetAudioStreamBufferSizeDefault(int size) const { ::SetAudioStreamBufferSizeDefault(size); };

                private:
                    ::AudioStream _audiostream;
            };
        } // namespace Audio
    } // namespace Raylib
} // namespace Indie