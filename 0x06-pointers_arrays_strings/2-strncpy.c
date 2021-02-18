#include "holberton.h"
#include <stdio.h>
/**
* _strncpy - Entry point
* @dest: pointer type char
* @src: pointer type char
* @n: pointer type char
* Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *first = dest;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
		i++;
	}
	*dest = *src;
	return (first);
}

