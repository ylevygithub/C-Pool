//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Skat.hpp
//

#ifndef __Skat_HPP__
# define __Skat_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>

class Skat
{
    private :
        std::string _name;
        int _stimPaks;
    public :
        Skat(const std::string &name, int stimPaks);
        Skat(int stimPaks);
        Skat(const std::string &name);
        Skat();
        ~Skat();
        int &stimPaks();
        const std::string &name();
        void shareStimPaks(int number, int &stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();
};

#endif /*__Skat__ */
