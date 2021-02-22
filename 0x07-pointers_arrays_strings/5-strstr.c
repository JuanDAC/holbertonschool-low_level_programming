#include "holberton.h"
#include <stdio.h>
/**
* include - Entry point
* @str1: char
* @str2: char
* Return: Always 0 (Success)
*/
int include(char *str1, char *str2)
{
	if (*str1 == '\0' || *str2 == '\0')
		return (1);
	else
		return ((*str1 == str2) && include(str1 + 1, str + 1));
}
/**
* _strstr - Entry point
* @haystack: char
* @needle: char
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; *(haystack + i) != '\0'; i++)
		if (include(needle, (haystack + i)))
			return (haystack + i);

	return (NULL);
}

