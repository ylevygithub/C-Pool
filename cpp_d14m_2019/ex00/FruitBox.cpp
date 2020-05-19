//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// FruitBox.cpp
//

/*
• putFruit(Fruit *f) returns false if the FruitBox is full or if the Fruit instance is already in the FruitBox,
• pickFruit() returns a null pointer if the FruitBox is empty,
• head() returns a null pointer if the FruitBox is empty.
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size){
    this->_size = size;
    this->_nbFruits = 0;
    this->_head = NULL;
}

FruitBox::~FruitBox(){}
FruitBox::FruitBox(const FruitBox &) {}

int FruitBox::nbFruits() const {
    return (this->_nbFruits);
} //returns the number of Fruits currently in the FruitBox

bool FruitBox::putFruit(Fruit *fruits) {

    if (fruits != NULL) {
        for (FruitNode *current = this->_head; current->_fruit != NULL; this->_head = current->next) {
            fruits = current->_fruit;
            this->_nbFruits--;
        }
        return (false);
    }
    else
        return (true);
} //adds a Fruit to the end of the FruitBox

Fruit *FruitBox::pickFruit() {
    Fruit *fruits;
    FruitNode *current;

    if (this->_nbFruits == 0)
        return (NULL);
    else {
        fruits = this->_head->_fruit;
        current = this->_head;
        this->_head = current->next;
        this->_nbFruits = this->_nbFruits - 1;
        return (fruits);
    }
} //removes a Fruit from the FruitBox (the first that comes)

FruitNode *FruitBox::head() const {
    if (this->_nbFruits > 0)
        return (this->_head);
    else
        return (NULL);
} //returns the head of the linked list
