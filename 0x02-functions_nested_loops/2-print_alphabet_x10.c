#include "holberton.h"

/**
* print_alphabet - print the alphabet on screen
*
* Return: Always void
*/
void print_alphabet_x10(void)
{
	short loop = 0;
	char character = ('a' - 1);

	while ((++loop) <= 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
	}
}
