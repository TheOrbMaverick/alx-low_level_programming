#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current = NULL;
    int flag = 0; /* Flag to track whether to print a comma */

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            flag = 1;
            current = current->next;
        }
    }
    printf("}\n");
}
