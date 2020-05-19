//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Buzz.hpp
//

#ifndef _BUZZ_H_
#define _BUZZ_H_

#include "Toy.hpp"

class Buzz : public Toy {
    public:
        Buzz(const std::string &name, const std::string &file);
        Buzz(const std::string &name);
        ~Buzz();
        Buzz(const Buzz &);
        Buzz &operator=(const Buzz &);
};

#endif /*_BUZZ_H_*/
