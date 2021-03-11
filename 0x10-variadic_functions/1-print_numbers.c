#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - Entry point
* @n: const unsigned int
* @separator: const unsigned int
* Return: Always 0 (Success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int current_value;

	if (separator == NULL)
	{
		return;
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		separator = ((i + 1) == n) ? ("") : separator;
		current_value = va_arg(arg, int);
		printf("%d%s", current_value, separator);
	}
	printf("\n");
	va_end(arg);
}

