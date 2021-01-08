/*
** ShipWreck engine, 2020
** map_element.c
*/

#include <unistd.h>
#include <stdlib.h>

#include "map.h"
#include "generic_list.h"

bool map_add_elem(map_t *map_ptr, void *key, void *value, key_comparator_t key_cmp)
{
    bool result = 0;
    pair_t *pair;
    map_t element = map_get_elem(*map_ptr, key, key_cmp);

    if (element == NULL) {
        pair = malloc(sizeof(pair_t));
        if (pair == NULL)
            return (false);
        pair->key = key;
        pair->value = value;
        result = list_add_elem_at_front(map_ptr, pair);
    }
    else
        element->value = value;
    return (result);
}

bool map_del_elem(map_t *map_ptr, void *key, key_comparator_t key_cmp)
{
    map_t element = map_get_elem(*map_ptr, key, key_cmp);

    if (element == NULL)
        return (false);
    list_del_node(map_ptr, element);
    return (true);
}

void *map_get_elem(map_t map, void *key, key_comparator_t key_cmp)
{
    return (list_get_first_node_with_value(map, key, key_cmp));
}