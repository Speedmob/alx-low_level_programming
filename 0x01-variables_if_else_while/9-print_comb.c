#include <stdio.h>
/**
 * main - prints all single digits with base ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	putchar(48);
	for (i = 49; i < 58; i++)
	{
		putchar(44, 32, i);
	}
	putchar(10);
	return (0);
}
