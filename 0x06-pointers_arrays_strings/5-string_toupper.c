#include "holberton.h"
/**
* string_toupper - prints a string, in reverse,
*             followed by a new line
* @string: pointer type char
* Return: Always 0 (Success)
*/
char *string_toupper(char *string)
{
	char *head = string;

	for (; *string != '\0'; string++)
		if (*string >= 'a' && *string <= 'z')
			*string -= 32;
	return (head);
}

