#include "holberton.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char word[] = "Holberton\n";

	int index;

	for (index = 0; index <= 9; index++)
		_putchar(word[index]);

	return (0);
}
