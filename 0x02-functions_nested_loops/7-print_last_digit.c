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
	unsigned int last = (((n < 0) ? (-n) : n) % 10);

	_putchar(last + '0');
	return (last);
}

