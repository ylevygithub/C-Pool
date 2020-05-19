//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex02.hpp
//

#ifndef _EX02_H_
#define _EX02_H_

#include <iostream>
#include <string>

template < typename T >
T min(T a, T b)
{
    std::cout << "template min\n";
    if (a <= b)
        return a;
    else
        return b;
}

//l inverse d au dessus
int min(int a, int b)
{
    std::cout << "non-template min\n";
    if (a <= b)
        return a;
    else
        return b;	
}

template < typename T >
T templateMin(T *tab, int size) {
    T final = tab[0];
    int i = 1;

    while (i < size) {
        final = min<T>(final, tab[i]);
        i++;
    }
    return (final);
}

int nonTemplateMin(int *tab, int size)
{
    int final = tab[0];
    int i = 1;

    while (i < size) {
        final = min(final, tab[i]);
        i++;
    }
    return (final);
}

#endif /*_EX02_H_*/
