#include "holberton.h"
#include <stdio.h>
/**
* _print_first - Entry point
* @n: number
* @expo: number to module
* Return: Always 0 (Success)
*/
int _print_first(int n, int expo)
{
	const int CURRENTDIV = (n / 10);

	if (CURRENTDIV > 9)
		return (_print_first(CURRENTDIV, (10 * expo)));
	if (CURRENTDIV < 0)
	{
		_putchar('-');
		_putchar((-CURRENTDIV) + '0');
	}
	else
		_putchar((n % 10) + '0');
	return (expo);
}

/**
* _print_number - Entry point
* @n: number
* Return: Always 0 (Success)
*/
void _print_number(int n)
{
	int mod;

	if (n % 10 != 0 && n / 10 != 0)
	{
		mod = _print_first(n, 10);
		if ((n % mod) < (mod / 10))
			putchar('0');
		_print_number(n % mod);
	}
}


/**
* print_number - Entry point
* @n: number
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	if (n % 10 == 0 && n / 10 == 0)
		_putchar('0');
	else
		_print_number(n);
	_putchar('\n');
}


