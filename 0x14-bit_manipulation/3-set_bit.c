#include "holberton.h"
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

