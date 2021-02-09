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
	short x;
	short y;


	if (n > 15 || n < 0)
		return;

	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
		{

			if ((x * y) <= n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((x * y) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
