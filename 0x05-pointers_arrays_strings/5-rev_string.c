#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
*/
void rev_string(char *s)
{
	int m = 0, i = 0;
	char a;

	while (s[i])
	{
		i++;
	}
	i--;
	for (m = 0; m < ((i + 1) / 2); m++)
	{
		a = s[i - m];
		s[i - m] = s[m];
		s[m] = a;
	}
}
