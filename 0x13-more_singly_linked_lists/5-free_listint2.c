#include "lists.h"

/**
* free_listint - Entry point
* @head: current node
* Return: Always 0 (Success)
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}

/**
* free_listint2 - Entry point
* @head: current node
* Return: Always 0 (Success)
*/
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}

