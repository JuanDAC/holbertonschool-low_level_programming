#include "lists.h"

/**
 * reverse_list - function that reverses a listint_t linked list.
 * @node: current node at a linked list
 * Return: node head
 */
listint_t *reverse_list(listint_t *node, listint_t **head)
{
	listint_t *current_head;

	if (node->next == NULL)
	{
		*head = node;
		return (node);
	}

	current_head = reverse_list(node->next, head);

	node->next = NULL;
	current_head->next = node;

	return (node);
}
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: node head at a linked list
 * Return: node head
 */
listint_t *reverse_listint(listint_t **head)
{

	if (head == NULL || *head == NULL)
		return (NULL);

	reverse_list(*head, head);

	return (*head);
}

