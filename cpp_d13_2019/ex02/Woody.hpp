//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Woody.hpp
//

#ifndef _Woody_H_
#define _Woody_H_

#include "Toy.hpp"

class Woody : public Toy {
    public:
        Woody(const std::string &name, const std::string &file);
        Woody(const std::string &name);
        ~Woody();
        Woody(const Woody &);
        Woody &operator=(const Woody &);
};

#endif /*_Woody_H_*/
