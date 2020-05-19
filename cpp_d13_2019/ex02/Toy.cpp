//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Toy.cpp
//

#include "Toy.hpp"

Toy::Toy()
{
    this->type = BASIC_TOY;
    this->name = "toy";
    this->Pic.data = "";
}

Toy::~Toy() {}

Toy::Toy(const ToyType &type, const std::string &ToysName, const std::string &file)
{
    this->type = type;
    this->name = ToysName;
    this->Pic = Picture(file);
}

const Toy::ToyType &Toy::getType() const
{
    return (this->type);
}

const std::string &Toy::getName() const
{
    return (this->name);
}

void Toy::setName(const std::string &name)
{
    this->name = name;
}

bool Toy::setAscii(const std::string &file)
{
    return (this->Pic.getPictureFromFile(file));
}

const std::string &Toy::getAscii() const
{
    return (this->Pic.data);
}

Toy::Toy(const Toy &toyboy)
{
    this->type = toyboy.type;
    this->name = toyboy.name;
    this->Pic = toyboy.Pic;
}

Toy &Toy::operator=(const Toy &toyboy)
{
    this->type = toyboy.getType();
    this->name = toyboy.getName();
    this->Pic = toyboy.getAscii();
    return (*this);
}
