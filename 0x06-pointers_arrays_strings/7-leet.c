#include "holberton.h"
#include <stdio.h>
/**
* hash - Entry point
* @character: string
* Return: Always 0 (Success)
*/
int hash(char *character)
{

	return (
			(
			(*character >= 'a' && *character <= 't')
			&& (
					(*character == 'a' && (*character = ('0' + 4)))
					|| (*character == 'e' && (*character = ('0' + 3)))
					|| (*character == 'o' && (*character = ('0')))
					|| (*character == 't' && (*character = ('0' + 7)))
					|| (*character == 'l' && (*character = ('0' + 1)))
			   )
		)
		||
		(
			(*character >= 'A' && *character <= 'T')
			&& (
					(*character == 'A' && (*character = ('0' + 4)))
					|| (*character == 'E' && (*character = ('0' + 3)))
					|| (*character == 'O' && (*character = ('0')))
					|| (*character == 'T' && (*character = ('0' + 7)))
					|| (*character == 'L' && (*character = ('0' + 1)))
			   )
		)
	);
}

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

