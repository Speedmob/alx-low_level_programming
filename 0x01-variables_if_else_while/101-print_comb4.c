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
	int b = 2;
	int x = 49;
	int y = 50;

	for (b = 48; b < 56; b++)
	{
		for (i = x; i < 57; i++)
		{
			for (a = y; a < 58; a++)
			{
				putchar(b);
				putchar(i);
				putchar(a);
				if (i != 56 || a != 57 || b != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
			y++;
		}
		x++;
		y = 50 + (b - 47);
	}
	putchar(10);
	return (0);
}
