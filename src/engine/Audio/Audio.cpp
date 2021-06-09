/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Audio
*/

#include "Audio.hpp"

Raylib::Audio::Wave::Wave(std::string fileName)
{
    this->_wave = ::LoadWave(fileName.c_str());
}

Raylib::Audio::Wave::Wave(std::string fileName, const unsigned char *fileData, int dataSize)
{
    this->_wave = ::LoadWaveFromMemory(fileName.c_str(), fileData, dataSize);
}

Raylib::Audio::Wave::~Wave()
{
    ::UnloadWave(this->_wave);
}

Raylib::Audio::Sound::Sound(std::string fileName)
{
    this->_sound = ::LoadSound(fileName.c_str());
}

Raylib::Audio::Sound::~Sound()
{
    ::UnloadSound(this->_sound);
}

Raylib::Audio::Music::Music(std::string fileName)
{
    this->_music = ::LoadMusicStream(fileName.c_str());
}

Raylib::Audio::Music::Music(std::string fileType, unsigned char *data, int dataSize)
{
    this->_music = ::LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

Raylib::Audio::Music::~Music()
{
    ::UnloadMusicStream(this->_music);
}

Raylib::Audio::AudioStream::AudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    this->_audiostream = ::LoadAudioStream(sampleRate, sampleSize, channels);
}

Raylib::Audio::AudioStream::~AudioStream()
{
    ::UnloadAudioStream(this->_audiostream);
}