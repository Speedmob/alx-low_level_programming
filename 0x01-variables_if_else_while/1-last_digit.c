#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a num and checks it's last digit
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		int last_d = n % -10;

		if (last_d == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_d);
		}
		else if (last_d < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
		}
	}
	else
	{
		int last_d = n % 10;

		if (last_d == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_d);
		}
		else if (last_d < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
		}
	}
	return (0);
}
