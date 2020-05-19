/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** append.c
*/

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    if (ap != NULL)
        strcat(this->str, ap->str);
    else
        this->str = NULL;
}

void append_c(string_t *this, const char *ap)
{
    if (ap != NULL)
        strcat(this->str, ap);
    else
        this->str = NULL;
}
