/*
** EPITECH PROJECT, 2020
** C++pool
** File description:
** tab_to_2dtab.c
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int i = 0;
    int j = 0;
    int n = 0;
    *res = malloc(sizeof(int *) * length + 1);

    while (i < length) {
        res[0][i] = malloc(sizeof(int) * width + 1);
        while (n < width) {
            res[0][i][n] = tab[j];
            j++;
            n++;
        }
        i++;
        n = 0;
    }

}
