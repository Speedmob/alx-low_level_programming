#include <stdio.h>
/**
 * main - first fifty Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int a = 1, b = 2, c, i;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%lu, ", a);
		}
		else
		{
			printf("%lu\n", a);
		}
		c = a;
		a = b;
		b = a + c;
	}
	return (0);
}
