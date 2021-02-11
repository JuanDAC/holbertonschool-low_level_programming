#include "holberton.h"
#include <stdio.h>
/**
* _isupper - function that checks for uppercase character.
*
* @c: int char
*
* Return: 1 (is uppercase) else 1
*/
int _isupper(int c)
{
	return ((c > 'A' && c < 'Z') ? 1 : 0);
}

