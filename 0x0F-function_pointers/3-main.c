#include "3-calc.h"
/**
 * main - calc two nums
 * @argc: num of args
 * @argv: args
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_fun = get_op_func(argv[2]);
	if (op_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
