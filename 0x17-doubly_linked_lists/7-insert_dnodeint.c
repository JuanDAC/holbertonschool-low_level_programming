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

	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	if (*h == NULL)
		return (NULL);

	if (!(*h)->next && idx == 1)
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = *h;
		(*h)->next = new_node;
		return (new_node);
	}

	if (idx == 1)
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

	return (insert_dnodeint_at_index(&(*h)->next, idx - 1, n));
}

