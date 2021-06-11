/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Server
*/

#include "Server.hpp"

Indie::Server::Server::Server(unsigned short port) : sock(io_context, udp::endpoint(udp::v4(), port)) {}

Indie::Server::Server::~Server() {}

void Indie::Server::Server::send(const std::string &message)
{
    udp::endpoint endpoint;
    this->sock.send_to(boost::asio::buffer(message), endpoint);
}

std::string Indie::Server::Server::receive()
{
    std::string buffer;
    udp::endpoint endpoint;
    sock.receive_from(boost::asio::buffer(buffer), endpoint);
    return buffer;
}