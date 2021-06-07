/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Audio
*/

#include "Audio.hpp"

Audio::Wave::Wave(std::string fileName)
{
    this->_wave = ::LoadWave(fileName.c_str());
}

Audio::Wave::Wave(std::string fileName, const unsigned char *fileData, int dataSize)
{
    this->_wave = ::LoadWaveFromMemory(fileName.c_str(), fileData, dataSize);
}

Audio::Wave::~Wave()
{
    ::UnloadWave(this->_wave);
}

Audio::Sound::Sound(std::string fileName)
{
    this->_sound = ::LoadSound(fileName.c_str());
}

Audio::Sound::~Sound()
{
    ::UnloadSound(this->_sound);
}

Audio::Music::Music(std::string fileName)
{
    this->_music = ::LoadMusicStream(fileName.c_str());
}

Audio::Music::Music(std::string fileType, unsigned char *data, int dataSize)
{
    this->_music = ::LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

Audio::Music::~Music()
{
    ::UnloadMusicStream(this->_music);
}

Audio::AudioStream::AudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    this->_audiostream = InitAudioStream(sampleRate, sampleSize, channels);
}

Audio::AudioStream::~AudioStream()
{
    ::CloseAudioStream(this->_audiostream);
}