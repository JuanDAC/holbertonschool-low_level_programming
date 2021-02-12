#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long i, numbre = 612852475143;

	for (i = 2; i < sqrt(numbre); i++)
		while ((numbre % i) == 0)
			numbre /= i;
	printf("%ld\n", numbre);
	return (0);
}

