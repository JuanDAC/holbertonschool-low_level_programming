#include "holberton.h"
#define MAX_BINARY 80
/**
* binary_length - Entry point
* @start_binary: start_binary
* @number: number
* @index: index
* Return: Always 0 (Success)
*/
size_t binary_length(
	bool *start_binary,
	unsigned long int number,
	unsigned long int index
)
{
	size_t idx;

	if (index == MAX_BINARY)
		return (0);

	idx = binary_length(start_binary, number >> 1, index + 1);

	if (!*start_binary && (number & 0x1) + '0' == '1')
		*start_binary = true;

	if (*start_binary)
		return (1 + idx);
	return (0);
}
/**
* set_bit - Entry point
* @n: number to comvert binary
* @index: number to comvert binary
* Return: Always 0 (Success)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n = ((unsigned long int)(0x1 << index) | *n);
	return (1);
}

