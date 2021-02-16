#include "holberton.h"
#include <stdio.h>
/**
* _atoi - function that convert a string to an integer.
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	int exp = 1;
	int sign = 1;
	int iter;
	int exit = 0;

	if (*s == '-')
		sign = -1;

	for (; *s != '\0'; s++)
	{
		for (iter = 0; iter <= 9; iter++)
		{
			if (*s == ('0' + iter))
			{
				exit += (iter * exp);
				exp *= 10;
			}
		}
	}

	return (exit * sign);
}

