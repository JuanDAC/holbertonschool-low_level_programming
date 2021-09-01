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


/**
 * my_exponential_search - searches for a value in a sorted array
 *                         of integers using the Exponential search algorithms
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @index: current index
 *
 * Return: first index where value is located, or -1 on failure
 */

int my_exponential_search(int *array, size_t size, int value, int index)
{
	int base = 0;

	if (array == NULL || size == 0)
		return (-1);

	if (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		return (my_exponential_search(array, size, value, index << 1));
	}
	base = index;
	index = min(size - 1, index << 1, int);

	printf("Value found between indexes [%i] and [%i]\n", base, index);
	index = binary_search(array + base, (index + 1) - base, value);

	if (index != -1)
		return (index + base);

	return (-1);
}

