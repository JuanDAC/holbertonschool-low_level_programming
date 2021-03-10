#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - Entry point
* @array: a array
* @size: a array
* @cmp: a array
* Return: Always 0 (Success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);
	return (-1);
}

