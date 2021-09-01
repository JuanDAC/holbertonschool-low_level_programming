#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 *                    the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 *
 * Return: the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size <= 0)
		return (-1);

	print_array(array, size);

	index = (size - 1) / 2;

	if (array[index] == value)
	{
		if (index != 0 || array[index - 1] == value)
			index += 1;
		else
			return (index);
	}

	if (array[index] > value)
		return (advanced_binary(array, index, value));

	value = 1 + advanced_binary(array + index + 1, size - index - 1, value);

	if (value != 0)
		return (index + value);

	return (-1);
}
