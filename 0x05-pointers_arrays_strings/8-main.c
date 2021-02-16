#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char array3[5];
	int array[9];
	int array2[2];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	array[5] = 24;
	array[6] = -124;
	array[7] = -24;
	array[8] = 1024;
	array3[0] = 'h';
	array3[1] = 'o';
	array3[2] = 'l';
	array3[3] = 'a';
	array3[4] = '\0';
	array2[0] = 98;
	array2[1] = 402;

	print_array(array, 6);
	print_array(array2, 7);
	printf("%c\n", array3[0]);

	return (0);
}
