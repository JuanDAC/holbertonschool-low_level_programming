#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	p = s1;
	for (i = 0; i < 98 - 1; i++)
	{
		*(p + i) = '*';
		printf("0x%02x next -> ", *(p + i));
		printf("0x%02x character ->", *(p + i + 1));
		printf("0x%c pointer ->", *(p + i + 1));
		printf("0x%p\n", (p + i + 1));
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	p = strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", p);
	p = strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", p);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
