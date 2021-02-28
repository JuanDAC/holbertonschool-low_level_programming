#include "holberton.h"
#include <stdio.h>
/**
* _memset - Entry point
* @s: char
* @b: char
* @n: char
* Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
		*(s + i) = b;
	return (s);
}

