 #include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 *
 * @size: Size of the array the hash table
 *
 * Return: the structure of hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(*hash_table));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(*(hash_table->array)));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
