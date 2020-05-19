//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex03.hpp
//

#ifndef _EX03_H_
#define _EX03_H_

#include <iostream>
#include <string>

template < typename T >
void print(const T &each)
{
    std::cout << each << std::endl;
}

template < typename T >
void foreach(T *each, void (&print)(const T &each), int size)
{
    for (int i = 0; i < size; ++i)
        print(each[i]);
}

#endif /*_EX03_H_*/
