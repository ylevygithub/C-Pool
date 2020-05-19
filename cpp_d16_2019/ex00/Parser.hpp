//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Parser.hpp
//

#ifndef _Parser_H_
#define _Parser_H_

#include <iostream>
#include <string>
#include <vector>
#include <stack>

/*
    std::vector<int> v;
    v.push_back(42);
    std::cout << v[0] << std::endl;
*/

class Parser
{
    std::stack<char> _operators;
    std::stack<int> _operands;
    public :
        void feed(const std::string &);
        int result() const;
        void reset();
    public :
        Parser();
        ~Parser();
};

#endif /*_Parser_H_*/
