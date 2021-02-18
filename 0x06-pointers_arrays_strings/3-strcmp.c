#include "holberton.h"
#include <stdio.h>
/**
* _strcmp - Entry point
* @s1: pointer type char
* @s2: pointer type char
* Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	return (((int) *s1) - ((int) *s2));
}

