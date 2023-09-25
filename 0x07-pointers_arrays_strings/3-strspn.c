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
	unsigned int i = 0, j = 0, k = 0;

	while (s[i])
	{
		while (accept[j])
		{
			k = (s[i] == accept[j]) ? k : (k + 1);
			j++;
		}
		i++;
	}
	return (k);
}
