//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Droid.hpp
//

#ifndef __Droid_HPP__
# define __Droid_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>

class Droid
{
    private :
        size_t _energy;
        const size_t _attack;
        const size_t _resistance;
        std::string _status;
    public :
        Droid(std::string id, size_t energy, size_t attack, size_t resistance, std::string status);
        ~Droid();
};

#endif /*__Droid__ */
