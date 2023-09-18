#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints the latter half of a string
 * @str: string to be printed
*/
void puts_half(char *str)
{
	int m = _strlen(str);
	int i;

	if (m % 2 != 0)
	{
		m++;
	}
	for (i = m / 2; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
