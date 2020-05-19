/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** string_init_destroy.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    if (s != NULL)
        this->str = strdup(s);
    else
        this->str = NULL;
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_c = &append_c;
    this->append_s = &append_s;
    this->clear = &clear;
}

void string_destroy(string_t *this)
{
    this->str = NULL;
    this = NULL;
    free(this);
}
