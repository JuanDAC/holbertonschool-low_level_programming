#include "holberton.h"
#include <stdio.h>
#define SPACE ' '
#define SPACEWITHSEPARATION '|'

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	for (c = (char) SPACE; c <= (char) SPACEWITHSEPARATION; c++)
		printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
