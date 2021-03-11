#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#define LAST 0
#define FIRST 1

int index_word(char *string, int word_count, int relative_letter)
{
	int i, index = -1;

	for(i = 0; *(string + i) != '\0'; i++)
	{
		if (
			word_count == 0
			&& relative_letter == FIRST
		)
		{
			index = i;
			break;
		}
		else if (
			word_count == 0
			&& relative_letter == LAST
			&& (*(string + i + 1) == ' ' || *(string + i + 1) == '\0')
		)
		{
			index = i;
			break;
		}
		if (
			(*(string + i + 1) != ' ' && *(string + i) == ' ')
			|| (*(string + i) != ' ' && i == 0)
		)
			word_count -= 1;
	}
	return (index);
}
/**
* strtow - Entry point
* @str: int
* Return: Always 0 (Success)
*/
char **strtow(char *str)
{
	// int i, j, k, lenght_av = 0;
	// char **string;
	int i, words = 0;
	char **string;

	while (index_word(str, i, FIRST) != -1)
		words += 1;
	string = malloc(words sizeof(*string));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		
	}

	return (NULL);
}

