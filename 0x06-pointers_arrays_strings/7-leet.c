#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: String to be encoded.
 *
 * Return: encoded String.
*/
char *leet(char *n)
{
	char a[] = "AaEeOoTtLl";
	char o[] - "4433007711";
	int o;
	int e;

	for (o = 0; n[o]; o++)
	{
		for (e = 0; a[e]; e++)
		{
			if (n[o] == a[e])
			{
				n[o] = o[e];
			}
		}
	}
	return (n);
}
