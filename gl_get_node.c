/*
** ShipWreck engine, 2020
** get_node.c
*/

#include <unistd.h>

#include "generic_list.h"

node_t *list_get_first_node_with_value(list_t list, void *value, value_comparator_t val_comp)
{
    list_t tmp = list;

    if (list == NULL)
        return (NULL);
    while (!val_comp(tmp->value, value)) {
        if (tmp == NULL)
            return (NULL);
        tmp = tmp->next;
    }
    return (tmp);
}