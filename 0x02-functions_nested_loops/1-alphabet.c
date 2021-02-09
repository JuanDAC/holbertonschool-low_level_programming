#include "holberton.h"

/**
* print_alphabet - print the alphabet on screen
*
* Return: Always void
*/
void print_alphabet(void)
{
	char character;
	int valueCharacter;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');

}

