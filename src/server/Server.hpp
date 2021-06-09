/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Server
*/

#pragma once

#define ASIO_STANDALONE

#include <boost/asio.hpp>
#include <boost/asio/ts/buffer.hpp>
#include <boost/asio/ts/internet.hpp>

using namespace boost;

namespace Server {
    class Server {
        public:
            Server();
            ~Server();

        protected:
        private:
            asio::io_context context;
            asio::ip::udp::endpoint endPoint;
            asio::ip::udp::socket socket;
    };
}