#include "holberton.h"
#define COMMA ','
#define SPACE ' '
#define ASCIIZERO '0'

/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: int times table, starting with 0.
 *
 * Return: void
 */
void print_times_table(int n)
{
	short x, y, product;

	if (n > 15 || n < 0)
		return;

	for (x = 0; x <= n; x++)
	{
		_putchar(ASCIIZERO);
		for (y = 1; y <= n; y++)
		{
			product = (x * y);
			if (product <= 9)
			{
				_putchar(COMMA);
				_putchar(SPACE);
				_putchar(SPACE);
				_putchar(SPACE);
				_putchar(product + ASCIIZERO);
			}
			else if (product <= 99)
			{
				_putchar(COMMA);
				_putchar(SPACE);
				_putchar(SPACE);
				_putchar((product / 10) + ASCIIZERO);
				_putchar((product % 10) + ASCIIZERO);
			}
			else
			{
				_putchar(COMMA);
				_putchar(SPACE);
				_putchar((product / 100) + ASCIIZERO);
				_putchar(((product / 10) % 10) + ASCIIZERO);
				_putchar((product % 10) + ASCIIZERO);
			}
		}
		_putchar('\n');
	}
}
