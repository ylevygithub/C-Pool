//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// KoalaNurse.hpp
//

#ifndef __KoalaNurse_HPP__
# define __KoalaNurse_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "SickKoala.hpp"

class KoalaNurse {
    private:
        int ID;
        bool status;
    public:
        void giveDrug(std::string Drug, SickKoala *koala);
        std::string readReport(std::string reportName);
        void timeCheck(void);
        ~KoalaNurse();
        KoalaNurse(int);
};
#endif /*__KoalaNurse__ */
