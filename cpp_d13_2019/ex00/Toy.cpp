//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Toy.cpp
//

#include "Toy.hpp"

Toy::Toy()//setting the toy’s type to BASIC_TOY, its name to “toy” and its picture to an empty string
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
//the ToyType, a string containing the toy’s name, and a string containing the picture’s filename.
}

const Toy::ToyType &Toy::getType() const//getType, a getter for the toy’s type (there is no setter, as the type will never change),
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
//sets the toy’s picture to the file’s content.
//Returns true if it succeeds, false otherwise
}
const std::string &Toy::getAscii() const//returns the toy’s picture as a string
{
    return (this->Pic.data);
}
