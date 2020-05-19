//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// KoalaNurse.cpp
//

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int _ID)
{
    this->status = false;
    ID = _ID;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->ID << ": Finally some rest!\n";
}

void KoalaNurse::giveDrug(std::string Drug, SickKoala *koala)
{
    koala->takeDrug(Drug);
}

std::string KoalaNurse::readReport(std::string reportName)
{
    std::string drug;
    std::string koalaName;
    std::ifstream file (reportName);
    char c;
    size_t pos;

    if ((pos = reportName.find(".report")) != std::string::npos)
        koalaName = reportName.substr(0, pos);
    if (file.is_open()) {
        while (file.get(c)) {
            if (c != '\n')
                drug = drug + c;
        }
        file.close();
        std::cout << "Nurse " << this->ID << ": Kreog! Mr." << koalaName << " needs a " << drug << "!\n";
    }
    else
        return (reportName);
    return (drug);
}

void KoalaNurse::timeCheck(void)
{
    if (this->status == true) {
        this->status = false;
        std::cout << "Nurse " << this->ID << ": Time to go home to my eucalyptus forest!\n";
    }
    else {
        this->status = true;
        std::cout << "Nurse " << this->ID << ": Time to get to work!\n";
    }
}
