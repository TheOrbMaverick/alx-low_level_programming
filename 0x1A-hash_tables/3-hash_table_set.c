#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add or update
 * @value: Value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node = NULL;

    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists in the linked list at the index */
    hash_node_t *current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Update the value for an existing key */
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return 0; /* strdup failed */
            return 1;     /* Successfully updated value */
        }
        current = current->next;
    }

    /* Key does not exist, create a new node and add it to the linked list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0; /* malloc failed */

    new_node->key = strdup(key);
    new_node->value = (value != NULL) ? strdup(value) : NULL;
    if (new_node->key == NULL || (value != NULL && new_node->value == NULL))
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0; /* strdup failed */
    }

    /* Add the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1; /* Successfully added a new node */
}
