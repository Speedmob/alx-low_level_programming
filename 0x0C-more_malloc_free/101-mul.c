#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: the array
 *
 * Return: retuns length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * comb - adds res to arr
 * @s: String to add to
 * @res: Num to add
 * @b: where to add
 *
 * Return: complete String
*/
char *comb(char *s, int res, int b)
{
	int x = 10;
	int g, m = 0;

	while ((res / x) >= 10)
	{
		x = x * 10;
	}
	while (x != 0)
	{
		g = res;
		g = (g / x) % 10;
		x = x / 10;
		m = s[b] - '0' + g;
		if (m > 9)
		{
			s[b] = (m / 10) + '0';
			s[b + 1] = (m % 10) + '0';
		}
		else
			s[b] = m + '0';
		b++;
	}
	return (s);
}
/**
 * _mul - multiplies two numbers in strings
 * @s1: first String
 * @s2: second String
 *
 * Return: product of two nums
*/
char *_mul(char *s1, char *s2)
{
	int s, ss, c1, c2, len, lenr, res, m, mm;
	char *x;

	len = _strlen(s1);
	lenr = _strlen(s2);
	x = malloc(len + lenr + 1);
	if (x == NULL)
		printf("Error\n"), exit(98);
	for (c1 = 0; c1 < (len + lenr); c1++)
		x[c1] = '0';
	for (c1 = 0; s1[c1]; c1++)
		;
	for (c2 = 0; s2[c2]; c2++)
		;
	c1--;
	c2--;
	for (; c1 >= 0; c1--)
	{
		if (!(s1[c1] >= '0' && s1[c1] <= '9'))
			printf("Error\n"), exit(98);
		for (s = c2, ss = 0; s >= 0; s--, ss++)
		{
			if (!(s2[s] >= '0' && s2[s] <= '9'))
				printf("Error\n"), exit(98);
			m = s1[c1] - '0';
			mm = s2[s] - '0';
			res = (m * mm);
			x = comb(x, res, c2 - ss);
		}
	}
	x[len + lenr + 1] = '\0';
	return (x);
}
/**
 * main - muls two nums
 * @argc: num of args
 * @argv: args
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int c;
	char *res;

	if (argc != 3)
		printf("Error\n"), exit(98);
	res = _mul(argv[1], argv[2]);
	for (c = 0; res[c]; c++)
		;
	c--;
	while (c--)
		_putchar(res[c]);
	_putchar(res[0]);
	_putchar(10);
	return (0);
}
