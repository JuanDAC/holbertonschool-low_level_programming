#include "holberton.h"
#include <stdio.h>
/**
* print_rev - function that prints a string, in reverse,
*             followed by a new line
* @s: pointer type char
* Return: Always 0 (Success)
*/
void print_rev(char *s)
{
	int length = 0;
	int steps;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}

	for (steps = 1; steps <= length; steps++)
		_putchar(*(s - steps));
	_putchar('\n');

}

