//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Victim.hpp
//

#ifndef _VICTIM_H
#define _VICTIM_H

#include <iostream>
#include <string>

class Victim {
    protected:
        const std::string _name;//random victim
    public:
        Victim(const std::string &);
        ~Victim();

    public:
        const std::string &getName() const;
        virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &, const Victim &);

#endif /* _VICTIM_H */
