#include "main.h"
/**
 * print_line - print a straight line
 * @n: length of straight line
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
