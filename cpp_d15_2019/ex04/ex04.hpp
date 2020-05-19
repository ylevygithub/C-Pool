//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// ex04.hpp
//

#ifndef _EX04_H_
#define _EX04_H_

/*
Write a Tester class template, taking a single type parameter called T.
It must provide an equal member function taking as parameter two constant references to T.
This function must return true if the two parameters are equal, and false otherwise.
*/
#include <iostream>
#include <string>

template < typename T >
bool equal(const T &a, const T &b);

template < typename T >
class Tester
{
    public :
        bool equal(const T &param1, const T &param2);
};

#endif /*_EX04_H_*/
