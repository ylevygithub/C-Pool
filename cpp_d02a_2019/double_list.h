/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** double_list.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct doublelist_node
{
    double value;
    struct doublelist_node *next;
} doublelist_node_t;
typedef doublelist_node_t *double_list_t;

unsigned int double_list_get_size(double_list_t list);
bool double_list_is_empty(double_list_t list);
void double_list_dump(double_list_t list);
bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem);
bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem);
double_list_t init_struct(void);
