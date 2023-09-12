#include <stdio.h>
/**
 * main - Fibonacci numbers that do not exceed four million
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int a = 1, b = 2, c, sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a;
		a = b;
		b = a + c;
	}
	printf("%lu\n", sum);
	return (0);
}
