#include "hash_tables.h"

/**
 * navegate_to_node_match - navegate to node match
 *
 * @current: current node
 * @key: key to search
 *
 * Return: 1 if match key
 *
 */
int navegate_to_node_match(hash_node_t *current, const char *key)
{
	if (!current)
		return (0);

	if (strcmp(current->key, key) == 0)
		return (1);

	return (navegate_to_node_match(current->next, key));
}

/**
 * hash_table_set - hash table set value
 *
 * @ht: hash table
 * @key: key to search
 * @value: value
 *
 * Return: integer exist status
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *current = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = (hash_node_t *)ht->array[index];
	if (navegate_to_node_match(current, key))
	{
		free(current->value);
		current->value = strdup(value);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->value = strdup(value);
		new_node->key = strdup(key);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (0);
}