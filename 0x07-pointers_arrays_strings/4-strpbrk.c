#include "holberton.h"
#include <stdio.h>
int include(char c, char *s)
{
	if (*s == '\0')
		return (0);
	else
		return ((*s == c) || include(c, s + 1));
}
/**
* _strspn - Entry point
* @s: char
* @c: char
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int acumulator = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		if (include(*(s + i), accept))
			acumulator += 1;
		else
			break;

	return (acumulator);
}

