#include "main.h"
/**
 * print_most_numbers - print numbers between one and nine
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
