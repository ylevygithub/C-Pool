//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// KoalaBot.hpp
//

#ifndef __KoalaBot_HPP__
# define __KoalaBot_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "Parts.hpp"

class KoalaBot
{
    const std::string _serial = "Bob-01";
    void setParts(Arms::Arms *arms, Legs::Legs *legs, Head::Head *head);

    class Arms
    {
        private:
            const std::string _serial = "A-01";
            std::string print_ok();
        public:
            Arms(const std::string serial, bool functional):_serial(serial){}
            ~Arms();
            bool isFunctional();//indicates whether the piece is functional or not.
            std::string serial() {return (_serial);}//returns the parts serial;
            void informations() {std::cout << " [Parts] Arms A-01 status : " << Arms::print_ok() << "\n";}

        Arms(std::string serial, bool functional);
    };
    class Legs
    {
        private:
            const std::string _serial = "L-01";
            std::string print_ok();
        public:
            Legs(const std::string serial, bool functional):_serial(serial){}
            ~Legs();
            bool isFunctional();//indicates whether the piece is functional or not.
            std::string serial() {return (_serial);}//returns the parts serial;
            void informations() {std::cout << " [Parts] Legs L-01 status : " << Legs::print_ok() << "\n";}
    };
    class Head
    {
        private:
            const std::string _serial = "H-01";
            std::string print_ok();
        public:
            Head(const std::string serial, bool functional):_serial(serial){}
            ~Head();
            bool isFunctional();//indicates whether the piece is functional or not.
            std::string serial() {return (_serial);}//returns the parts serial;
            void informations() {std::cout << " [Parts] Head H-01 status : " << Head::print_ok() << "\n";}
    };
};

#endif /*__KoalaBot__ */
