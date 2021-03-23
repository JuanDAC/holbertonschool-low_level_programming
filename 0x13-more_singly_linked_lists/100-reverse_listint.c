#include "lists.h"

/**
 * reverse_list - function that reverses a listint_t linked list.
 * @node: current node at a linked list
 * Return: node head
 */
listint_t *reverse_list(listint_t *node)
{
	listint_t *current_head;
	listint_t *move_at_node;

	if (node->next == NULL)
		return (node);

	current_head = reverse_list(node->next);

	move_at_node = current_head;
	while (move_at_node->next != NULL)
		move_at_node = move_at_node->next;
	node->next = NULL;
	move_at_node->next = node;
	return (current_head);
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

	*head = reverse_list(*head);

	return (*head);
}

