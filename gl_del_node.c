/*
** ShipWreck engine, 2020
** gl_del_node.c
*/

#include <unistd.h>
#include <stdlib.h>

#include "generic_list.h"

bool list_del_node(list_t *front_ptr, node_t *node_ptr)
{
    list_t prev;
    list_t tmp = *front_ptr;

    while (tmp != node_ptr) {
        if (tmp == NULL)
            return (false);
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = tmp->next;
    free(node_ptr);
    return (true);
}