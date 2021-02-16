#include "holberton.h"
#include <stdio.h>
/**
* swap_int - function that swaps the values of two integers.
* @a: pinter type int
* @b: pinter type int
* Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

