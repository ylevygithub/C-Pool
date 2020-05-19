//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Fruit.cpp
//

#include "Fruit.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"

Fruit::Fruit(int vit, const std::string &name)
{
    _vitamins = vit;
    _name = name;
}

Fruit::~Fruit() {}
