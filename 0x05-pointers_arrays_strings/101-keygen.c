#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * createPassword - generates random valid passwords
 * @key: passwords
 * @n: iteration
 */
void createPassword(char *key, int n)
{
	int r;

	srand(time(NULL));
	if (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			*key = r;
			key += 1;
			n += r;
		}
		createPassword(key, n);
	}
	else
	{
		*key = (2772 - n);
		*(key + 1) = '\n';
	}

}
/**
 * main - random valid passwords for the program 101-crackme.
 * Return: always 0
 */
int main(void)
{
	char a[100];
	int r, n;

	srand(time(NULL));
	createPassword(a, 0);
	printf("%s", a);
	return (0);
}
