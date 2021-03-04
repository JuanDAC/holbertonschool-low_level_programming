#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* length - long of a string
* @string: char
* Return: length
*/
unsigned int length(char *string)
{
	return ((*string == '\0') ? 0 : 1 + length(string + 1));
}
/**
* string_nconcat - Entry point
* @s1: char
* @s2: char
* @n: unsigned int
* Return: Always 0 (Success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int min_length;
	unsigned int i, j, string_length;

	s1 = (s1 == NULL) ? ("") : s1;
	s2 = (s2 == NULL) ? ("") : s2;
	min_length = (n <= length(s2)) ? n : length(s2);
	string_length = length(s1) + min_length + 1;

	string = malloc(string_length * sizeof(*string));

	if (string == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(string + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0' && i < (string_length - 1); i++, j++)
		*(string + i) = *(s2 + j);

	*(string + i) = '\0';
	return (string);
}

