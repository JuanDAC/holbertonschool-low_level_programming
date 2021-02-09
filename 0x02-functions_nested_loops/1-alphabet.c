#include "holberton.h"

/**
* print_alphabet - print the alphabet on screen
*
* Return: Always void
*/
void print_alphabet(void)
{
	char character = 'a';
	int valueCharacter;

	while (character <= 'z')
		_putchar(character++);
	_putchar('\n');

}

