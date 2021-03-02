#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* length - Entry point
* @string: char
* Return: Always 0 (Success)
*/
int length(char *string)
{
	return ((*string == '\0') ? 0 : 1 + length(string + 1));
}
/**
* str_concat - Entry point
* @s1: char
* @s2: char
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	char *str = malloc(sizeof(char) * (length(s1) + length(s2) + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; i++, j++)
		*(str + i) = *(s2 + j);
	*(str + i) = '\0';
	return (str);
}

