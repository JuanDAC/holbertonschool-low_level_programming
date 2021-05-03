#include "lists.h"
#include <stdio.h>
/**
* delete_dnodeint_at_index - Entry point
* @head: head
* @index: index
* Return: Always 0 (Success)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;

	if (!head)
		return (-1);
	if (index == 0 && *head)
	{
		current_node = (*head);
		if (current_node)
			*head = (*head)->next;
		free(current_node);
		return (1);
	}
	if (!*head || (!(*head)->next && index == 1))
		return (-1);
	if (index == 1)
	{
		current_node = (*head)->next;
		(*head)->next = (*head)->next->next;
		free(current_node);
		return (1);
	}
	return (delete_dnodeint_at_index(&(*head)->next, index - 1));
}

