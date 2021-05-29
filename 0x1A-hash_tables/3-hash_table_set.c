#include "hash_tables.h"

#define create_a_node(NEW_NODE, VALUE, KEY, INDEX, HASH_TABLE)\
do {                                                          \
	NEW_NODE = malloc(sizeof(hash_node_t));                   \
	if (NEW_NODE)                                             \
	{                                                         \
		NEW_NODE->value = VALUE;                              \
		NEW_NODE->key = KEY;                                  \
		NEW_NODE->next = HASH_TABLE->array[INDEX];            \
		HASH_TABLE->array[index] = NEW_NODE;                  \
	}                                                         \
} while (0)

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
	char *copy_value = 0, *copy_key = 0;
	hash_node_t *new_node = NULL, *current = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	copy_value = calloc(strlen(value) + 1, sizeof(unsigned char));
	if (!copy_value)
		return (0);
	strcpy(copy_value, value);

	copy_key = calloc(strlen(key) + 1, sizeof(unsigned char));
	if (!copy_key)
	{
		free(copy_value);
		return (0);
	}
	current = (hash_node_t *)ht->array[index];
	if (navegate_to_node_match(current, key))
	{
		free(current->value);
		current->value = copy_value;
	}
	else
	{
		create_a_node(new_node, copy_value, copy_key, index, ht);
		if (!new_node)
		{
			free(copy_key);
			free(copy_value);
			return (0);
		}
		strcpy(copy_key, key);
	}
	return (0);
}
