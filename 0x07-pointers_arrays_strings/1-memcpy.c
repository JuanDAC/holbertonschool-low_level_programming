#include "holberton.h"
#include <stdio.h>
/**
* _memcpy - Entry point
* @dest: char
* @src: char
* @n: unsigned int
* Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

