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
	int i = 0, valid = 0;

	for (i = 0; i < n; i++)
	{
		valid = (*(src + i) == '\0') ? 1 : valid;
		*(dest + i) = (valid) ? '\0' : *(src + i);
	}
	return (dest);
}

