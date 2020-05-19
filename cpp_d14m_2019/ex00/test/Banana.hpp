//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Banana.hpp
//

#ifndef BANANA_H
#define BANANA_H

#include "Fruit.hpp"

class Banana : public Fruit {

public:
	Banana();
	~Banana();

	std::string const 	&getName() const;
	int 	const		&getVitamins() const;	
};

#endif