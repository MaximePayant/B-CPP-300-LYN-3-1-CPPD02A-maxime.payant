/*
** ShipWreck engine, 2020
** stack.c
*/

#include "queue.h"
#include "generic_list.h"

unsigned int queue_get_size(queue_t queue)
{
    return (list_get_size((list_t)queue));
}

bool queue_is_empty(queue_t queue)
{
    return (list_is_empty((list_t)queue));
}

bool queue_push(queue_t *queue_ptr, void *elem)
{
    return (list_add_elem_at_back((list_t *)queue_ptr, elem));
}

bool queue_pop(queue_t *queue_ptr)
{
    return (list_del_elem_at_front((list_t *)queue_ptr));
}

void *queue_front(queue_t queue)
{
    return (list_get_elem_at_front((list_t)queue));
}