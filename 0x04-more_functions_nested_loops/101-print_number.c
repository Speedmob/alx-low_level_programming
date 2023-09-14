#include "main.h"
/**
 * print_number - prints out an integer
 *@n: the number to be printed.
*/
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while (n != 0)
	{
		_putchar((n % 10) + '0');
		n = n / 10;
	}
}
