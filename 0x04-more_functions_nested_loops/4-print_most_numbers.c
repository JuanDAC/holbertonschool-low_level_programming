#include "holberton.h"
/**
* print_most_numbers - function that prints the numbers, from 0 to 9,
*                 followed by a new line.
* Return: 1 (is uppercase) else 1
*/
void print_most_numbers(void)
{
	char number = '/';

	while ((number++) < '9')
		if (number != '2' && number != '4')
			_putchar(number);
	_putchar('\n');

}

