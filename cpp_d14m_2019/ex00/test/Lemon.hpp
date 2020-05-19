#ifndef LEMON_H
#define LEMON_H

#include "Fruit.hpp"

class Lemon : public Fruit {

public:
	Lemon();
	~Lemon();

	std::string const &getName() const;
	int 	const		&getVitamins() const;

};

#endif