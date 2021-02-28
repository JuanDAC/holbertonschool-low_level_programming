#include "holberton.h"
#include <stdio.h>
/**
* _strcmp - Entry point
* @s1: pointer type char
* @s2: pointer type char
* Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	int operation;

	do {
		operation = (int) (*s1 - *s2);
		s1++;
		s2++;
	} while (operation == 0 && (*s1 != '\0' && *s2 != '\0'));
	return (operation);
}

