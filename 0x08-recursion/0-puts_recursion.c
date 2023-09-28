#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: String to print
*/
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
