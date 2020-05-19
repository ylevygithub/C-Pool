//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex04.cpp
//

#include "ex04.hpp"

/*
Write the equal function template that takes as parameters two constant references to a given type.
It must return true if the two parameters are equal, and false otherwise.
*/
/*---------------simple equal-------------*/
template <> bool equal(const int &par1, const int &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}
template <> bool equal(const float &par1, const float &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}
template <> bool equal(const double &par1, const double &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}
bool compare(const std::string &a, const std::string &b) {
    if (a == b)
        return (true);
    else
        return (false);
}

template <> bool equal(const std::string &par1, const std::string &par2) {
    if (compare(par1, par2) == true)
        return (true);
    else
        return (false);
}
/*----------------Tester----------------*/
template <> bool Tester<int>::equal(const int &par1, const int &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}

template <> bool Tester<float>::equal(const float &par1, const float &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}

template <> bool Tester<double>::equal(const double &par1, const double &par2) {
    if (par1 == par2)
        return (true);
    else
        return (false);
}

template <> bool Tester<std::string>::equal(const std::string &par1, const std::string &par2) {
    if (compare(par1, par2) == true)
        return (true);
    else
        return (false);
}
