#include "lists.h"
#define NILL "(nil)"
#define FORMAT "[%u] %s\n"
/**
* print_list - function that prints all the elements of a list_t list
* @h: node head of a own list
* Return: Always 0 (Success)
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	printf(
		FORMAT,
		h->str ? h->len : 0,
		h->str ? h->str : NILL
	);
	return (1 + print_list(h->next));
}

