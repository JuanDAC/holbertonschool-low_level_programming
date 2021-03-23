#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: current node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}

