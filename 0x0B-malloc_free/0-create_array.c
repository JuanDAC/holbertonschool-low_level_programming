#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_fill - create a array than custom size and
*                fill c character
* @array: charater to fill array
* @c: charater to fill array
* @size: size of array
* Return: Pointer to array or null if size is 0
*/
char *array_fill(char *array, unsigned int size, char c)
{
	*(array + size) = c;
	if (size == 0)
		return (array);
	return (array_fill(array, size - 1, c));
}
/**
* create_array - create a array than custom size and
*                fill c character
* @c: charater to fill array
* @size: size of array
* Return: Pointer to array or null if size is 0
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array = (char *)malloc(size * sizeof(char));

	return (array_fill(array, size, c));
}

