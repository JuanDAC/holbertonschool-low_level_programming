#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - print diagsumsint
* @a: char
* @size: char
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int iter, i = 0, j = 0, diagonal1 = 0, diagonal2 = 0;

	for (iter = 0; iter < size * size; iter++)
	{
		i = (iter % size);

		if (j == i)
		{
			diagonal1 += *(a + i + (j * size));
			diagonal2 += *(a + i + ((size - 1 - j) * size));
		}

		if ((iter + 1) % size == 0)
			j += 1;
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
