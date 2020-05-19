//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Fruit.hpp
//

#ifndef _Fruit_H_
#define _Fruit_H_

#include <iostream>
#include <string>

/*
• int nbFruits();: returns the number of Fruits currently in the FruitBox,
• bool putFruit(Fruit *f);: adds a Fruit to the end of the FruitBox,
• Fruit *pickFruit();: removes a Fruit from the FruitBox (the first that comes),
• FruitNode *head();: returns the head of the linked list.*/

class Fruit {
    public :
        Fruit(int, const std::string &);
        virtual ~Fruit();
    protected :
        std::string _name;
        int _vitamins; //number of vitamins
    public :
        virtual const std::string &getName() const = 0;
        virtual const int &getVitamins() const = 0;
};

#endif /*_Fruit_H_*/
