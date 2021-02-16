#include "holberton.h"
/**
* rev_string - function that prints a string, in reverse,
*             followed by a new line
* @s: pointer type char
* Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	char *first = s;
	int length = 0;
	char tmp;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
	s--;

	while (first <= s)
	{
		tmp = *first;
		*first = *s;
		*s = tmp;
		first++;
		s--;
	}

}

