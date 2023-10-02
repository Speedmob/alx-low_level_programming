#include <stdio.h>
/**
 * main - prints num of args passed
 * @argc: num of args passed
 * @argv: pointer to args passed
 *
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
