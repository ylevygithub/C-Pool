//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// SickKoala.cpp
//

#include "SickKoala.hpp"

void SickKoala::poke(void)
{
    std::cout << "Mr."<< this->name << ": Gooeeeeerrk!!\n";
}

bool SickKoala::takeDrug(std::string match)
{
    if (match.compare("Mars") == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!\n";
        return (true);
    }
    else if (match.compare("Buronzand") == 0) {
        std::cout << "Mr." << this->name << ": And you'll sleep right away!\n";
        return (true);
    }
    else {
        std::cout << "Mr." << this->name << ": Goerkreog!\n";
        return (false);
    }
}

void SickKoala::overDrive(std::string over)
{
    size_t pos = over.find("Kreog!");
    over.replace(pos, 6, "1337!");
    std::cout << "Mr." << this->name << ": " << over << "\n";
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!\n";
}

SickKoala::SickKoala(std::string _name)
{
    name = _name;
}
