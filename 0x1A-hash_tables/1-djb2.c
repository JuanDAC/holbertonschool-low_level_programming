#include "hash_tables.h"

/**
 * hash_djb2 - Hash function algorimt djb2
 *
 * @str: array of unsigned characters
 *
 * Return: return number hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int c = 0;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;/* hash * 33 + c */
	}
	return (hash);
}
