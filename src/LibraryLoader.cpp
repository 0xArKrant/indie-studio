/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** LibraryLoader
*/

#include "indie.hpp"

indie::LibraryLoader::LibraryLoader(std::string name)
{
    std::cout << "Voici le nom : " << name << std::endl;
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
        std::cerr << "Cannot open library: " << dlerror() << std::endl;
        exit(84);
    }
    return handler;
}

void *indie::LibraryLoader::DLSym(void *handler, const char *entryPoint)
{
    void *symPtr = dlsym(handler, entryPoint);
    const char *dlsym_error = dlerror();
    if (dlsym_error) {
        std::cerr << "Cannot load symbol: " << dlsym_error << std::endl;
        DLClose(handler);
        exit(84);
    }
    return symPtr;
}

void indie::LibraryLoader::DLClose(void *handler)
{
    dlclose(handler);
}