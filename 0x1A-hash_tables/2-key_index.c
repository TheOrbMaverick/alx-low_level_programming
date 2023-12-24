#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key string
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL || *key == '\0' || size == 0)
        return 0;

    return hash_djb2(key) % size;
}
