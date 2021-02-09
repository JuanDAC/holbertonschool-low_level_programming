#include "holberton.h"

/**
* print_alphabet - print the alphabet on screen
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int loop;
	char character = ('a' - 1);

	for (loop = 0; (++loop) <= 10;)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
