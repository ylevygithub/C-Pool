//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Peon.cpp
//

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!\n";
}
