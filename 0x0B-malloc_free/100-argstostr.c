#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concats all args
 * @ac: amount of args
 * @av: args to concat
 *
 * Return: concat of args, NULL.
*/
char *argstostr(int ac, char **av)
{
	int a, m, num = 1, o = 0;
	char *str_mix;

	if (av == NULL || ac <= 0)
		return (NULL);
	for (a = 0; a < ac; a++, num++)
		for (m = 0; av[a][m]; m++, num++)
			;
	str_mix = malloc(sizeof(char) * num);
	if (str_mix == NULL)
		return (NULL);
	for (a = 0; a < ac; a++, o++)
	{
		for (m = 0; av[a][m]; m++, o++)
			str_mix[o] = av[a][m];
		str_mix[o] = '\n';
	}
	str_mix[o] = '\0';
	return (str_mix);
}
