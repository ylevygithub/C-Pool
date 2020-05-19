/*
** EPITECH PROJECT, 2020
** C++pool
** File description:
** mem_ptr.c
*/

#include "mem_ptr.h"

char *my_strcpy(const char *str, const char *str1)
{
    int i = 0;
    int j = 0;
    char *cpy = malloc(sizeof(char) * (strlen(str) + strlen(str1)) + 1);

    while (str[i]) {
        cpy[i] = str[i];
        i++;
    }
    while (str1[j]) {
        cpy[i] = str1[j];
        i++;
        j++;
    }
    cpy[i] = '\0';
    return (cpy);
}

void add_str(const char *str1, const char *str2, char **res)
{
    *res = my_strcpy(str1, str2);
}

void add_str_struct(str_op_t *str_op)
{
    str_op->res = my_strcpy(str_op->str1, str_op->str2);
}
