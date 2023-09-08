#include <stdio.h>
#include<unistd.h>
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
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
