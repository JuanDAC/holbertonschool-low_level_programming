#include "holberton.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char word[10] = "Holberton\n";

	int index = 0;

	while (word[index])
		_putchar(word[index++]);

	return (0);
}
