//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// FruitBox.hpp
//

#ifndef _FruitBox_H_
#define _FruitBox_H_

#include <iostream>
#include <string>
#include "FruitNode.hpp"

/*You now need to build a FruitBox, because we need a lot of vitamins, which means we need a lot of fruits.
Our two hands won’t be enough to carry all these fruits!
Our FruitBox must be a Fruit container, implemented as a linked list.
*/
class FruitBox {
    private :
        FruitBox(const FruitBox &);
    protected :
        int _size;
        int _nbFruits;
        FruitNode *_head;
    public :
        FruitBox(int);//int size //builds a FruitBox that can hold size fruits
        ~FruitBox();
    public :
        int nbFruits() const;//returns the number of Fruits currently in the FruitBox
        bool putFruit(Fruit *);//adds a Fruit to the end of the FruitBox
        Fruit *pickFruit();//removes a Fruit from the FruitBox (the first that comes)
        FruitNode *head() const;//returns the head of the linked list
};

#endif /*_FruitBox_H_*/
