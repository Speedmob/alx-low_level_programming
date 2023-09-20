#include "main.h"
/**
 * rot13 - encodes a string into rot13.
 * @n: String to be encoded.
 *
 * Return: encoded String.
*/
char *rot13(char *n)
{
	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char m[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int o;
	int e;

	for (o = 0; n[o]; o++)
	{
		for (e = 0; a[e]; e++)
		{
			if (n[o] == a[e])
			{
				n[o] = m[e];
				break;
			}
		}
	}
	return (n);
}
