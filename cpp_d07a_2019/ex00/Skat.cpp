//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Skat.cpp
//

#include "Skat.hpp"

Skat::Skat(const std::string &name = "bob", int stimPaks = 15)
{
    this->_name = name;
    this->_stimPaks = stimPaks;
}

Skat::Skat(int stimPaks = 15)
{
    this->_name = "bob";
    this->_stimPaks = stimPaks;
}

Skat::Skat(const std::string &name = "bob")
{
    this->_name = name;
    this->_stimPaks = 15;
}

Skat::Skat()
{
    this->_name = "bob";
    this->_stimPaks = 15;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return (this->_stimPaks);
}

const std::string &Skat::name()
{
    return (this->_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (this->_stimPaks < number)
        std::cout << "Don't be greedy\n";
    else {
        stock = number + stock;
        this->_stimPaks = this->_stimPaks - number;
        std::cout << "Keep the change.\n";
    }
}

void Skat::addStimPaks(unsigned int number)
{
    if (this->_stimPaks == 0)
        std::cout << "Hey boya, did you forget something?\n";
    this->_stimPaks = this->_stimPaks + number;
}

void Skat::useStimPaks()
{
	if (this->_stimPaks > 0) {
        this->_stimPaks = this->_stimPaks - 1;
        std::cout << "Time to kick some ass and chew bubble gum.\n";
    }
    else
        std::cout << "Mediiiiiic\n";
}

void Skat::status()
{
    std::cout << "Soldier "<< this->_name << " reporting " << this->_stimPaks << " stimpaks remaining sir!\n";
}
