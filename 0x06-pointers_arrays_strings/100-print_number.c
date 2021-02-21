#include "holberton.h"
#include <stdio.h>
/**
* get_scale - function that convert a string to an integer.
* @n: int
* Return: int
*/
int get_scale(int n)
{
	if (n > 10)
		return (10 * get_scale(n / 10));
	else
		return (1);

}
/**
* print_number - function that convert a string to an integer.
* @n: string
* Return: void
*/
void print_number(int n)
{
	int scale;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	for (scale = get_scale(n); scale >= 10; scale /= 10, n %= scale)
		_putchar('0' + (n / scale));
	_putchar('0' + (n / scale));

	printf("\n%d\n", scale);
}

