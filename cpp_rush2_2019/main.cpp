/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** main
*/

#include "Wrap.hpp"
#include "Workstation.hpp"

int main ()
{
    Object **obj = new(Object *);
    ConveyorBelt Cb;

    obj[0] = new(Box);
    obj[1] = new (GiftPaper);
    obj[2] = new (Teddy);
    obj[2]->title = "cuddles";
    obj[3] = NULL;
    MyUnitTests(obj);
    Cb.In(obj[2]);
    Cb.In(obj[2]);
    // std::cout << Cb.getObj()->title << std::endl;
}