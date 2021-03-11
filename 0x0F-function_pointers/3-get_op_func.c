#include "3-calc.h"
#define LAST 5

/**
* get_op_func - chouse a function
* @s: character
* Return: function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < LAST)
	{
		if (s[1] == '\0' && *(ops[i]).op == *s)
			return ((ops + i)->f);
		i++;
	}
	return (NULL);
}
