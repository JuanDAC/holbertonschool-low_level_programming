#include "lists.h"
/**
* list_len - function that returns the number of elements in a
*              linked list_t list.
* @h: node head of a own list
* Return: Always 0 (Success)
*/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}

