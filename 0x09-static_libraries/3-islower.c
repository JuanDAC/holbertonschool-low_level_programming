#include "holberton.h"

/**
* _islower - function that checks for lowercase character
*
* @c: char ascii in int
*
* Return: Always void
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
