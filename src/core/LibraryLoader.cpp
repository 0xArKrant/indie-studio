/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** LibraryLoader
*/

#include "indie.hpp"

indie::LibraryLoader::LibraryLoader(std::string name)
{
    this->_handler = DLOpen(name.c_str());
}

indie::LibraryLoader::~LibraryLoader()
{
    DLClose(this->_handler);
}

void *indie::LibraryLoader::DLOpen(const char *name)
{
    void *handler = dlopen(name, RTLD_LAZY);
    if (!handler) {
        throw (Errors::Exception("Unable to open the dynamic library", dlerror(), __FILE__, __LINE__));
    }
    return handler;
}

void *indie::LibraryLoader::DLSym(void *handler, const char *entryPoint)
{
    void *symPtr = dlsym(handler, entryPoint);
    const char *dlsym_error = dlerror();
    if (dlsym_error) {
        throw(Errors::Exception("Cannot load symbol", dlsym_error, __FILE__, __LINE__));
        DLClose(handler);
    }
    return symPtr;
}

void indie::LibraryLoader::DLClose(void *handler)
{
    dlclose(handler);
}