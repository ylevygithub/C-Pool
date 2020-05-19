//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// WarpSystem.hpp
//

#ifndef __WarpSystem_HPP__
# define __WarpSystem_HPP__

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <fstream>

namespace WarpSystem {
    class QuantumReactor {
        private:
            bool _stability;
        public:
            bool isStable(void);
            void setStability(bool);
            QuantumReactor();
            ~QuantumReactor();
    };
    class Core {
        private:
            QuantumReactor *_coreReactor;
        public:
            QuantumReactor *checkReactor();
            Core(QuantumReactor *);
            ~Core();
    };
}

#endif /*__WarpSystem__ */
