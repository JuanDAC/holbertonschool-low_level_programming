#include "holberton.h"
/**
* puts_half - function that prints a string, in reverse,
*             followed by a new line
* @str: pointer type char
* Return: Always 0 (Success)
*/
void puts_half(char *str)
{
	char *first = str;
	int length = 0;

	while (*str != '\0')
	{
		length = length + 1;
		str = str + 1;
	}
	str--;

	first += (length % 2) ? (length + 1) / 2 : (length) / 2;

	while (first <= str)
	{
		_putchar(*first);
		first++;
	}
	_putchar('\n');
}

