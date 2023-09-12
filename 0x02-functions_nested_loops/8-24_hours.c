#include <stdio.h>
/**
 * jack_bauer - prints all possible combinations of two digits
 *
*/
void jack_bauer(void)
{
	int i, a, b, c;

	for (i = 48; i < 51; i++)
	{
		for (a = 48; a < 58 && (a != 52 || i != 50); a++)
		{
			for (b = 48; b < 54; b++)
			{
				for (c = 48; c < 58; c++)
				{
					putchar(i);
					putchar(a);
					putchar(58);
					putchar(b);
					putchar(c);
					putchar(10);
				}
			}
		}
	}
}
