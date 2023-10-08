#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concats two strings
 * @s1: first String
 * @s2: second String
 * @n: bytes to concat from s2
 *
 * Return: pointer to concatnated String
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, m = 0, a;
	char *str_mix;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[m]; m++)
			;
	if (n <= m)
		m = n;
	str_mix = malloc(sizeof(char) * (i + m) + 1);
	if (str_mix == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		str_mix[a] = s1[a];
	for (; a < m + i; a++)
		str_mix[a] = s2[a - i];
	str_mix[a] = '\0';
	return (str_mix);
}
