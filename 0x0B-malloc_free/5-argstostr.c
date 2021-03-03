#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* lenght - Entry point
* @string: int
* Return: Always 0 (Success)
*/
int lenght(char *string)
{
	return ((*string == '\0') ? 1 : 1 + lenght(string + 1));
}
/**
* argstostr - Entry point
* @ac: int
* @av: char
* Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, lenght_av = 0;
	char *string;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
		lenght_av += lenght(*(av + i));

	string = (char *)malloc((lenght_av + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(string + k) = *(*(av + i) + j);
			if (*(*(av + i) + (j + 1)) == '\0')
			{
				*(string + k + 1) = '\n';
				k += 1;
			}
			k += 1;
		}
	*(string + k) = '\0';
	return (string);
}

