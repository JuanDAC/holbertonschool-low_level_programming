#include "../hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "betty", "holbe");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "redescribed", "urites");
	hash_table_set(ht, "dram", "vivency");

	hash_table_set(ht, "mentioner", "hetairas");
	hash_table_set(ht, "neurospora", "heliotropes");
	hash_table_set(ht, "serafins", "depravement");
	hash_table_set(ht, "subgenera", "stylist");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "urites", "redescribed");
	hash_table_set(ht, "vivency", "dram");

	return (EXIT_SUCCESS);
}
