#include "search_algos.h"

/**
 * my_jump_search - Write a function that searches for a value in a sorted
 *                  array of integers using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * @i: to evalue current index
 * @to_lineal: to evalue current index
 *
 * Return: the first index where value is located
 */
int my_jump_search(int *array, size_t size, int value, int i, int to_lineal)
{
	int jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	if (array[i] < value && !to_lineal)
	{
		printf(linear_search_format, i, array[i]);
		if ((i + jump) >= (int)size || array[i + jump] >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n", i, i + jump);
			return (my_jump_search(array, size, value, i, i + jump));
		}
		return (my_jump_search(array, size, value, i + jump, 0));
	}
	else if (i <= to_lineal && i < (int)size)
	{
		printf(linear_search_format, i, array[i]);
		if (array[i] == value)
			return (i);
		return (my_jump_search(array, size, value, i + 1, to_lineal));
	}
	return (-1);
}
