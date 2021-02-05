#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numberRight;
	int numberLeft;

	for (numberLeft = 48; numberLeft <= 57; numberLeft++)
	{
		for (numberRight = 48; numberRight <= 57; numberRight++)
		{
			putchar(numberLeft);
			putchar(numberRight);
			if (!(numberRight ==  57 && numberLeft == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
