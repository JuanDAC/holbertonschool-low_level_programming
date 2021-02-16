#include "holberton.h"
#include <stdio.h>
/**
* leng - function that convert a string to an integer.
* @s: string
* Return: int
*/
int leng(char *s)
{
	return (*s != '\0' ? 1 + leng(s + 1) : 0);
}

/**
* _atoi - function that convert a string to an integer.
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	unsigned int exp = 1;
	short sign = 1;
	unsigned int iter;
	unsigned int pos;
	unsigned int exit = 0;
	int length = leng(s);

	for (pos = length; pos >= 0; pos--)
	{
		if (*(s + pos) == '-' && exp > 1)
			sign *= -1;
		else if (*(s + pos) == '+' && exp > 1)
			sign *= 1;
		for (iter = 0; iter <= 9; iter++)
		{
			if (*(s + pos) == ('0' + iter))
			{

				if (
					((pos + 1) <= length)
					&& !(
						*(s + (pos + 1)) >= '0'
						&& *(s + (pos + 1)) < '9'
					)
				)
				{
					exp = 1;
					exit = 0;
				}
				exit += (iter * exp);
				exp *= 10;
			}
		}
	}

	return (exit * sign);
}

