// #include "menger.h"
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void rec_step2(int b, int c, int size, int level)
{
    int n = 2;

    while (b < size && n <= level) {
        c = 1;
        b = b+3;
        printf("001 00%d 00%d\n", b, c);
        c = c + 3*n;
        printf("001 00%d 00%d\n", b, c);
        n++;
        b = c;
        c = 1;
        printf("001 00%d 00%d\n", b, c);
        printf("001 00%d 00%d\n", b, c+6);
    }
}

void level1(int sizetmp)
{
    while (sizetmp/3 != 1) {
        printf("00%d 00%d 00%d\n", sizetmp/3, sizetmp/3, sizetmp/3);
        sizetmp = sizetmp/3;
    }
}

void level2(int sizetmp, int size, int level)
{
    int a = 1;
    int b = 1;
    int c = 1;
    int n = 2;

    level1(sizetmp);
    while (c < size) {
        printf("00%d 00%d 00%d\n", a, b, c);
        c = c + 3;
    }
    rec_step2(b, c, size, level);
}

void level3(int sizetmp, int size, int level)
{
    int a = 1;
    int b = 1;
    int c = 1;
    int n = 2;

    level1(sizetmp);
    while (c < size) {
        if (c == 7 || c == 16 || c == 25) {
            c = c - 6;
            b = b+3;
        }
        printf("00%d 00%d 00%d\n", a, b, c);
        c = c + 3;
    }
}

void menger(char *av1, char *av2)
{
    int size = str_to_int(av1);
    int sizetmp = size;
    int level = str_to_int(av2);

    switch (level)
    {
    case 0:; break;
    case 1: level1(sizetmp); break;
    case 2: level2(sizetmp, size, level); break;
    default:level3(sizetmp, size, level);
        break;
    }
}
// void step1(int b, int c)
// {
//     printf("001 00%d 00%d", b, c);
//     printf("001 00%d 00%d", b, c+3);
// }
// void step2(int b, int c)
// {
//     printf("001 00%d 00%d", b, c);
//     printf("001 00%d 00%d", b, c+6);
// }
// void level3(int size, int level)
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     int sizetmp = size;
//     level1(sizetmp);
//     step1(1, 4);
//     step2(4, 1);
//     step1(7, 1);
// }
int my_compute_power_it(int nb, int p)
{
    int i = nb;

    if (p < 0)
        return (0);
    if (p == 0)
	return (1);
    if (p == 1)
        return (nb);
    while (p > 1) {
	nb *= i;
        p--;
    }
    return (nb);
}

int is_multiple_of_three(int arg, int arg2)
{
    int n = 0;

    while (my_compute_power_it(3, n) != arg) {
        if (my_compute_power_it(3, n) > arg)
            return (1);
        n++;
    }
    if (my_compute_power_it(3, n) == arg && arg2 <= n)
        return (0);
    else
        return (1);
}

unsigned int str_to_int(char *str)
{
    int number = 0;
    int index = 0;
    int isNeg = 0;

    if (str[0] == '-')
        isNeg = 1;
    while (str[index] >=  '0' && str[index] <= '9') {
        number += str[index] - 48;
        if (str[++index])
            number *= 10;
    }
    return (isNeg == 1 ? number *= -1 : number);
}

int verif_args(int ac, char **av)
{
    int arg1 = str_to_int(av[1]);
    int arg2 = str_to_int(av[2]);

    if (is_multiple_of_three(arg1, arg2) == 1) {
        return (1);
    }
    else if (av[2][0] == '-') {
        return (1);
    }
    else
        return (0);
}

int main(int ac, char **av)
{
    if (ac > 3)
        return (84);
    else if (verif_args(ac, av) == 0)
        menger(av[1], av[2]);
    else if (verif_args(ac,av) == 1)
        return (84);
    return (0);
}