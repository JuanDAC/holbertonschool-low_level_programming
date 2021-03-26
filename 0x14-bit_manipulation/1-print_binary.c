
#include "holberton.h"
#define MAX_BINARY 52
/**
* binary - Entry point
* @start_binary: start_binary
* @number: number
* @index: index
* Return: Always 0 (Success)
*/
void binary(bool *start_binary, unsigned long int number, unsigned long int index)
{
	if (index == MAX_BINARY)
		return;

	binary(start_binary, number >> 1, index + 1);

	if (!*start_binary && (number & 0x1) + '0' == '1')
		*start_binary = true;

	if (*start_binary)
		_putchar((number & 0x1) + '0');
}
/**
* print_binary - Entry point
* @n: number to comvert binary
* Return: Always 0 (Success)
*/
void print_binary(unsigned long int n)
{
	bool start_binary = false;

	if (n == 0)
		_putchar('0');

	binary(&start_binary, n, 0);
}
