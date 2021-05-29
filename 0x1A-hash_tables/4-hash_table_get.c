#include "hash_tables.h"

/**
 * hash_table_get - hash table get
 *
 * @ht: ht
 * @key: key
 *
 * Return: ?
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (current = ht->array[index]; current != NULL; current = current->next)
		if (strcmp(current->key, key) == 0)
			return (current->value);
	return (NULL);
}
