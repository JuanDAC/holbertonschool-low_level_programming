#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int lowerCase = 97;
	int lastCase = 26;

	for (i = 0; i < lastCase; i++)
	{
		putchar(lowerCase + i);
	}
	putchar('\n');
	return (0);
}

