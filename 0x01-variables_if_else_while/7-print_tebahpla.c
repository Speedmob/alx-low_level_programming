#include <stdio.h>
/**
 * main - prints all single digits with base ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
