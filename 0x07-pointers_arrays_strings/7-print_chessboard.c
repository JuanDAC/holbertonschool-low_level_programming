#include "holberton.h"
#include <stdio.h>
/**
* print_chessboard - Entry point
* @a: char
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	const unsigned int TOP = 8;


	for (i = 0; i < TOP; i++)
	{
		for (j = 0; j < TOP; j++)
			_putchar(*(*(a + i) + j));
		_putchar('\n');
	}
}

