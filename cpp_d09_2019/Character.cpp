//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Character.cpp
//

#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    Character::name = name;
    Character::level = level;
    Character::PV = 100;//are capped at 100
    Character::Power = 100;//are capped at 100
    Character::Strength = 5;
    Character::Stamina = 5;
    Character::Intelligence = 5;
    Character::Spirit = 5;
    Character::Agility = 5;
    Character::Range = CLOSE;//par default

    std::cout << name << " Created\n";
}

Character::~Character(){}

const std::string &Character::getName() const
{
    return (Character::name);
}

int Character::getLvl() const
{
    return (Character::level);
}

int Character::getPv() const
{
    return (Character::PV);
}

int Character::getPower() const
{
    return (Character::Power);
}

int Character::CloseAttack()
{
    if (Character::Power < 10) {
        std::cout << Character::name << " out of power\n";
        return (0);
    }
    Character::Power = Character::Power - 10;
    std::cout << Character::name << "strikes with a wooden stick";
    return (Character::Strength + 10);
}

void Character::Heal()
{
    if (Character::PV <= 50)//car Max = 100;
        Character::PV = Character::PV + 50;
    else
        Character::PV = 100;
    std::cout << Character::name << " takes a potion\n";
}

int Character::RangeAttack()
{
    if (Character::Power < 10) {
        std::cout << Character::name << " out of power\n";
        return (0);
    }
    Character::Power = Character::Power - 10;
    std::cout << Character::name << " tosses a stone\n";
    return (Character::Strength + 5);
}

void Character::RestorePower()
{
    Character::PV = 100;
    std::cout << Character::name << " eats\n";
}

void Character::TakeDamage(int damage)
{
    Character::PV = Character::PV - damage;
    if (Character::PV <= 0)
        std::cout << Character::name << " out of combat\n";
    else
        std::cout << Character::name << " takes " << damage << " damage\n";
}
