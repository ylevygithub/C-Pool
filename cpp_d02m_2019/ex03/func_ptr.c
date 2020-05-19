/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** func_ptr.c
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int x = strlen(str) - 1;

    while (x >= 0) {
        printf("%c", str[x]);
        x--;
    }
    printf("\n");
}

void print_upper(const char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void print_42(const char *str)
{
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    action == 0 ? print_normal(str) : 1;
    action == 1 ? print_reverse(str): 1;
    action == 2 ? print_upper(str): 1;
    action == 3 ? print_42(str): 1;
}
