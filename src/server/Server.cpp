/*
** EPITECH PROJECT, 2021
** indie-studio
** File description:
** Server
*/

#include "Server.hpp"

Server::Server::Server() : endPoint(asio::ip::make_address("127.0.0.1"), 80), socket(this->context)
{
    
}

Server::Server::~Server()
{
}
