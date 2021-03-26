#include "holberton.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *character = (char *) &x;

	return ((int)*character);
}
