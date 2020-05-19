//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Lemon.cpp
//

#include "Lemon.hpp"

Lemon::Lemon() : Fruit(3, "Lemon")
{
}

Lemon::~Lemon(){}

const std::string &Lemon::getName() const
{
    return (this->_name);
}

const int &Lemon::getVitamins() const
{
    return (this->_vitamins);
}
