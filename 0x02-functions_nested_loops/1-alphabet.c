#include "holberton.h"

/**
* print_alphabet - print the alphabet on screen
*
* Return: Always 0
*/
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');

}

