#include <stdio.h>
#include <stdlib.h>
/**
 * main - a main func that prints its own opcodes
 * @argc: num of args
 * @argv: args
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int b, a;
	char *m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	m = (char *)main;
	for (a = 0; a < b - 1; a++)
		printf("%02hhx ", m[a]);
	printf("%02hhx\n", m[a]);
	return (0);
}
