#include <stdio.h>
/**
 * main - first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int a = 1, b = 2, c, i, a_1, a_2, b_1, b_2, c_1, c_2;

	for (i = 1; i <= 90; i++)
	{
		printf("%lu, ", a);
		c = a;
		a = b;
		b = a + c;
	}

	a_1 = a / 10000000000;
	a_2 = a % 10000000000;
	b_1 = b / 10000000000;
	b_2 = b % 10000000000;
	c_1 = c / 10000000000;
	c_2 = c % 10000000000;

	for (i = 91; i < 99; i++)
	{
		printf("%lu", a_1 + (a_2 / 10000000000));
		printf("%lu", a_2 % 10000000000);
		if (i != 98)
		{
			printf(", ");
		}
		c_1 = a_1;
		c_2 = a_2;
		a_1 = b_1;
		a_2 = b_2;
		b_1 = a_1 + c_1;
		b_2 = a_2 + c_2;
	}
	printf("\n");
	return (0);
}
