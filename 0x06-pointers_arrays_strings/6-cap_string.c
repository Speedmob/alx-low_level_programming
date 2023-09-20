#include "main.h"
/**
 * _checker - special character checker
 * @a: char to check
 *
 * Return: 0 (false), 1 (true)
*/
int _checker(char a)
{
	int o;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', 34,
'!', '?', '(', ')', '{', '}'};

	for (o = 0; o < 13; o++)
	{
		if (sep[o] == a)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - capitalizes all words.
 * @a: string to be changed
 *
 * Return: changed string
*/
char *cap_string(char *a)
{
	int o = 0;
	int diff;

	if (a[0] > 96 && a[0] < 123)
	{
		diff = a[0] - 'a';
		a[0] = diff + 'A';
	}
	while (a[o + 1])
	{
		if (_checker(a[o]))
		{
			if (a[o + 1] > 96 && a[o + 1] < 123)
			{
				diff = a[o + 1] - 'a';
				a[o + 1] = diff + 'A';
			}
		}
		o++;
	}
	return (a);
}
