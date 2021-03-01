#include "holberton.h"
#include <stdio.h>

/**
* _strncat - ry point
* @dest: - pointer
* @src: - pointer
* @n: - pointer
* Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = 2;

	for (i = 0; i < n; i++)
		*(dest + log + i) = *(src + i);
	return (dest);
}

