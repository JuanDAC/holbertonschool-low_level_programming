#include "holberton.h"
#include <stdio.h>

/**
* leet - Entry point
* @string: string
* Return: Always 0 (Success)
*/
char *leet(char *string)
{
	int i;

	for (i = 0; *(string + i) != '\0'; i++)
		if (hash(string + i))
		{}

	return (string);
}

