/*
** ShipWreck engine, 2020
** dump.c
*/

#include <unistd.h>
#include <stdio.h>

#include "double_list.h"

void double_list_dump(double_list_t list)
{
    for (double_list_t tmp = list; tmp != NULL; tmp = tmp->next)
        printf("%f\n", tmp->value);
}