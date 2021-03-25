#include "holberton.h"
/**
* length_str - length str
* @string: string
* Return: length string
*/
size_t length_str(const char *string)
{
	return ((*string == '\0') ? 0 : 1 + length_str(string + 1));
}
/**
* have_zero_or_one - Entry point
* @b: binary
* Return: Always 0 (Success)
*/
int have_zero_or_one(const char *b)
{
	if (b == NULL)
		return (false);

	if (*b == '\0')
		return (true);

	return ((*b == '0' || *b == '1') && have_zero_or_one(b + 1));
}
/**
* binary_to_uinterger - Entry point
* @b: binary
* @i: binary
* Return: Always 0 (Success)
*/
unsigned int binary_to_uinterger(const char *b, size_t i)
{
	if (*b == '\0')
		return (0);

	return (((*b == '1') * (0x01 << i)) + binary_to_uinterger(b + 1, i - 1));
}
/**
* binary_to_uint - Entry point
* @b: binary
* Return: Always 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL || !have_zero_or_one(b))
		return (0);

	return (binary_to_uinterger(b, length_str(b) - 1));
}

