#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#define STATUS_ERROR_98 98
/**
* malloc_checked - Entry point
* @b: unsigned int size of malloc
* Return: Always 0 (Success)
*/
void *malloc_checked(unsigned int b)
{
	void *pointer_checked;

	pointer_checked = malloc(b);

	if (pointer_checked == NULL)
		exit(STATUS_ERROR_98);

	return (pointer_checked);
}

