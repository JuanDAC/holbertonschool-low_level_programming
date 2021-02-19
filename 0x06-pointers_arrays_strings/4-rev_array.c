#include "holberton.h"
/**
* reverse_array - function that prints a string, in reverse,
*             followed by a new line
* @a: pointer type char
* @n: pointer type char
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
	int *first = a;
	int tmp;

	a += (n - 1);

	while (first <= a)
	{
		tmp = *first;
		*first = *a;
		*a = tmp;
		first++;
		a--;
	}
}

