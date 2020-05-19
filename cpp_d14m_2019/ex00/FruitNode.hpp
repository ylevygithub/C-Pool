//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// FruitNode.hpp
//

#ifndef _FruitNode_H_
#define _FruitNode_H_

#include <iostream>
#include <string>
#include "Fruit.hpp"

struct FruitNode_s {
    Fruit *_fruit;
    FruitNode_s *next;
};
typedef struct FruitNode_s FruitNode;

#endif/*_FruitNode_H_*/
