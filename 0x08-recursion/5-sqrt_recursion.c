#include "holberton.h"
#include <stdio.h>
/**
* _pow_recursion -  point
* @x: char
* @y: char
* Return: Always 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

