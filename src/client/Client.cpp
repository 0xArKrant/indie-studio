/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Client
*/

#include "Client.hpp"

Indie::Client::ClientConnection::ClientConnection(const std::string &ip, const std::string &port) : socket(io_context, udp::endpoint(udp::v4(), 0)), resolver(io_context)
{
    this->endpoints = this->resolver.resolve(udp::v4(), ip, port);
}

Indie::Client::ClientConnection::~ClientConnection()
{
}

void Indie::Client::ClientConnection::send_to(const std::string &message)
{
    this->socket.send_to(boost::asio::buffer(message), *this->endpoints.begin());
}

std::string Indie::Client::ClientConnection::receive_from()
{
    std::string buffer;
    udp::endpoint sender_endpoint;

    this->socket.receive_from(boost::asio::buffer(buffer), sender_endpoint);
    return (buffer);
}