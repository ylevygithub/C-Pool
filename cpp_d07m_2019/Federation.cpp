//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Federation.cpp
//

#include "Federation.hpp"
#include "WarpSystem.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_core = NULL;

    std::cout << "The ship USS "<< name << " has been finished.\n";
    std::cout << "It is " << length << " m in length and " << width << " m in width.\n";
    std::cout << "It can go to Warp " << maxWarp << "!\n";
}

Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << "USS " << this->_name << ": The core is set.\n";
}

void Federation::Starfleet::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "USS " << this->_name << ": The core is stable at the time.\n";
    else
        std::cout << "USS " << this->_name << ": The core is unstable at the time.\n";
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;

    std::cout << "The independent ship " << name << " just finished its construction.\nIt is ";
    std::cout << length << " m in length and " << width << " m in width.\n";
}

Federation::Ship::~Ship()
{
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << this->_name << ": The core is set.\n";
}

void Federation::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << this->_name << ": The core is stable at the time.\n";
    else
        std::cout << this->_name << ": The core is unstable at the time.\n";
}

std::string Federation::Starfleet::Captain::getName()
{
    return (this->_name);
}

void Federation::Starfleet::Ship::promote(Captain *captain)
{
    this->_captain = captain;

	std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << ".\n";
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;

    std::cout << "Ensign " << name <<", awaiting orders." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
}

int Federation::Starfleet::Captain::getAge()
{
    return (this->_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}
