//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Peon.hpp
//

#ifndef _PEON_H_
#define _PEON_H_

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(const std::string &);
        ~Peon();

    public:
        virtual void getPolymorphed() const;
};

#endif /* _PEON_H_ */
