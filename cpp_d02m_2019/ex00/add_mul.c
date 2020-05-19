/*
** EPITECH PROJECT, 2020
** C++pool
** File description:
** add_mul.c
*/

#include <unistd.h>
#include <stdio.h>

void add_mul_4param(int first, int second, int *sum, int *product)
{
    int produit = first * second;
    int somme = first + second;

    *product = produit;
    *sum = somme;
}

void add_mul_2param(int *first, int *second)
{
    int product = *first * *second;
    int sum = *first + *second;

    *first = sum;
    *second = product;
}
