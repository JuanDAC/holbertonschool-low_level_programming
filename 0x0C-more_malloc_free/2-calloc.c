#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - Entry point
* @nmemb: unsigned int
* @size: unsigned int
* Return: Always (buffer)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);

	return (buffer);
}

