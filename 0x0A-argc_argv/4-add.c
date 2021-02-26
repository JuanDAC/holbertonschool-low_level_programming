#include <stdio.h>
/**
* _pow - Entry point
* @base: int
* @expo: int
* Return: Always 0 (Success)
*/
int _pow(int base, int expo)
{
	return ((expo == 0) ? 1 : (base * _pow(base, expo - 1)));
}
/**
* length - Entry point
* @string: int
* Return: Always 0 (Success)
*/
int length(char *string)
{
	return ((*string == '\0') ? 0 : 1 + length(string + 1));
}
/**
* paserInt - Entry point
* @string: int
* Return: Always 0 (Success)
*/
int paserInt(char *string)
{
	int number_raw, processed_number;

	if (*string == '\0')
		return (0);

	number_raw = ((int)*string) - 48;
	processed_number = number_raw * _pow(10, length(string)) / 10;
	return (processed_number + paserInt(string + 1));
}
/**
* is_number - Entry point
* @string: int
* Return: Always 0 (Success)
*/
int is_number(char *string)
{
	if (*string == '\0')
		return (1);
	return ((*string >= '0' && *string <= '9') && is_number(string + 1));
}
/**
* main - Entry point
* @argc: int
* @argv: int
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(*(argv + i)))
		{
			printf("Error\n");
			return (1);
		}
		sum += paserInt(*(argv + i));
	}
	printf("%d\n", sum);

	return (0);
}

