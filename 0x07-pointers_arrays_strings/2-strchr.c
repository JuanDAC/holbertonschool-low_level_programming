#include "holberton.h"
#include <stdio.h>
/**
* _strchr - Entry point
* @s: char
* @c: char
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	return (NULL);
}

