#include "holberton.h"
#include <stdlib.h>
/**
* create_array - create a array than custom size and
*                fill c character
* @c: charater to fill array
* @size: size of array
* Return: Pointer to array or null if size is 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0 || c == '\0')
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		*(array + i) = c;

	return (array);
}

