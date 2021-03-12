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
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{	
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}

