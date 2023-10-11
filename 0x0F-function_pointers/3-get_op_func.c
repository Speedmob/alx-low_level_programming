#include "3-calc.h"
/**
 * get_op_func - compares String and fetches op func
 * @s: operator as a String
 *
 * Return: pointer to op func
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
