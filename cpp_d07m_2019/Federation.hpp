//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Federation.hpp
//

#ifndef __Federation_HPP__
# define __Federation_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "WarpSystem.hpp"

namespace Federation {
    namespace Starfleet {
        class Captain {
                std::string _name;
                int _age;
            public:
                Captain(std::string name);
                std::string getName();
                int getAge();
                void setAge(int age);
        };
        class Ensign {
                std::string _name;
            public:
                Ensign(std::string name);
        };
        class Ship {
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *_core;
                Captain *_captain;
            public:
                Ship(int length, int width, std::string name, short maxWarp);
                void getName();
                ~Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain *captain);
        };
    }
    class Ship {
        private:
            int _length;
            int _width;
            std::string _name;
            static const short _maxWarp = 1;
            WarpSystem::Core *_core;
        public:
            Ship(int length, int width, std::string name);
            void getName();
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
    };
}

#endif /*__Federation__ */
