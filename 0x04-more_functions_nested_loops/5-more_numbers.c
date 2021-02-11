#include "holberton.h"
/**
* more_numbers - function that prints 10 times the numbers,
*                from 0 to 14, followed by a new line.
* Return: void
*/
void more_numbers(void)
{
	short number, iter;

	for (iter = 0; iter < 10; iter++)
	{
		for (number = 0; number < 14; number++)
		{
			if (number >= 10)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}

