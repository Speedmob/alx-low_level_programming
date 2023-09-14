#include <stdio.h>
/**
 * main - fizz buzz interview question
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i < 101; i++)
	{
		printf(" ");
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
