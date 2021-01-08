/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** del_element.c
*/

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

#include "double_list.h"

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    double_list_t tmp;

    if (*front_ptr == NULL)
        return (false);
    tmp = (*front_ptr)->next;
    free(*front_ptr);
    *front_ptr = tmp;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t *prev = front_ptr;
    double_list_t tmp;

    if (*front_ptr == NULL)
        return (false);
    tmp = (*front_ptr)->next;
    while (tmp != NULL) {
        prev = &(*prev)->next;
        tmp = tmp->next;
    }
    free(*prev);
    *prev = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr
, unsigned int position)
{
    double_list_t *prev = front_ptr;
    double_list_t tmp;

    if (*front_ptr == NULL)
        return (false);
    tmp = (*front_ptr)->next;
    for (unsigned ctr = 0; ctr < position; ctr += 1) {
        if (tmp == NULL)
            return (false);
        prev = &(*prev)->next;
        tmp = tmp->next;
    }
    free(*prev);
    *prev = tmp;
    return (true);
}