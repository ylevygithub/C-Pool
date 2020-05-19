//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// WarpSystem.cpp
//

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
    this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable(void)
{
    return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return (this->_coreReactor);
}

WarpSystem::Core::Core(QuantumReactor *reactor)
{
    this->_coreReactor = reactor;
}

WarpSystem::Core::~Core()
{
}
