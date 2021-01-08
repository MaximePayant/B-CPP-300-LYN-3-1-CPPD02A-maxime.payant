/*
** ShipWreck engine, 2020
** map.c
*/

#include <unistd.h>

#include "map.h"
#include "generic_list.h"

key_comparator_t key_cmp_container(bool store, key_comparator_t new_key_cmp)
{
    static key_comparator_t stored_key_cmp;

    if (store == true)
        stored_key_cmp = new_key_cmp;
    return (stored_key_cmp);
}

unsigned int map_get_size(map_t map)
{
    return (list_is_empty((list_t)map));
}

bool map_is_empty(map_t map)
{
    return (list_is_empty((list_t)map));
}

int pair_comparator(void *first, void *second)
{
    return (key_cmp_container(false, NULL)
            (((pair_t *)first)->key, ((pair_t *)second)->key));
}