#include "search_algos.h"

/**
 * linear_skip - Search for the first occurrence of a value on a singly-linked
 *               list using a skip list that itself is implemented with the
 *               optimal step: sqrt(total_nodes).
 * @list: The head of the list to be searched.
 * @value: The value to be searched.
 *
 * Return: The pointer of the node with the value searched if found.
 *         Return NULL otherwise.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *low = NULL, *high = NULL;

	if (!list)
		return (NULL);

	low = list, high = list->express;

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				high->index, high->n);
		if (high->next &&
		    !(value >= low->n && value <= high->n))
		{
			low = high;
			if (high->express)
				high = high->express;
			else
			{
				while (high->next)
					high = high->next;
				break;
			}
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			low->index, high->index);

	for (; low; low = low->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       low->index, low->n);
		if (value == low->n)
			return (low);
	}
	return (NULL);
}
