/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** menger.c
*/

#include "menger.h"

int how_much_zero(int a)
{
    char *str1 = int_to_str(a);
    int i = 0;

    while (str1[i] != '\0')
        i++;
    if (i == 1)
        return (1);
    else if (i == 2)
        return (2);
    else
        return (0);
}

int tmp(int axeX, int axeY, int level, int new_size, int x, int y)
{
    while (axeY <= 2) {
        if (!(axeX == 1 && axeY == 1)) {
            menger(new_size, level -1, x + (axeX * new_size),
            y + (axeY * new_size));
        }
        axeY++;
    }
    return (axeY);
}

void menger(int size, int level, int x, int y)
{
    int SCent = size / 3;
    int new_size = size / 3;
    int axeX = 0;
    int axeY = 0;

    print_all(SCent, x + SCent, y + SCent);
    if (level > 1) {
        while (axeX <= 2) {
            axeY = tmp(axeX, axeY, level, new_size, x, y);
            axeY = 0;
            axeX++;
        }
    }
}
