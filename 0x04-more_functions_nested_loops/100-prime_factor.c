#include <stdio.h>
/**
 * main - prints out biggest prime factor of a pre entered number
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long int o, i;

	o = 612852475143;
	i = 2;

	while (i < o)
	{
		if (o % i == 0)
		{
			o = o / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", o);
	return (0);
}
