#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_zero - adds positive numbers
 * @string: string to validate
 *
 * Return: Always 0
 */
int is_zero(char *string)
{
	if (*string == '\0')
		return (1);
	return ((*string == '0') && is_zero(s + 1));
}
/**
 * main - adds positive numbers
 * @argc: counter of arguments
 * @argv: vector of strings in arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && !is_zero(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

