#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - function that prints all natural numbers from n to 98.
*
* @n: int
*
* Return: void
*/
void print_to_98(int n)
{
	short top = 98;

	printf("%d", n);
	if (n != top)
	{
		printf(", ");
		print_to_98((n < top) ? ++n : --n);
	}
	else
		printf("\n");
}

