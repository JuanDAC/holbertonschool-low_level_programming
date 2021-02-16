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
	int exp = 1;
	int sign = 1;
	int iter;
	int pos;
	int exit = 0;
	int length = leng(s);

	for (pos = length; pos >= 0; pos--)
	{
		for (iter = 0; iter <= 9; iter++)
		{
			if (*(s + pos) == ('0' + iter))
			{

				if (((pos + 1) <= length) && !(*(s + (pos + 1)) >= '0' && *(s + (pos + 1)) < '9'))
				{
					exp = 1;
					exit = 0;
				}
				if (((pos - 1) >= 0) && *(s + (pos - 1)) == '-')
					sign = -1;
				exit += (iter * exp);
				exp *= 10;
			}
		}
	}

	return (exit * sign);
}

