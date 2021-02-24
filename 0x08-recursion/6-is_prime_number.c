#include "holberton.h"
#include <stdio.h>
/**
* prime - point
* @n: double
* @divisor: double
* Return: Always 0 (Success)
*/
int prime(int n, int divisor)
{
	if (n / 2 < divisor)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (prime(n, divisor + 1));

}
/**
* is_prime_number -  point
* @n: char
* Return: Always 0 (Success)
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

