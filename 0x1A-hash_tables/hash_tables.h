#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct Node - Node structure for the hash table
 * @key: Key string
 * @value: Value string
 * @next: Pointer to the next node in case of collision
 */
typedef struct hash_node_t {
    char *key;
    char *value;
    struct hash_node_t *next;
} hash_node_t;

/**
 * struct hash_table - Hash table structure
 * @size: Size of the array
 * @array: Array of pointers to nodes
 */
typedef struct hash_table {
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

#endif /* HASH_TABLES_H */
