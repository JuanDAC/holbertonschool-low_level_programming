#include "holberton.h"
/**
* _isdigit - function that checks for a digit (0 through 9).
*
* @c: int char
*
* Return: 1 (is uppercase) else 1
*/
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

