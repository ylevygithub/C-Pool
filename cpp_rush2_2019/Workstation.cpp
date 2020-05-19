/*
** EPITECH PROJECT, 2020
** Wrap
** File description:
** wrap
*/

#include "Workstation.hpp"

/*--------------------ELF--------------------*/

Elf::Elf()
{

}

/*--------------------TABLE--------------------*/

Table::Table() : Objectnb(0)
{

}

/*--------------------CONVEYORBELT--------------------*/

ConveyorBelt::ConveyorBelt() : isEmpty(true)
{
}

ConveyorBelt::~ConveyorBelt()
{
}

void ConveyorBelt::In(Object *obj)
{
    if (obj == NULL)
        std::cerr << "You have nothing in Object" << std::endl;
    else if (isEmpty == true) {
        objectOn = obj;
        isEmpty = false;
    }
    else
        std::cerr << "You have already something on the ConveyorBelt" << std::endl;
}

void ConveyorBelt::Out(Object *obj)
{
    if (obj == NULL)
        std::cerr << "You have nothing in Object" << std::endl;
    else if (isEmpty == false) {
        isEmpty = true;
        obj = NULL;
    }
    else
        std::cerr << "You have nothing on the ConveyorBelt" << std::endl;
}

void ConveyorBelt::take()
{
    objectHand = objectOn;
    inHand = true;
}