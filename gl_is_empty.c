/*
** EPITECH PROJECT, 2021
** CPP_D02A
** File description:
** is_empty.c
*/

#include <stdbool.h>
#include <unistd.h>

#include "generic_list.h"

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}