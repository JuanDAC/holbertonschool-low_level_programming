#include "holberton.h"
#include <stdio.h>
/**
* add_space - print spaces
* @space: int lines
* @character: int lines
* @adjustment: int lines
*/
void add_space(int space, char character, short adjustment)
{
	if (space > (0 + adjustment))
	{
		_putchar(character);
		add_space(--space, character, adjustment);
	}
}
/**
* print_triangle - Entry point
* @n: int
* Return: Always 0 (Success)
*/
void print_triangle(int n)
{
	const int TOP = n;

	if (n <= 0)
		_putchar('\n');
	else
		for (n = 0; n < TOP; n++)
		{
			add_space(TOP - n, ' ', 1);
			add_space(n, '#', -1);
			_putchar('\n');
		}
}

