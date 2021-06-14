/**
 * @file Exception.cpp
 * @author 0xArKrant (contact@arkrant.us)
 * @brief Error management class using exception
 * @version 0.1
 * @date 2021-06-11
 *
 * @copyright Copyright (c) 2021
 *
 * Indie-Studio
 * Epitech Nancy 2021
 */

#include "Exception.hpp"

/**
 * @brief Construct a new Indie:: Errors:: Exception:: Exception object
 *
 */
Indie::Errors::Exception::Exception() {
    this->_message = "\nNo error code specified";
}

/**
 * @brief Construct a new Indie:: Errors:: Exception:: Exception object
 *
 * @param err
 * @param currentfile
 * @param currentline
 */
Indie::Errors::Exception::Exception(const char* err, std::string currentfile, int currentline) {
    this->_message = "\nError\t>\t" + std::string(err) + "\nFile\t>\t" + currentfile + "\nLine\t>\t" + std::to_string(currentline);
}

/**
 * @brief Construct a new Indie:: Errors:: Exception:: Exception object
 *
 * @param err
 * @param errplus
 * @param currentfile
 * @param currentline
 */
Indie::Errors::Exception::Exception(const char* err, std::string errplus, std::string currentfile, int currentline) {
    if (errplus == "")
        errplus = "No Error Code Specified";
    this->_message = "\nError\t>\t" + std::string(err) + "\nCode\t>\t" + errplus + "\nFile\t>\t" + currentfile + "\nLine\t>\t" + std::to_string(currentline);
}

/**
 * @brief Get Exception What object
 *
 * @return const char*
 */
const char* Indie::Errors::Exception::what() const noexcept {
    return this->_message.c_str();
}