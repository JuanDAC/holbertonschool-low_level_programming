#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#define SEPARATOR ", "

/**
* print_all - Entry point
* @format: const unsigned int
* Return: Always 0 (Success)
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	int separator = 0;

	if (format == NULL)
	{
		printf("(nil)");
		return;
	}
	i = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				separator = 1;
			break;
			case 'i':
				printf("%d", va_arg(arg, int));
				separator = 1;
			break;
			case 'f':
				printf("%f", va_arg(arg, double));
				separator = 1;
			break;
			case 's':
				printf("%s", va_arg(arg, char *));
				separator = 1;
			break;
		}
		i++;
		if (format[i] != '\0' && separator == 1)
			printf(SEPARATOR);
		separator = 0;
	}
	va_end(arg);
	printf("\n");
}

