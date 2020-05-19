/*
** EPITECH PROJECT, 2020
** Wrap
** File description:
** Wrap
*/

#ifndef WORKSTATION_HPP_
#define WORKSTATION_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "Object.hpp"

class Elf {
    public:
        Elf();
    protected:
        bool inHand;
    private:
};

class Table : public Elf {
    public:
        Table();
        Object *take();
        void put(Object *obj);
        void isTaken();
    protected:
    private:
        int Objectnb;
        Object **allObject;
};

class ConveyorBelt : public Elf {
    public:
        ConveyorBelt();
        ~ConveyorBelt();
        void In(Object *obj);
        void Out(Object *obj);
        void put(Object *obj, Table *table);
        void take();
        Object *getObj() {return objectOn;}
    protected:
    private:
        Object *objectHand;
        bool isEmpty;
        Object *objectOn;
};

#endif