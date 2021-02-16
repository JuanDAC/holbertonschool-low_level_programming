#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char *str;

	str = "98";
	n = _atoi(str);
	printf("%d\n", n);
	str = "-402";
	n = _atoi(str);
	printf("%d\n", n);
	str = "          ------++++++-----+++++--98";
	n = _atoi(str);
	printf("%d\n", n);
	str = "214748364";
	n = _atoi(str);
	printf("%d\n", n);
	str = "-0";
	n = _atoi(str);
	printf("%d\n", n);
	str = "Suite 402";
	n = _atoi(str);
	printf("%d\n", n);
	str = "         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA";
	n = _atoi(str);
	printf("%d\n", n);
	str = "---++++ -++ Sui - te -   402 #cisfun :)";
	n = _atoi(str);
	printf("%d\n", n);
	str = "-0";
	n = _atoi(str);
	printf("%d|\n", n);
	



	return (0);
}
