#include "holberton.h"
#include <stdlib.h>
/**
* _strcopi - function that returns a pointer to a
*           newly allocated space in memory, which
*           contains a copy of the string given a
*           sa parameter.
* @str: copy
* @src: copy
* @i: copy
* Return: NULL if str = NULL
*/
char *_strcopi(char *src, char *str, int i)
{
	if (*(src + i) == '\0')
	{
		*(str + i) = *(src + i);
		return (str);
	}
	str = (char *)realloc(str, sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	*(str + i) = *(src + i);
	return (_strcopi(src, str, i + 1));
}
/**
* _strdup - function that returns a pointer to a
*           newly allocated space in memory, which
*           contains a copy of the string given a
*           sa parameter.
* @str: str to copy
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char));
	if (new_str == NULL)
		return (NULL);

	return (_strcopi(str, new_str, 0));
}

