nclude "holberton.h"
#include <stdio.h>
#declare SPACE 32
#declare SPACEWITHSEPARATION 255

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	for (c = SPACE; c <= SPACEWITHSEPARATION; c++)
		printf("%c: %d\n", c, _isupper(c));

	return (0);
}
