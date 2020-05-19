//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Banana.cpp
//

#include "Banana.hpp"

Banana::Banana() : Fruit(5, "banana") {}
Banana::~Banana(){}


const std::string &Banana::getName() const
{
    return (this->_name);
}

const int &Banana::getVitamins() const
{
    return (_vitamins);
}
