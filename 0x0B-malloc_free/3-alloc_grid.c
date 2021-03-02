#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Entry point
* @width: char
* @height: char
* Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
	int i;
	int **matrix = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		*(matrix + i) = (int *)malloc(sizeof(int) * width);
	return (matrix);
}

