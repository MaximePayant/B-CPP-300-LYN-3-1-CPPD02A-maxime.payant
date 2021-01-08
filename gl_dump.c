/*
** ShipWreck engine, 2020
** dump.c
*/

#include <unistd.h>

#include "generic_list.h"

void list_dump(list_t list, value_displayer_t val_disp)
{
    for (list_t tmp = list; tmp != NULL; tmp = tmp->next)
        val_disp(tmp->value);
}