#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats two Strings
 * @s1: First String
 * @s2: Second String
 *
 * Return: concat of two Strings, NULL.
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, m = 0, a;
	char *str_mix;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[m]; m++)
			;
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
