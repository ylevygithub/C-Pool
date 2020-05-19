//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Woody.cpp
//

#include "Woody.hpp"

Woody::Woody(const std::string &name, std::string const &file) : Toy(WOODY, name, file)
{
}

Woody::Woody(const std::string &name)
{
    Toy(WOODY, name, "./woody.txt");
}

Woody::~Woody() {}

Woody::Woody(const Woody &wood) : Toy(WOODY, name, "")
{
    this->Pic = wood.Pic;
}

Woody &Woody::operator=(const Woody &wood)
{
    this->type = wood.getType();
    this->name = wood.getName();
    this->Pic = wood.getAscii();
    return (*this);
}
