#include "holberton.h"
#include <stdio.h>
/**
* add_space - print spaces
* @space: int lines
*/
void add_space(int space)
{
	if (space > 0)
	{
		_putchar(' ');
		add_space(--space);
	}
}
/**
* print_diagonal - Entry point
* @n: int
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	const int TOP = n;

	if (n <= 0)
		_putchar('\n');
	else
		for (n = 0; n < TOP; n++)
		{
			add_space(n);
			_putchar('\\');
			_putchar('\n');
		}
}

