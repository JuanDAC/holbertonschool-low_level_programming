#include "holberton.h"

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
		_putchar('0');
		for (y = 1; y <= n; y++)
		{
			product = (x * y);
			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
