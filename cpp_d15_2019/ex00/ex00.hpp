//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex00.hpp
//

#ifndef _EX0_H_
#define _EX0_H_

#include <iostream>
#include <string>

/*
• swap: swaps the value of its two parameters. Does not return anything.
• min: returns the smallest of its two parameters. If the two parameters are equal, returns the second.
• max: returns the biggest of its two parameters. If the two parameters are equal, returns the second.
• add: returns the result of the addition of its two parameters.
These templates should generate functions that can be called with any type of parameter, as long as they
have the same type and support all comparison operators
*/

template < typename T >
void swap(T &a, T &b) {
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template < typename T >
T min(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}

template < typename T >
T max(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template < typename T >
T add(T a, T b) {
    return (a + b);
}

#endif /*_EX0_H_*/