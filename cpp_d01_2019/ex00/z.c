/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** ex00
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void z(void)
{
    my_putchar('z');
    my_putchar('\n');
}

int main(int ac, char **av)
{
    z();
    return (0);
}
