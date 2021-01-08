/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** get_element.c
*/

#include <unistd.h>

#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}

double double_list_get_elem_at_back(double_list_t list)
{
    double_list_t tmp = list;

    if (list == NULL)
        return (0);
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp->value);
}

double double_list_get_elem_at_position(double_list_t list
, unsigned int position)
{
    double_list_t tmp = list;

    if (list == NULL)
        return (0);
    for (unsigned ctr = 0; ctr < position; ctr += 1) {
        if (tmp == NULL)
            return (0);
        tmp = tmp->next;
    }
    return (tmp->value);
}