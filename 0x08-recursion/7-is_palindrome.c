#include "holberton.h"
#include <stdio.h>
/**
* length - Entry point
* @s: char
* Return: Always 0 (Success)
*/
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
* palindrome - Entry point
* @s: char
* @l: char
* @i: char
* Return: Always 0 (Success)
*/
int palindrome(char *s, int l, int i)
{
	if ((l / 2) == i)
		return (1);
	return (*(s + i) == *(s + (l - 1 - i)) && palindrome(s, l, i + 1));
}
/**
* is_palindrome - Entry point
* @s: char
* Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
	int l = length(s);

	if (l == 0)
		return (1);
	return (palindrome(s, l, 0));
}

