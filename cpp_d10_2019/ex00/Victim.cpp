//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Victim.cpp
//

#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just popped!\n";
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!\n";
}

const std::string &Victim::getName() const
{
    return (this->_name);
}

std::ostream &operator<<(std::ostream &os, const Victim &Vic)
{
    os << "I'm " << Vic.getName() << " and I like otters!\n";
    return (os);
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!\n";
}
