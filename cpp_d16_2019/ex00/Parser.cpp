//
// EPITECH PROJECT, 2020
// c++pool
// File description:
// Parser.cpp
//
/*
• chaine expressions will always be parenthesized (for example: “((1,2),3)”),
• numbers will always be greater than 0,
• the operators you have to handle are +, -, *, / and %,
• expressions will always be valid.*/

#include "Parser.hpp"

    // std::stack<char> _operators;//+, -, *, /, %
    // std::stack<int> _operands;
Parser::Parser() {

}
Parser::~Parser(){}

int Parser::result() const {
    return _operands.top();
}

void Parser::reset() {
    while (!_operands.empty())
        _operands.pop();
    while (!_operators.empty())
        _operators.pop();
}

static int add(int a, int b)
{
    return (a + b);
}

static int minus(int a, int b)
{
    return (a - b);
}

static int mul(int a, int b)
{
    return (a * b);
}

static int division(int a, int b)
{
    return (a / b);
}

static int mod(int a, int b)
{
    return (a % b);
}

static int final(int nb1, char op, int nb2)
{
    switch (op)
    {
        case ('+'):return (add(nb1, nb2));break;
        case ('-'):return (minus(nb1, nb2));break;
        case ('*'):return (mul(nb1, nb2));break;
        case ('/'):return (division(nb1, nb2));break;
        case ('%'):return (mod(nb1, nb2));break;
        default:
            break;
    }
    return (0);
}

void Parser::feed(const std::string &chaine)
{
    int i = 0;
    int nb1;
    int nb2;
    char op;

    while (chaine[i]) {
        if (chaine[i] >= '0' && chaine[i] <= '9') {
            int tmp = 0;
            while (chaine[i] >= '0' && chaine[i] <= '9') {
                tmp = tmp * 10 + chaine[i] - '0';
                i++;
            }
            _operands.push(tmp);
        }
        else if (chaine[i] == '+' || chaine[i] == '-' || chaine[i] == '*' || chaine[i] == '/' || chaine[i] == '%') {
            _operators.push(chaine[i]);
            i++;
        }
        else if (chaine[i] == ')') {
            nb2 = _operands.top();
            _operands.pop();
            op = _operators.top();
            _operators.pop();
            nb1 = _operands.top();
            _operands.pop();
            _operands.push(final(nb1, op, nb2));
            i++;
        }
        else
            i++;
    }
    nb1 = _operands.top();
    _operands.pop();
    if (!_operands.empty()) {
        if (!_operators.empty()) {
            op = _operators.top();
            _operators.pop();
            nb1 = final(nb1, _operands.top(), op);
        }
        else {
            nb1 += _operands.top();
            _operands.pop();
        }
    }
    _operands.push(nb1);
}
