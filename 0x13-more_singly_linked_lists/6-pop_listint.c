#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int data = 0;
    listint_t *temp;

    if (head == NULL || *head == NULL)
        return 0; // Return 0 if the list is empty

    temp = *head;
    data = temp->n; // Get the data (n) from the head node
    *head = temp->next; // Update the head pointer to the next node
    free(temp); // Free the old head node

    return data;
}
