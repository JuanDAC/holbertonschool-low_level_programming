#include "lists.h"
#include <stdio.h>
/**
 * create_node - make node and define pointer to NULL
 * @new_node: pointer to the variable storage the pointer to new node
 * @n: value or data to storage in node
 * Return: new node or NULL if fail
 */
int create_node(dlistint_t **new_node, int n)
{
	*new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);
	(*new_node)->n = n;
	(*new_node)->next = NULL;
	(*new_node)->prev = NULL;
	return (1);
}

/**
* insert_dnodeint_at_index - Entry point
* @h: head
* @idx: index
* @n: index
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

