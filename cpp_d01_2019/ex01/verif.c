/*
** EPITECH PROJECT, 2020
** C++pool
** File description:
** verif.c
*/

#include "menger.h"

void verif_size(int size)
{
    if (size < 10) {
        printf("00%d ", size);
    }
    if (size >= 10 && size < 100) {
        printf("0%d ", size);
    }
}

void verif_abscis(int x)
{
    if (x < 10) {
        printf("00%d ", x);
    }
    if (x >= 10 && x < 100) {
        printf("0%d ", x);
    }
}

void verif_ordonate(int y)
{
    if (y < 10) {
        printf("00%d\n", y);
    }
    if (y >= 10 && y < 100) {
        printf("0%d\n", y);
    }
}

void print_all(int size, int x, int y)
{
    verif_size(size);
    verif_abscis(x);
    verif_ordonate(y);
}
