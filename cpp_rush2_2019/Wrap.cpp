/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** Wrap
*/

#include "Wrap.hpp"

Wrap::Wrap()
{}

Wrap::~Wrap()
{
}

Object *Wrap::getObj()
{
    return this;
}

void Wrap::openMe(Object *obj)
{
    obj->setObj();
}

void Wrap::closeMe(Object *obj)
{
    obj->setObj();
}

Box::Box() : isOpen(true)
{
}

Box::~Box()
{
}

void Box::setObj()
{
    (this->isOpen == true) ? this->isOpen = true: this->isOpen = false;
}

Object *Box::getObj()
{
    return this->obj;
}

void Box::wrapMeThat(Object *obj)
{
    if (this->isOpen == false)
        std::cout << "BOX NOT EMPTY YOU ABSOLUTE TOOL" << std::endl;
    else {
        this->obj = obj;
        std::cout << "Whistles while working" << std::endl;
        this->isOpen = false;
        std::cout << "tuuuut tuuut tuut" << std::endl;
    }
}

GiftPaper::GiftPaper()
{
}

GiftPaper::~GiftPaper()
{
}

Object *GiftPaper::getObj()
{
    return this->obj;
}

void GiftPaper::wrapMeThat(Object *obj)
{
    this->obj = obj->getObj();
    std::cout << "Whistles while working" << std::endl;
    std::cout << "tuuuut tuuut tuut" << std::endl;
}

Object *MyUnitTests(Object **obj)
{
    obj[0]->wrapMeThat(obj[2]);
    obj[1]->wrapMeThat(obj[0]);
    return obj[1];
}