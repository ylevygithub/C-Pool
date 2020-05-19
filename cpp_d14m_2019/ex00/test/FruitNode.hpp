#ifndef FRUITNODE_H
#define FRUITNODE_H

#include "Fruit.hpp"

typedef struct FruitNode {
	Fruit 		*_fruit;
	FruitNode 	*next;
} 				FruitNode;

#endif