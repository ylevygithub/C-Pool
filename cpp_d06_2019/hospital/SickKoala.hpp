//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// SickKoala.hpp
//

#ifndef __SickKoala_HPP__
# define __SickKoala_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class SickKoala {
    private:
        std::string name;
    public:
        void poke(void);
        bool takeDrug(std::string match);
        void overDrive(std::string over);
        ~SickKoala();
        SickKoala(std::string);
};
#endif /*__SickKoala__ */
