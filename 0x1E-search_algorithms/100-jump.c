#include "search_algos.h"

/**
 * my_linear_search - searches for a value in an array of integers using the
 *                 Linear search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * @index: to evalue current index
 *
 * Return: the first index where value is located
 */

int my_linear_search(int *array, size_t size, int value, int index)
{
	if (array == NULL || (int)size == index)
		return (index * -1);

	printf(linear_search_format, index, array[index]);

	if (array[index] == value)
		return (index);

	return (my_linear_search(array, size, value, index + 1));
}

/**
 * my_jump_search - Write a function that searches for a value in a sorted
 *                  array of integers using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * @index: to evalue current index
 *
 * Return: the first index where value is located
 */
int my_jump_search(int *array, size_t size, int value, int index)
{
	int jump = 0, next = 0;

	if (array == NULL || size <= 0 || array[index] > value)
		return (-1);

	jump = sqrt(size);
	next = (index + jump) <= (int)size ? index + jump : (int)size - 1;

	printf(linear_search_format, index, array[index]);

	if (array[next] >= value || index == (int)size - 1)
	{
		printf("Value found between indexes [%d] and [%d]\n", index, index + jump);
		if (array[index] <= value)
			next = my_linear_search(array, next, value, index);
		if (next == index * -1)
			printf(linear_search_format, index, array[index]);
		return (next < 0 ? -1 : next);
	}

	return (my_jump_search(array, size, value, next));
}
