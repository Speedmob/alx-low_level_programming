#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints product of two numbers
 * @argc: num of args passed
 * @argv: pointer to args passed
 *
 * Return: 0 (success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int x = 0, a, m;

	for (a = 1; a < argc; a++)
	{
		for (m = 0; argv[a][m]; m++)
			if (isdigit(argv[a][m]) == 0)
			{
				puts("Error");
				return (1);
			}
		x += atoi(argv[a]);
	}
	printf("%d\n", x);
	return (0);
}
