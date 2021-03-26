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
* binary - Entry point
* @number: number
* @index: index
* @idx: index
* @max: index
* Return: Always 0 (Success)
*/
int binary(
	unsigned long int number,
	unsigned long int index,
	unsigned int idx,
	size_t max
)
{
	if (index == max)
		return (-1);

	if (index == idx)
		return ((number & 0x1));

	return (binary(number >> 1, index + 1, idx, max));
}
/**
* get_bit - Entry point
* @n: number to comvert binary
* @index: number to comvert binary
* Return: Always 0 (Success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	bool start_binary = false;
	size_t length_binary;

	if (n == 0)
		return ((index == 0) ? 0 : -1);

	length_binary = binary_length(&start_binary, n, 0);

	return (binary(n, 0, index, length_binary));
}
