#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* sum_them_all - Entry point
* @n: const unsigned int
* Return: Always 0 (Success)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg; /* declaramos que es una lista de aargumento */
	unsigned int i, sum;

	va_start(arg, n);/* arg = ; */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}

