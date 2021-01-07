/*
** ShipWreck engine, 2020
** is_empty.c
*/

#include <stdbool.h>
#include <unistd.h>

#include "double_list.h"

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}