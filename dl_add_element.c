/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** add_element.c
*/

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>

#include "double_list.h"

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(doublelist_node_t));

    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = *front_ptr;
    *front_ptr = new;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(doublelist_node_t));
    double_list_t *tmp = front_ptr;

    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = NULL;
    while (*tmp != NULL)
        tmp = &((*tmp)->next);
    *tmp = new;
    return (true);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem
, unsigned int position)
{
    double_list_t new;
    double_list_t *prev;
    double_list_t *tmp = front_ptr;

    if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    for (unsigned ctr = 0; ctr < position; ctr += 1) {
        if (*tmp == NULL)
            return (false);
        prev = tmp;
        tmp = &(*tmp)->next;
    }
    new = malloc(sizeof(doublelist_node_t));
    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = (*prev)->next;
    (*prev)->next = new;
    return (true);
}