#include <stdio.h>
/**
 * main - prints all args passed
 * @argc: num of args passed
 * @argv: pointer to args passed
 *
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
