#include <stdio.h>
/**
 * main - prints all letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
