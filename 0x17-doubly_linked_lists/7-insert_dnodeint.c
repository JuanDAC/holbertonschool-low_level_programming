#include "lists.h"
#include <stdio.h>
/**
* insert_dnodeint_at_index - Entry point
* @h: head
* @idx: index
* @n: index
* Return: Always 0 (Success)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (!h)
		return (NULL);

	if (idx == 1 || idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		new_node->prev = (*h);
		if (*h)
		{
			new_node->next = (*h)->next;
			(*h)->next->prev = new_node;
			(*h)->next = new_node;
		}
		else
		{
			new_node->next = NULL;
			*h = new_node;
		}
		return (new_node);
	}

	if (!(*h)->next && idx != 1)
		return (NULL);

	return (insert_dnodeint_at_index(&(*h)->next, idx - 1, n));
}

