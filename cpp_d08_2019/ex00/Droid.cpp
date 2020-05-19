//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Droid.cpp
//

#include "Droid.hpp"

Droid::Droid(std::string id = "", size_t energy = 50, size_t attack = 25, size_t resistance = 15, std::string status = "Standing by")
{
    this->_energy = energy;
    this->_attack = attack;
    this->_resistance = resistance;
    this->_status = status;
}
/*
-------The Droid takes as a parameter its serial number, which is an std::string.
-------The Droid can be constructed without this serial number.
-------In this case, the serial number is an empty string.
-------• The Droid has a copy constructor for replication, as well as an assignment operator for replacement.
-------This is the easiest solution to damaged Droids.
-------• The Droid also has the following properties:
-------Id, the Droid’s serial number, stored as an std::string
-------Energy, the remaining energy before the Droid’s batteries need to be changed, stored as a size_t
-------Attack, the Droid’s attack power, stored as a const size_t
-------Toughness, the Droid’s resistance, stored as a const size_t
-------Status, the Droid’s current status, stored as an std::string *
-------Upon construction, Energy, Attack, Toughness and Status are respectively set to 50, 25, 15 and “Standing by”.
Each of these attributes is private. They therefore have a getter, the form of which is get[Property],
and a setter, the form of which is set[Property].
const values have no setter, obviously.
• The Droid is in charge of its Status and takes ownership of it.
The Droid is in charge of its destruction.
It is necessary to know whether two Droids are identical or not, thanks to the == and != operators.
Be careful: we don’t care whether we are comparing the same Droid.
Two Droids are considered identical if they have the same characteristics.
• Overload the << operator to reload the Droid.
A Droid can’t have more than 100 nor less than 0 Energy.
It substracts the value it requires to reload its batteries from the other operand.
It must be possible to chain calls
This just in: the Droid can talk.
Upon creation, it prints (including the single quotes):
Droid 'serial ' Activated
When replicated:
Droid 'serial ' Activated , Memory Dumped
When destroyed, it prints:
Droid 'serial ' Destroyed
• Whenever it is directed to std::cout, a Droid prints:
Droid 'serial ', Status , Energy
*/