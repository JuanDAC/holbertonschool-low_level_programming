#include "lists.h"
#include <stdio.h>
listint_t *insert_node_at_index(
	listint_t *node,
	listint_t *before,
	unsigned int idx,
	int n
)
{
	listint_t *new_node;

	if (before == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;
		new_node->next = node;
		before->next = new_node;
		return (new_node);
	}
	return (insert_node_at_index(node->next, before->next, idx - 1, n));
}


/**
* insert_nodeint_at_index - Entry point
* @head: current node
* @n: value
* @idx: index
* Return: Always 0 (Success)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	if (idx == 1)
	{
		new_node = malloc(sizeof(listint_t));
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	return (insert_node_at_index((*head)->next, *head, idx - 1, n));
}

