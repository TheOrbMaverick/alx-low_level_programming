#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (hash_table == NULL) {
        return NULL;  /* Return NULL if allocation fails */
    }

    /* Allocate memory for the array of nodes */
    hash_table->array = (Node **)malloc(sizeof(Node *) * size);
    if (hash_table->array == NULL) {
        free(hash_table);
        return NULL;  /* Return NULL if allocation fails */
    }

    /* Initialize each element in the array to NULL */
    for (i = 0; i < size; i++) {
        hash_table->array[i] = NULL;
    }

    /* Set the size of the hash table */
    hash_table->size = size;

    return hash_table;
}

int main(void)
{
    /* Example usage: */
    hash_table_t *my_hash_table = hash_table_create(10);

    /* Check if hash table creation was successful */
    if (my_hash_table == NULL) {
        /* Handle error */
        return 1;
    }

    /* Do something with the hash table... */

    /* Don't forget to free the allocated memory when done */
    free(my_hash_table->array);
    free(my_hash_table);

    return 0;
}
