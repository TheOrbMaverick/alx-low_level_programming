#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t node_count = 0;
    listint_t *current, *next_node;

    current = *h;

    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        node_count++;
        current = next_node;
    }

    *h = NULL;

    return (node_count);
}
