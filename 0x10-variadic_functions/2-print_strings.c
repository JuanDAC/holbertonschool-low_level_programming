#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - Entry point
* @n: const unsigned int
* @separator: const unsigned int
* Return: Always 0 (Success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *current_string;

	if (separator == NULL)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(arg, char *);
		current_string = current_string ? current_string : "(nil)";
		separator = ((i + 1) == n) ? ("") : separator;
		printf("%s%s", current_string, separator);
	}
	va_end(arg);
}

