#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#define ERROR "Error\n"

/**
* main - check the code for Holberton School students.
* @arc: counter arguments
* @argv: values arguments
* Return: Always 0
*/
int main(int arc, char *argv[])
{
	int (*operation)(int, int);

	if (arc != 4)
	{
		printf(ERROR);
		exit(98);
	}
	if (
		(
			*(argv[2]) == '/'
			|| *(argv[2]) == '%'
		)
		&& *(argv[3]) == '0'
	)
	{
		printf(ERROR);
		exit(100);
	}
	operation = get_op_func(*(argv + 2));
	if (operation == NULL)
	{
		printf(ERROR);
		exit(99);
	}

	printf("%d\n", operation(atoi(*(argv + 1)), atoi(*(argv + 3))));
	return (0);
}

