/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** clear.c
*/

#include "string.h"

void clear(string_t *this)
{
    memset(this->str, 0, strlen(this->str));
}

int compare_s(const string_t *this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}

int compare_c(const string_t *this, const char *str)
{
    return (strcmp(this->str, str));
}
