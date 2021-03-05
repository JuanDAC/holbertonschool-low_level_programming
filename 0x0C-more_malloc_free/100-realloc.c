#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - Entry point
* @ptr: void *
* @old_size: unsigned int
* @new_size: unsigned int
* Return: Always 0 (Success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *stream;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	stream = malloc(new_size);
	if (stream == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*(stream + i) = *((char *)ptr + i);

	free(ptr);

	return ((void *)stream);
}
