#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[][10] = {
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
		{11, 12, 30, 40, 50, 60, 70, 80, 90, 99},
		{5, 6, 7, 8, 9, 50, 60, 70, 80, 90},
	};

	size_t i = 0;
	size_t size = sizeof(array) / sizeof(array[0]), insize = 0;

	for (i = 0; i < size; i++)
	{
		printf("|%d|________________________\n", (int)i + 1);
		insize = sizeof(array[i]) / sizeof(array[i][0]);
		printf("Found %d at index: %d\n\n", 2, binary_search(array[i], insize, 2));
		printf("Found %d at index: %d\n\n", 9, binary_search(array[i], 9, 9));
		printf("Found %d at index: %d\n\n", 5, binary_search(array[i], 5, 5));
		printf("Found %d at index: %d\n", 99, binary_search(array[i], insize, 99));
	}
	return (EXIT_SUCCESS);
}
