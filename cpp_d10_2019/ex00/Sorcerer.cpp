//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Sorcerer.cpp
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", " << "is dead. Consequences will never be the same!\n";
}

const std::string &Sorcerer::getName() const
{
    return (this->_name);
}

const std::string &Sorcerer::getTitle() const
{
    return (this->_title);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &Sorcier)
{
    os << "I am " << Sorcier.getName() << ", " << Sorcier.getTitle() << ", and I like ponies!\n";
    return (os);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}
