#include "holberton.h"
#include <limits.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;



	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	r = print_last_digit(INT_MAX / -2);
	_putchar('0' + r);
	r = print_last_digit(INT_MAX);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
