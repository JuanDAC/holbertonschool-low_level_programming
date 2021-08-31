#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 *                    the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 *
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size <= 0)
		return (-1);

	print_array(array, size);

	index = (size - 1) / 2;

	if (array[index] == value)
		return (index);

	if (array[index] > value)
		return (binary_search(array, index, value));

	value = 1 + binary_search(array + index + 1, size - index - 1, value);

	if (value != 0)
		return (index + value);

	return (-1);
}
