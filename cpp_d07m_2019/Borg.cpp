//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Borg.cpp
//

#include "Borg.hpp"

Borg::Ship::Ship()
{
    this->_side = 300;
    this->_maxWarp = 9;

    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\n";
    std::cout << "Your biological characteristics and technologies will be assimilated.\n";
    std::cout << "Resistance is futile.\n";
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
}

void Borg::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "Everything is in order.\n";
    else
        std::cout << "Critical failure imminent.\n";
}
