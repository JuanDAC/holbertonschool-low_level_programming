#include "variadic_functions.h"
#include <stdarg.h>
#define NILL "(nil)"
#define SEPARATOR ", "
/**
* print_all - print everything
* @format: list of types of arguments
* Return: return always void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *current_string, *separator = "";
	va_list types_to_print;

	va_start(types_to_print, format);

	while (format != '\0' && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%s%c", separator, va_arg(types_to_print, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(types_to_print, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(types_to_print, double));
				break;
			case 's':
				current_string = va_arg(types_to_print, char *);
				if (current_string == NULL)
					current_string = NILL;
				printf("%s%s", separator, current_string);
				break;
			default:
				i++;
				continue;
		}
		separator = SEPARATOR;
		i++;
	}
	printf("\n");
	va_end(types_to_print);
}
