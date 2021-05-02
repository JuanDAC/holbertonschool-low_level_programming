#include "lists.h"
#include <stdio.h>
/**
* add_dnodeint_end - Entry point
* @head: node
* @n: node
* Return: Always 0 (Success)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head || !*head)
		return (NULL);

	if ((*head)->next == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node)
			return (NULL);

		new_node->n = n;
		(*head)->next = new_node;
		new_node->prev = (*head);
		new_node->next = NULL;
		return (new_node);
	}

	return (add_dnodeint_end(&(*head)->next, n));
}

