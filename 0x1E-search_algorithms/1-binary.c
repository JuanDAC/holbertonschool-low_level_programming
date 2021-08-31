#include "search_algos.h"

/**
 * my_binary_search - searches for a value in a sorted array of integers using
 *                    the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * @index: to evalue current index
 *
 * Return: the first index where value is located
 */

int my_binary_search(int *array, size_t size, int value, int index)
{
	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (array[index] == value)
		return (index);

	if (array[index] > value)
		return (my_binary_search(array, size / 2, value, (size / 2)));

	return (my_binary_search(array + (size / 2), size / 2, value, (size / 2)));
}
