/*
** ShipWreck engine, 2020
** get_size.c
*/

#include <unistd.h>
#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    unsigned len = 0;

    for (double_list_t tmp = list; tmp != NULL; tmp = tmp->next)
        len += 1;
    return (len);
}