//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Banana.hpp
//

#ifndef _Banana_H_
#define _Banana_H_

#include <iostream>
#include <string>
#include "Fruit.hpp"

class Banana : public Fruit {
    public :
        Banana();
        ~Banana();
    public :
        const std::string &getName() const;
        const int &getVitamins() const;
};

#endif /*_Banana_H_*/
