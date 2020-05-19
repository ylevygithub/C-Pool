/*
** EPITECH PROJECT, 2020
** c++pool
** File description:
** double_list.c
*/

#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    unsigned int i = 0;
    
    for (double_list_t head = list; head; head = head->next)
        i++;
    return (i);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    else
        return (false);
}

void double_list_dump(double_list_t list)
{
    for (list; list != NULL; list = list->next) {
        printf("%f\n", list->value);
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = init_struct();
    double_list_t tmp = *front_ptr;

    if (tmp == NULL) {
        new_node->value = elem;
        new_node->next = NULL;
        *front_ptr = new_node;
        return (true);
    }
    else {
        // for (tmp;tmp->next != NULL;tmp = tmp->next) {
        new_node->value = elem;
        new_node->next = tmp;
        *front_ptr = new_node;
        return (true);
    }
    return (false);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = init_struct();
    double_list_t tmp = *front_ptr;

    if (tmp == NULL) {
        new_node->value = elem;
        new_node->next = NULL;
        *front_ptr = new_node;
        return (true);
    }
    else {
        for (tmp;tmp->next != NULL;tmp = tmp->next);
        new_node->value = elem;
        new_node->next = NULL;
        tmp->next = new_node;
        return (true);
    }
    return (false);
}
