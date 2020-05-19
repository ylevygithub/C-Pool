/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"
#include "Workstation.hpp"

class Wrap : public Object
{
    public:
        Wrap();
        void isTaken() override{};
        ~Wrap();
        void wrapMeThat(Object *obj){obj = obj;};
        Object *getObj();
        void inside(){};
        void setObj(){};
        void openMe(Object *obj);
        void closeMe(Object *obj);
};

class Box : public Wrap
{
    public:
        void wrapMeThat(Object *obj);
        void isTaken() override{};
        Object *getObj();
        Object *obj;
        void inside(){};
        bool isOpen;
        void setObj();
        Box();
        ~Box();
};

class GiftPaper : public Wrap
{
    public:
        void wrapMeThat(Object *obj);
        void isTaken() override{};
        Object *obj;
        void inside(){};
        void setObj(){};
        Object *getObj();
        GiftPaper();
        ~GiftPaper();
};

Object *MyUnitTests(Object **obj);

#endif /* !WRAP_HPP_ */
