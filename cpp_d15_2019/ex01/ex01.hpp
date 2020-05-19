//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex01.hpp
//

#ifndef _EX01_H_
#define _EX01_H_

#include <iostream>
#include <string>
#include <cstring>

/*
Use those 6 hours to write the compare function template.
It takes two parameters of the same type, and returns an int equal to:
• 0 if the two parameters are equal
• -1 if the first parameter is smaller than the second
• 1 if the first parameter is bigger than the second
Also provide an overload of this function for const char * parameters.
*/

template < typename T >
int compare(T const &a, T const &b) {
    if (a < b)
        return (-1);
    else if (a == b)
        return (0);
    else
        return (1);
}

#endif /*_EX01_H_*/