#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Entry point
* @s1: char
* @s2: char
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length_s1 = 0, length_s2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	length_s1 = sizeof(s1);
	length_s2 = sizeof(s2);
	char *str = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; i++, j++)
		*(str + i) = *(s2 + j);
	*(str + i) = *(s2 + j);
	return (str);
}

