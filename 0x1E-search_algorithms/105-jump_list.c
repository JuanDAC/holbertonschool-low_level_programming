#include "search_algos.h"

/**
 * jump_list - Search for the first occurrence of a value on a singly-linked
 *             list using the jump search algorithm with the optimal step:
 *             sqrt(size).
 * @list: The head of the list to be searched.
 * @size: The total number of nodes of the list.
 * @value: The value to be searched.
 *
 * Return: The pointer of the node with the value searched if found.
 *         Return NULL otherwise.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low = NULL, *high = NULL;

	if (!list)
		return (NULL);

	low = list;
	nodes_until(list, sqrt(size), high);

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       high->index, high->n);
		if (!(high->next != NULL &&
		    !(value >= low->n && value <= high->n)))
			break;
		low = high;
		nodes_until(high, sqrt(size), high);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       low->index, high->index);

	for (; low != NULL; low = low->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       low->index, low->n);
		if (value == low->n)
			return (low);
	}
	return (NULL);
}
