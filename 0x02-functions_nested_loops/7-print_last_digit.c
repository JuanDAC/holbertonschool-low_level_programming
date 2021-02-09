#include "holberton.h"

/**
*  print_last_digit - print last digit
*
* @n: number
*
* Return: Always int
*/

int print_last_digit(int n)
{
	int last = (n % 10);

	if (n < 0)
		last = ((-1 * n) % 10);

	_putchar(last + '0');
	return (last);
}

