#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("\"%s\" tiene como longitud %d\n", str, len);
	str = "Hola";
	len = _strlen(str);
	printf("\"%s\" tiene como longitud %d\n", str, len);
	str = "Betty";
	len = _strlen(str);
	printf("\"%s\" tiene como longitud %d\n", str, len);
	return (0);
}
