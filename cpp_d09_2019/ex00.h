/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** ex00.h
*/

#ifndef _ex00_H_
# define _ex00_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct cthulhu_s
{
    int m_power;
    char *m_name;
};
typedef struct cthulhu_s cthulhu_t;

struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
};
typedef struct koala_s koala_t;

/*-------------------fonction de la structure cthulhu-------------------*/
cthulhu_t *new_cthulhu(void);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
static void cthulhu_initializer(cthulhu_t *this);

/*-------------------fonction de la structure koala-------------------*/
koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *this);
static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend);

#endif /*_ex00_H_*/
