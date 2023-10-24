#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *current = head;
		head = head->next;
		free(current);
	}
}
