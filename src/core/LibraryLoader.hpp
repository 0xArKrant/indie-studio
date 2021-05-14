/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** LibraryLoader
*/

#include "indie.hpp"

#ifndef LIBRARYLOADER_HPP_
#define LIBRARYLOADER_HPP_

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

#endif /* !LIBRARYLOADER_HPP_ */
