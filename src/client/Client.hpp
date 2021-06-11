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
namespace Indie
    namespace Client {
        class Client {
        public:
            Client();
            ~Client();
            void send_to();
            std::string receive_from();

        protected:
        private:
            boost::asio::io_context io_context;
            udp::socket s;
            udp::resolver resolver;
            udp::resolver::results_type endpoints;
            udp::endpoint sender_endpoint;
        };
    }
}