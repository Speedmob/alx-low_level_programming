#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int a = 1;
	int x = 49;

	for (i = 48; i < 57; i++)
	{
		for (a = x; a < 58; a++)
		{
			putchar(i);
			putchar(a);
			if (i != 56 || a != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
	}
	putchar(10);
	return (0);
}
