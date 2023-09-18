#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - turns str into num
 * @s: str to be turned
 *
 * Return: turned int
*/
int _atoi(char *s)
{
	int i = 0, c = 0, ss = 1, n = 0, h = 0;

	while (!(s[i] > 47 && s[i] < 58))
	{
		if (s[i] == 45)
		{
			c++;
		}
		i++;
	}
	h = i;
	i++;
	while (s[i] > 47 && s[i] < 58)
	{
		ss *= 10;
		i++;
	}
	n--;
	while ((s[h] > 47 && s[h] < 58) && (h < _strlen(s)))
	{
		n += (s[h] - '0') * ss;
		ss /= 10;
		h++;
	}
	if (c % 2 != 0)
	{
		return (-n - 1);
	}
	return (n + 1);
}
