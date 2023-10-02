#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints cents given
 * @argc: num of args passed
 * @argv: pointer to args passed
 *
 * Return: 0 (success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int c = 0, a = 0, x;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		puts("0");
		return (1);
	}
	while (x)
	{
		if (x >= cents[a])
		{
			x -= cents[a];
			c++;
		}
		else
			a++;
	}
	printf("%d\n", c);
	return (0);
}
