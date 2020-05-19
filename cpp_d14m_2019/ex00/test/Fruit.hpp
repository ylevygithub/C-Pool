#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>

class Fruit {
protected:
	int 		_vitamins;
	std::string _name;
public:
	Fruit(int, std::string const &);
	virtual ~Fruit();

	virtual int 		const	&getVitamins() const = 0;
	virtual std::string const 	&getName() const = 0;
};

#endif
