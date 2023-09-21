#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: where the result will be stored
 * @size_r: r size
 *
 * Return: r (resultant of n1 + n2), 0 (fail)
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, d, s, m, c = 0, j, k;
	char e = '0';

	for (a = 0; n1[a]; a++)
	{
	} for (b = 0; n2[b]; b++)
		;
	if ((a + 1) >= size_r || (b + 1) >= size_r)
	{
		return (0);
	}
	for (a = a - 1, b = b - 1; a >= 0 || b >= 0 || e != '0'; a--, b--, c++)
	{
		j = (n1[a] - '0'), k = (n2[b] - '0');
		if (a < 0)
			j = 0;
		if (b < 0)
			k = 0;
		d = j + k + (e - '0');
		e = '0';
		if (d >= 10)
		{
			e = '1';
			d = d % 10;
		}
		r[c] = (d + '0');
	}
	r[c] = '\0';
	c--;
	for (m = 0; m < ((c + 1) / 2); m++)
	{
		s = r[c - m];
		r[c - m] = r[m];
		r[m] = s;
	}
	return (r);
}
