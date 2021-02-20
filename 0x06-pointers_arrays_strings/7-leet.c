#include "holberton.h"
#include <stdio.h>

/**
* leet - Entry point
* @string: string
* Return: Always 0 (Success)
*/
char *leet(char *string)
{
	char (*letters) = "AEOTL",
	(*numbers) = "43071",
	current_upper,
	current_lower,
	current_letter;
	int i, j;

	for (i = 0; *(string + i) != '\0'; i++)
		for (j = 0; *(letters + j) != '\0'; j++)
		{
			current_upper = *(letters + j);
			current_lower = *(letters + j) + 32;
			current_letter = *(string + i);
			if (current_letter == current_upper || current_letter == current_lower)
				*(string + i) = *(numbers + j);
		}
	return (string);
}

