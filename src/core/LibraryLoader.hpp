/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** LibraryLoader
*/

#pragma once

#include "indie.hpp"

namespace indie {
    class LibraryLoader {
        public:
            LibraryLoader(std::string);
            ~LibraryLoader();
            template <typename library>
            library set_ptr(std::string entryPoint) {
                library create = nullptr;
                void *dlsym_ptr = DLSym(this->_handler, entryPoint.c_str());
                create = reinterpret_cast <library> (dlsym_ptr);
                return create;
            }

        protected:
        private:
            void *DLOpen(const char *);
            void DLClose(void *);
            void *DLSym(void *, const char *);
            void *_handler;
    };
}
