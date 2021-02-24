#include "holberton.h"
#include <stdio.h>
/**
* _strlen_recursion - Entry point
* @s: char
* Return: Always 0 (Success)
*/
void _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

