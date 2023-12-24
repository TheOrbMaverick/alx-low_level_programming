#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct Node - Node structure for the hash table
 * @key: Key string
 * @value: Value string
 * @next: Pointer to the next node in case of collision
 */
typedef struct Node {
    char *key;
    char *value;
    struct Node *next;
} Node;

/**
 * struct hash_table - Hash table structure
 * @size: Size of the array
 * @array: Array of pointers to nodes
 */
typedef struct hash_table {
    unsigned long int size;
    Node **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */