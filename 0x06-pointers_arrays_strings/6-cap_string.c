#include "holberton.h"
/**
* toUpper - prints a string, in reverse,
*             followed by a new line
* @string: pointer type char
* Return: Always 0 (Success)
*/
void toUpper(char *string)
{
	if (*string > 'a' && *string < 'z')
		*string -= 32;
}
/**
* toLower - prints a string, in reverse,
*             followed by a new line
* @string: pointer type char
* Return: Always 0 (Success)
*/
void toLower(char *string)
{
	if (*string > 'A' && *string < 'Z')
		*string += 32;
}
/**
* include - prints a string, in reverse,
*             followed by a new line
* @string: pointer type char
* Return: Always 0 (Success)
*/
int include(char *string)
{
	char *separators = " \t\n,;.!?\"(){}";

	for (; *separators != '\0'; separators++)
		if (*separators == *string)
			return (1);
	return (0);
}
/**
* cap_string - prints a string, in reverse,
*             followed by a new line
* @string: pointer type char
* Return: Always 0 (Success)
*/
char *cap_string(char *string)
{

	char *head = string;

	while (*string != '\0')
	{
		if (string == head)
			toUpper(string);
		else if (include(string - 1))
			toUpper(string);
		else
			toLower(string);
		string++;
	}
	return (head);
}

