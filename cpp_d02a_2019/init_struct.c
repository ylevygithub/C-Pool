/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** init_struct.c
*/

#include "double_list.h"

double_list_t init_struct(void)
{
    double_list_t list = malloc(sizeof(double_list_t));
    list->next = NULL;
    return (list);
}

