#include "holberton.h"
#include <stdio.h>
double _sqrt(double x, double y)
{
	double div = (x / y) - y;

	if (div < 0)
		div *= -1;
	if (div < .001)
		return (y);
	return (_sqrt(x, ((y + x / y) / 2)));
}
/**
* _sqrt_recursion -  point
* @n: char
* Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
	double r;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	r = _sqrt((double) n, (double) 1);
	if ((double)(r - (int)r) > 0.1)
		return (-1);

	return ((int)(r));
}

