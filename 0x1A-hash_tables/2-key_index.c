#include "hash_tables.h"

/**
 * key_index - get index the of the key.
 *
 * @key: key from get the key
 * @size: size of the hash table
 *
 * Return: Always return indereturn index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
