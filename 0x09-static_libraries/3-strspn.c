#include "main.h"
/**
 * _strspn - checks if a byte in s is available in accept
 * @s: String to search in
 * @accept: characters to search of
 *
 * Return: number of bytes similar
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0, l = 1;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if ((s[i] == accept[j]) && l)
			{
				k++;
				l = 0;
			}
		}
		l = 1;
		if (k != (i + 1))
			break;
	}
	return (k);
}
