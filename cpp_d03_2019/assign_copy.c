/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** assign.c
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (str != NULL)
        this->str = strdup(str->str);
    else
        this->str = NULL;
}

void assign_c(string_t *this, const char *s)
{
    if (s != NULL)
        this->str = strdup(s);
    else
        this->str = NULL;
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    char *new_str;
    int new_i = 0;
    int begin_pos = pos;
    int i = 0;

    while (this->str[pos] != 0) {
        new_i++;
        pos++;
    }
    new_str = malloc(sizeof(char) * new_i + 1);
    while (begin_pos <= pos) {
        new_str[i] = this->str[begin_pos];
        i++;
        begin_pos++;
    }
    if (this->str[begin_pos+n] == 0)
        s = strndup(new_str, n);
    return (strlen(s));
}
