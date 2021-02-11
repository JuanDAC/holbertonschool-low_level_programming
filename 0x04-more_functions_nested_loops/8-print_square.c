#include "holberton.h"
#include <stdio.h>
/**
* add_space - print spaces
* @space: int lines
*/
void add_space(int space)
{
	if (space > 1)
	{
		_putchar('#');
		add_space(--space);
	}
}
/**
* print_square - Entry point
* @n: int
* Return: Always 0 (Success)
*/
void print_square(int n)
{
	const int TOP = n;

	if (n <= 0)
		_putchar('\n');
	else
		for (n = 0; n < TOP; n++)
		{
			add_space(TOP);
			_putchar('#');
			_putchar('\n');
		}
}

