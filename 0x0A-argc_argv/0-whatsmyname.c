#include <stdio.h>
/**
* main - Entry point
* @argc: int
* @argv: int
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *(argv + argc - 1));
	else
		printf("%s\n", *(argv));

	return (0);
}

