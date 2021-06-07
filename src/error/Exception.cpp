/*
** EPITECH PROJECT, 2021
** indie-studio [WSL: Ubuntu]
** File description:
** Exception
*/

#include "Exception.hpp"

Errors::Exception::Exception()
{
    this->_message = "\nNo error code specified";
}

Errors::Exception::Exception(const char *err, std::string currentfile, int currentline)
{
    this->_message = "\nError\t>\t" + std::string(err) + "\nFile\t>\t" + currentfile + "\nLine\t>\t" + std::to_string(currentline);
}

Errors::Exception::Exception(const char *err, std::string errplus, std::string currentfile, int currentline)
{
    if (errplus == "")
        errplus = "No Error Code Specified";
    this->_message = "\nError\t>\t" + std::string(err) + "\nCode\t>\t" + errplus + "\nFile\t>\t" + currentfile + "\nLine\t>\t" + std::to_string(currentline);
}

const char *Errors::Exception::what() const noexcept
{
    return this->_message.c_str();
}