#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - Entry point
* @format: const unsigned int
* Return: Always 0 (Success)
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, separator = 0;
	char *current_string;

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
				current_string = va_arg(arg, char *);
				if (current_string == NULL)
					printf("(nil)");
				else
					printf("%s", current_string);
				separator = 1;
			break;
		}
		i++;
		if (format[i] != '\0' && separator == 1)
			printf(", ");
		separator = 0;
	}
	va_end(arg);
	printf("\n");
}

