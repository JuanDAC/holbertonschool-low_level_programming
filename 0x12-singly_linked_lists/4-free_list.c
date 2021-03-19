#include "lists.h"
/**
* free_list - function that prints all the elements of a list_t list
* @head: node head of a own list
* Return: Always 0 (Success)
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}

