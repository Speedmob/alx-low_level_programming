#include <stdio.h>
/**
 * main - prints all single digits with base ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
