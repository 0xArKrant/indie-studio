/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Client
*/

#include "Client.hpp"
enum { max_length = 1024 };

Client::Client::Client(char *argv1, char *argv2) : s(io_context, udp::endpoint(udp::v4(), 0)), resolver(io_context)
{
    this->endpoints = this->resolver.resolve(udp::v4(), argv1, argv2);
}

Client::Client::~Client()
{
}

void Client::Client::send_to(const std::string &message)
{
    this->s.send_to(boost::asio::buffer(message), *this->endpoints.begin());
}

std::string Client::Client::receive_from()
{
    std::string buffer = NULL;

    this->s.receive_from(boost::asio::buffer(buffer), sender_endpoint);

    return (buffer);
}