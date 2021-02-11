#include "holberton.h"
/**
* more_numbers - function that prints 10 times the numbers,
*                from 0 to 14, followed by a new line.
* Return: void
*/
void more_numbers(void)
{
	short number = -1;

	while ((number++) < 14)
	{
		if (number >= 10)
			_putchar((number / 10) + '0');
		_putchar((number % 10) + '0');
	}
	_putchar('\n');

}

