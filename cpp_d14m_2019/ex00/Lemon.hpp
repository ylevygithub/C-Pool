//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Lemon.hpp
//

#ifndef _Lemon_H_
#define _Lemon_H_

#include <iostream>
#include <string>
#include "Fruit.hpp"

class Lemon : public Fruit {
    public :
        Lemon();
        ~Lemon();
    public :
        const std::string &getName() const;
        const int &getVitamins() const;
};

#endif /*_Lemon_H_*/
