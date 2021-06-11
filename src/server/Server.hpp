/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Server
*/

#pragma once

#define ASIO_STANDALONE

#include <cstdlib>
#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::udp;

namespace Indie {
    namespace Server {
        class Server {
            public:
                Server(unsigned short port);
                ~Server();
                void send(const std::string &message);
                std::string receive();
            protected:
            private:
                boost::asio::io_context io_context;
                udp::socket sock;
                std::string data;
        };
    }
}