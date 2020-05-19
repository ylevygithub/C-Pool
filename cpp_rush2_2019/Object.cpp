/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** Object
*/

#include "Object.hpp"

Object::Object()
{
}

Object::~Object()
{
}

Object *Object::getObj()
{
    return this;
}

Object **MyUnitTests()
{
    Object **obj = new(Object *);

    obj[0] = new(Teddy);
    obj[0]->title = "cuddles";
    obj[1] = new (LittlePony);
    obj[1]->title = "happy pony";
    return obj;
}

Teddy::Teddy()
{
}

Teddy::~Teddy()
{
}

Object *Teddy::getObj()
{
    return this;
}

LittlePony::LittlePony()
{
}

LittlePony::~LittlePony()
{
}

void Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}

void LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}

Object *LittlePony::getObj()
{
    return this;
}