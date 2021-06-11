/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Client
*/

#pragma once

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::udp;

namespace Indie {
    namespace Client {
        class ClientConnection {
            public:
                ClientConnection(const std::string &ip, const std::string &port);
                ~ClientConnection();
                void send_to(const std::string &message);
                std::string receive_from();
            protected:
            private:
                boost::asio::io_context io_context;
                udp::socket socket;
                udp::resolver resolver;
                udp::resolver::results_type endpoints;
        };
    }
}