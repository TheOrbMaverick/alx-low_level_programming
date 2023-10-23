#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list of type list_t.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}

		++node_count;
		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return (node_count);
}
