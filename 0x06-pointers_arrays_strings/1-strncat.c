#include "holberton.h"
#include <stdio.h>

/**
* length - length str
* @dest: - pointer
* Return: length (Success)
*/
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}
/**
* _strcat - ry point
* @dest: - pointer
* @src: - pointer
* @n: - pointer
* Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = length(dest);

	for (i = 0; i < n; i++)
		*(dest + i + log) = *(src + i);

	return (dest);
}

