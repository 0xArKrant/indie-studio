/**
 * @file Audio.cpp
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

#include "Audio.hpp"

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Wave:: Wave object
 * @brief Load wave data from file
 *
 * @param fileName
 */

Indie::Raylib::Audio::Wave::Wave(std::string fileName) {
    this->_wave = ::LoadWave(fileName.c_str());
}

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Wave:: Wave object
 * @brief Load wave from memory buffer
 *
 * @param fileName
 * @param fileData
 * @param dataSize
 */

Indie::Raylib::Audio::Wave::Wave(std::string fileName, const unsigned char* fileData, int dataSize) {
    this->_wave = ::LoadWaveFromMemory(fileName.c_str(), fileData, dataSize);
}

/**
 * @brief Destroy the Indie:: Raylib:: Audio:: Wave:: Wave object
 * @brief Unload wave data
 *
 */

Indie::Raylib::Audio::Wave::~Wave() {
    ::UnloadWave(this->_wave);
}

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Sound:: Sound object
 * @brief Load sound from file
 *
 * @param fileName
 */

Indie::Raylib::Audio::Sound::Sound(std::string fileName) {
    this->_sound = ::LoadSound(fileName.c_str());
}

/**
 * @brief Destroy the Indie:: Raylib:: Audio:: Sound:: Sound object
 * @brief Unload sound
 *
 */

Indie::Raylib::Audio::Sound::~Sound() {
    ::UnloadSound(this->_sound);
}

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Music:: Music object
 * @brief Load music stream from file
 *
 * @param fileName
 */

Indie::Raylib::Audio::Music::Music(std::string fileName) {
    this->_music = ::LoadMusicStream(fileName.c_str());
}

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Music:: Music object
 * @brief Load music stream from data
 *
 * @param fileType
 * @param data
 * @param dataSize
 */

Indie::Raylib::Audio::Music::Music(std::string fileType, unsigned char* data, int dataSize) {
    this->_music = ::LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

/**
 * @brief Destroy the Indie:: Raylib:: Audio:: Music:: Music object
 * @brief Unload music stream
 *
 */

Indie::Raylib::Audio::Music::~Music() {
    ::UnloadMusicStream(this->_music);
}

/**
 * @brief Construct a new Indie:: Raylib:: Audio:: Audio Stream:: Audio Stream object
 * @brief Init audio stream (to stream raw audio pcm data)
 *
 * @param sampleRate
 * @param sampleSize
 * @param channels
 */

Indie::Raylib::Audio::AudioStream::AudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
    this->_audiostream = ::LoadAudioStream(sampleRate, sampleSize, channels);
}

/**
 * @brief Destroy the Indie:: Raylib:: Audio:: Audio Stream:: Audio Stream object
 * @brief Unload audio stream and free memory
 *
 */

Indie::Raylib::Audio::AudioStream::~AudioStream() {
    ::UnloadAudioStream(this->_audiostream);
}