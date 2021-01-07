/*
** ShipWreck engine, 2020
** get_node.c
*/

#include <unistd.h>

#include "double_list.h"

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list, double value)
{
    double_list_t tmp = list;

    if (list == NULL)
        return (NULL);
    while (tmp->value != value) {
        if (tmp == NULL)
            return (NULL);
        tmp = tmp->next;
    }
    return (tmp);
}