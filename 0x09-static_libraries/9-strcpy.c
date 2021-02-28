#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - Entry point
* @dest: pointer type char
* @src: pointer type char
* Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	char *first = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (first);
}

