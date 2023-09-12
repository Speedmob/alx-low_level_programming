#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit of a number
 * @o: number used
 *
 * Return: (value of last digit of num)
*/
int print_last_digit(int o)
{
	int e = _abs(o);

	_putchar(_abs((e % 10)) + '0');
	return (_abs(e % 10));
}
