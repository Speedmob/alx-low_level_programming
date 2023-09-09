#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, a, b, c, o = 48, g = 48;
	int checker = 1;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58 && (a != 57 || i != 57); a++)
		{
			g = i;
			o = a + 1;
			if (a == 57)
			{
				g = i + 1;
				o = 48;
			}
			checker = 1;
			for (b = g; b < 58; b++)
			{
				for (c = o; c < 58; c++)
				{
					if (checker == 1)
					{
						o = 48;
						checker = 0;
					}
					putchar(i);
					putchar(a);
					putchar(32);
					putchar(b);
					putchar(c);
					if (i != 57 || a != 56 || b != 57 || c != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
