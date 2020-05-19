#include "Lemon.hpp"
#include "Banana.hpp"
#include "FruitBox.hpp"

Lemon::Lemon() :
	Fruit(3, "lemon") {

}

Lemon::~Lemon() {

}

std::string const &Lemon::getName() const {
	return _name;
}

int const 			&Lemon::getVitamins() const {
	return _vitamins;
}