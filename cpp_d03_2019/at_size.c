/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** at.c
*/

#include "string.h"

char at(const string_t* this, size_t pos)
{
    if (this->str == NULL)
        return (-1);
    else if (pos > strlen(this->str) || pos < 0)
        return (-1);
    else
        return (this->str[pos]);
}

int size(const string_t *this)
{
    if (this != NULL || this->str != NULL)
        return (strlen(this->str));
    else
        return (-1);
}
