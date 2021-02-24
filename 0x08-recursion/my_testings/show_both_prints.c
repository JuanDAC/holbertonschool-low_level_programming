#include <stdio.h>

void show_both_prints(
	char **texts,
	unsigned int length,
	void (*print_type_one)(char *s),
	void (*print_type_two)(char *s)
)
{
	unsigned int i;

	for (i = 0; i < length; i++)
	{
		printf("case %d\n", (i + 1));
		print_type_one(*(texts + i));
		print_type_two(*(texts + i));
		printf(">>-------------------<<\n")
	}
}
