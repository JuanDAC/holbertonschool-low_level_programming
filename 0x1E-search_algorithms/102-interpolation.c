#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * @left: 0
 * @right: size - 1
 *
 * Return: the first index where value is located, or -1 on failure
 */
int my_interpolation_search(int *array, size_t size,
	int value, size_t right, size_t left
)
{
	size_t index = 0;

	if (array == NULL && size == 0)
		return (-1);

	if (array[left] == array[right] && array[right] == value)
		return (right);

	if (array[left] == array[right])
		return (-1);

	index = interpolation(array, value, left, right);

	if (index < left || index > right)
	{
		printf("Value checked array[%lu] is out of range\n", index);
		return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", index, array[index]);

	if (array[index] < value)
		return (my_interpolation_search(array, size, value, right, index + 1));

	if (array[index] > value)
		return (my_interpolation_search(array, size, value, index - 1, left));

	return (index);
}
