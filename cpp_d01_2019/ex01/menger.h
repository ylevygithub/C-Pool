/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** menger.h
*/

#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*-------------main.c------------*/
char *int_to_str(long long nb);
/*-------------menger.c------------*/
int how_much_zero(int a);
void menger(int size, int level, int x, int y);
int tmp(int axeX, int axeY, int level, int nouvelle_taille, int x, int y);
/*-------------verif.c------------*/
void verif_size(int size);
void verif_abscis(int x);
void verif_ordonate(int y);
void print_all(int size, int x, int y);
