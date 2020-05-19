/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** str_empty.c
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    return (this->str);
}

int empty(const string_t *this)
{
    if (this->str != NULL && this->str[0] != 0)
        return (0);
    else
        return (1);
}
