/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** find_insert.c
*/

#include "string.h"

int verif_char(char a, char b)
{
    if (a == b)
        return (0);
    return (1);
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    if (this->str == NULL || strlen(this->str) < pos)
        return (-1);
    while (this->str[pos] != 0) {
        if (verif_char(str->str[0], this->str[pos]) == 0)
            return (pos);
        else
            pos++;
    }
    return (-1);
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    if (this->str == NULL || strlen(this->str) < pos)
        return (-1);
    while (this->str[pos] != 0) {
        if (verif_char(str[0], this->str[pos]) == 0)
            return (pos);
        else
            pos++;
    }
    return (-1);
}
