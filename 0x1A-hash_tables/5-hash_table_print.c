#include "hash_tables.h"

/**
 * hash_table_print - hash_table_print
 *
 * @ht: ?
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int first = 1, i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (!first)
				printf(", ");
			else
				first = 0;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}

