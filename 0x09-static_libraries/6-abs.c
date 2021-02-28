#include "holberton.h"

/**
* _abs - function that computes the absolute value of an integer
*
* @n: char ascii in int
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/
int _abs(int n)
{
	if (n < 0)
		return (-(n));
	return (n);
}
