#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
*main - Entrypoint
*@argc:int
*@argv:int
*Return:Always0(Success)
*/
int main(int argc, char *argv[])
{
	int long coins = 0, cents = 0;

	if (argc != 2)
	{
		printf("ERORR\n");
		return (EXIT_FAILURE);
	}
	if (atoi(*(argv + 1)) > 0)
		cents = atoi(*(argv + 1));
	if (cents > 0)
	{
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents / 1;
		cents %= 1;
	}
	printf("%ld\n", coins);
	return (EXIT_SUCCESS);
}

