/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** get_element.c
*/

#include <unistd.h>

#include "generic_list.h"

void *list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}

void *list_get_elem_at_back(list_t list)
{
    list_t tmp = list;

    if (list == NULL)
        return (0);
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp->value);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    list_t tmp = list;

    if (list == NULL)
        return (0);
    for (unsigned ctr = 0; ctr < position; ctr += 1) {
        if (tmp == NULL)
            return (0);
        tmp = tmp->next;
    }
    return (tmp->value);
}