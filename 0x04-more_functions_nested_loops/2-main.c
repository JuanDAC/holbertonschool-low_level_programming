#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	short i, random1, random2;
	time_t t;

	/* Intializes random number generator */
	srand((int) time(&t));

	for (i = 0; i < 10; i++)
	{
		random1 = (rand() - rand());
		random2 = (rand() - rand());
		printf("mul : %d\nreal: %d\n", mul(random1, random2), (random1 * random2));
	}
	return (0);
}
