#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - Entry point
* @min: int
* @max: int
* Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
	int i, length = (max - min) + 1;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(length * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		*(array + i) = min;

	return (array);
}

