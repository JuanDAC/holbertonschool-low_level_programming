#include "holberton.h"
#include <stdio.h>
#define Fizz "Fizz"
#define Buzz "Buzz"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	short numbre = 1;

	printf("%d", numbre);
	while (numbre++ < 100)
	{
		if ((numbre % 3) == 0 && (numbre % 5) == 0)
			printf(" %s%s", Fizz, Buzz);
		else if ((numbre % 5) == 0)
			printf(" %s", Buzz);
		else if ((numbre % 3) == 0)
			printf(" %s", Fizz);
		else if ((numbre % 3) && (numbre % 5))
			printf(" %d", numbre);
	}
	printf("\n");
	return (0);
}

