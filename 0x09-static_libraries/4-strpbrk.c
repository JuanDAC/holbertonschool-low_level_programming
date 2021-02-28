#include "holberton.h"
#include <stdio.h>
/**
* includes - Entry point
* @c: char
* @s: char
* Return: Always 0 (Success)
*/
int includes(char *s, char c)
{
	if (*s == '\0')
		return (0);
	else
		return ((*s == c) || includes(s + 1, c));
}
/**
* _strpbrk - Entry point
* @s: char
* @accept: char
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (includes(accept, *(s + i)))
			return (s + i);

	return (NULL);
}
