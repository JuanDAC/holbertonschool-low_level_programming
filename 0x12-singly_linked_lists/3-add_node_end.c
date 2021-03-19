#include "lists.h"
/**
* length_str - function that prints all the elements of a list_t list
* @str: data to save in new node
* Return: Always 0 (Success)
*/
unsigned int length_str(char *str)
{
	return ((*str != '\0') ? 1 + length_str(str + 1) : 0);
}
/**
* str_copy - function that prints all the elements of a list_t list
* @source_string: node head of a own list
* Return: Always 0 (Success)
*/
char *str_copy(char *source_string)
{
	char *string_resolve;
	int i;

	string_resolve = malloc(sizeof(char) * length_str(source_string) + 1);
	if (string_resolve == NULL)
		return (NULL);
	for (i = 0; source_string[i]; i++)
		string_resolve[i] = source_string[i];
	string_resolve[i] = '\0';

	return (string_resolve);
}

/**
* new_node - function that prints all the elements of a list_t list
* @string: data to save in new node
* Return: Always 0 (Success)
*/
list_t *new_node(const char *string)
{
	list_t *current_node;

	current_node = malloc(sizeof(list_t));
	if (current_node == NULL)
		return (NULL);
	current_node->len = length_str((char *)string);
	current_node->str = str_copy((char *)string);
	return (current_node);
}
/**
* add_node_end - function that prints all the elements of a list_t list
* @head: node head of a own list
* @str: data to save in new node
* Return: Always 0 (Success)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	if (*head == NULL)
	{
		*head = new_node(str);
		return (*head);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = new_node(str);
		return ((*head)->next);
	}
	return (add_node_end(&((*head)->next), str));
}

