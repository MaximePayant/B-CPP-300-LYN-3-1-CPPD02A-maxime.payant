/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** get_size.c
*/

#include <unistd.h>

#include "generic_list.h"

unsigned int list_get_size(list_t list)
{
    unsigned len = 0;

    for (list_t tmp = list; tmp != NULL; tmp = tmp->next)
        len += 1;
    return (len);
}