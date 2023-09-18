#include "main.h"
/**
 * print_rev - prints string in reverse.
 * @s: string to be printed.
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	i--;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
