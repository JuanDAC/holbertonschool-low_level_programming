#include "holberton.h"

/**
* print_sign - function that prints the sign of a number
*
* @n: char ascii in int
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
