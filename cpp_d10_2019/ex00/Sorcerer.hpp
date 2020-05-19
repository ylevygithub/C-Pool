//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Sorcerer.hpp
//

#ifndef _SORCERER_H_
#define _SORCERER_H_

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
    protected:
        const std::string _name;
        const std::string _title;
    public:
        Sorcerer(const std::string &, const std::string &);
        ~Sorcerer();

    public:
        const std::string &getName() const;
        const std::string &getTitle() const;
        void polymorph(const Victim &victim) const;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);

#endif /* _SORCERER_H_ */
