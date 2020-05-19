//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// find.hpp
//

#ifndef _FIND_HPP_
#define _FIND_HPP_

#include <algorithm>
#include <iostream>
#include <string>

template<typename T>
typename T::iterator do_find(T &t, int u) {
	return (find(t.begin(), t.end(), u));
}

#endif /*_FIND_HPP_*/
