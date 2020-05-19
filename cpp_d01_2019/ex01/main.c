/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** main.c
*/

#include "menger.h"

char *int_to_str(long long nb)
{
    char *result;
    int size = 0;
    long long tempnb = nb;
    long long index;

    while (tempnb != 0) {
        tempnb = tempnb / 10;
        size++;
    }
    result = malloc(sizeof(char) * size + 1);
    index = size;
    result[index] = '\0';
    index = size - 1;
    while (index >= 0) {
        result[index] = (nb % 10) + '0';
        nb = nb / 10;
        index--;
    }
    return (result);
}

int main(int ac, char **av)
{
    int size = atoi(av[1]);
    int level = atoi(av[2]);

    if (ac == 3 && size && level)
        menger(size, level, 0, 0);
    else
        return (84);
    return (0);
}
