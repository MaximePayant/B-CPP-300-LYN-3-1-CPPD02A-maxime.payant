/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** add_element.c
*/

#include <stdlib.h>
#include <unistd.h>

#include "generic_list.h"

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t new = malloc(sizeof(node_t));

    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = *front_ptr;
    *front_ptr = new;
    return (true);
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    list_t new = malloc(sizeof(node_t));
    list_t *tmp = front_ptr;

    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = NULL;
    while (*tmp != NULL)
        tmp = &((*tmp)->next);
    *tmp = new;
    return (true);
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem
, unsigned int position)
{
    list_t new;
    list_t *prev;
    list_t *tmp = front_ptr;

    if (position == 0)
        return (list_add_elem_at_front(front_ptr, elem));
    for (unsigned ctr = 0; ctr < position; ctr += 1) {
        if (*tmp == NULL)
            return (false);
        prev = tmp;
        tmp = &(*tmp)->next;
    }
    new = malloc(sizeof(node_t));
    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = (*prev)->next;
    (*prev)->next = new;
    return (true);
}