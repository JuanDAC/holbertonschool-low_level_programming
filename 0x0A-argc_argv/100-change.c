#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
*change - Entrypoint
*@cents:int
*@count:int
*@base:int
*Return:Always0(Success)
*/
int change(int *cents, int *count, int base)
{
	if (*cents / base < 1)
		return (0);

	*cents -= base;
	*count += 1;
	return (1 + change(cents, count, base));
}
/**
*is_number - Entrypoint
*@string:int
*Return:Always0(Success)
*/
int is_number(char *string)
{
	if (*string == '\0')
		return (1);
	return ((*string >= '0' && *string <= '9') && is_number(string + 1));
}
/**
*main - Entrypoint
*@argc:int
*@argv:int
*Return:Always0(Success)
*/
int main(int argc, char *argv[])
{
	int count = 0, cents;

	if (argc != 2 || !is_number(*(argv + 1)))
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(*(argv + 1));

	while (cents)
	if (change(&cents, &count, 25))
	{}
	else if (change(&cents, &count, 10))
	{}
	else if (change(&cents, &count, 5))
	{}
	else if (change(&cents, &count, 2))
	{}
	else if (change(&cents, &count, 1))
	{}


	printf("%d\n", count);

	return (0);
}

