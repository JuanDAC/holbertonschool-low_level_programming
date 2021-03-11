#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 101, 0, "lberton");
	print_all("ceis", 'H', 0, "lberton");
	print_all("ceis", 'H', 0, NULL);
	print_all("ceis", '\0', "lberton", 0);
	print_all("ceis", 'H', 0, "lberton");
	print_all("ceis", 'H', 0, "lberton");
	return (0);
}
