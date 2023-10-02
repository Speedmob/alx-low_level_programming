#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: num of args passed
 * @argv: pointer to args passed
 *
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", (int)(atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
