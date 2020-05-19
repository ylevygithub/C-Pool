//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Borg.hpp
//

#ifndef __Borg_HPP__
# define __Borg_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "WarpSystem.hpp"

namespace Borg {
    class Ship {
        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_core;
        public:
            Ship();
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
    };
}

#endif /*__Borg__ */
