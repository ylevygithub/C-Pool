//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Buzz.cpp
//

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &file) : Toy(BUZZ, name, file)
{
}

Buzz::Buzz(const std::string &name)
{
    Toy(BUZZ, name, "./buzz.txt");
}

Buzz::~Buzz() {}

Buzz::Buzz(const Buzz &buzz) : Toy(BUZZ, name, "")
{
    this->Pic = buzz.Pic;
}

Buzz &Buzz::operator=(const Buzz &buzz)
{
    this->type = buzz.getType();
    this->name = buzz.getName();
    this->Pic = buzz.getAscii();
    return (*this);
}
