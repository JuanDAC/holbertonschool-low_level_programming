#include "lists.h"

/**
* free_listint2 - Entry point
* @head: current node
* Return: Always 0 (Success)
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *free_node;

	if (*head == NULL || head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		free_node = current_node;
		current_node = current_node->next;
		free(free_node);
	}

	*head = NULL;
}

