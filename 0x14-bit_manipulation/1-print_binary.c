#include "holberton.h"
#define MAX_BINARY 36
/**
* binary - Entry point
* @buffer: buffer string
* @number: number
* @index: index
* Return: Always 0 (Success)
*/
void binary(char *buffer, unsigned long int number, int index)
{
	if (index == 0)
		return;

	*(buffer + index) = (number & 0x1) + '0';

	_putchar(*(buffer + index));
	binary(buffer, number >> 1, index - 1);
}
/**
* print_binary - Entry point
* @n: number to comvert binary
* Return: Always 0 (Success)
*/
void print_binary(unsigned long int n)
{
	char buffer[MAX_BINARY];
	unsigned int i;
	bool start_binary = false;

	if (n == 0)
		_putchar('0');

	binary(buffer, n, MAX_BINARY - 1);

	for (i = 1; i < MAX_BINARY; i++)
	{
		if (!start_binary && buffer[i] == '1')
			start_binary = true;
		if (start_binary)
			_putchar(buffer[i]);
	}
}
