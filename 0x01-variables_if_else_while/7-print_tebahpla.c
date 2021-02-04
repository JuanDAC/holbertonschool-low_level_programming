#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
		putchar(lowerCase);
	putchar('\n');
	return (0);
}
