#include "main.h"
/**
 * cmp_Str - compares two strings
 * @s1: First String
 * @s2: Second String
 * @n: iterator
 *
 * Return: 1 (identical), 0 (not identical)
*/
int cmp_Str(char *s1, char *s2, int n)
{
	if (s1[n] == '*')
		return (cmp_Str(s1 + 1, s2, n));
	if (s1[n] != s2[n])
		return (0);
	if (!(s1[n] || s2[n]))
		return (1);
	return (s1[n] == s2[n] ? cmp_Str(s1, s2, n + 1) : 0);
}
/**
 * wild_star - skips all stars
 * @s: String to skip with
 *
 * Return: String with skipped stars
*/
char *wild_star(char *s)
{
	if (s[0] == '*')
		return (wild_star(s + 1));
	else
		return (s);
}
/**
 * skip_check - skips all chars because of star
 * @s1: String with removed stars
 * @s2: String to skip checks of
 *
 * Return: s2 with removed letters or a pass
*/
char *skip_check(char *s1, char *s2)
{
	if (!s2[0])
		return (s2);
	if (s1[0] != s2[0])
		return (skip_check(s1, (s2 + 1)));
	if (s1[0] == s2[0])
		if (cmp_Str(s1, s2, 0))
			return (s2);
	return (skip_check(s1, (s2 + 1)));
}
/**
 * compare_str - checks if two Strings are identical
 * @s1: 1st String to check
 * @s2: 2nd String to check
 * @n: iteration
 *
 * Return: Strings are identical or not
*/
int compare_str(char *s1, char *s2, int n)
{
	if (!(s1[n] || s2[n]))
		return (1);
	if (s1[n] == '*')
	{
		s1 = wild_star(s1 + n);
		s2 = skip_check(s1, s2 + n);
		n = 0;
		if (!(s1[0]))
			return (1);
		if (!(s2[0]))
			return (0);
	}
	if (s2[n] == '*')
	{
		s2 = wild_star(s2 + n);
		s1 = skip_check(s2, s1 + n);
		n = 0;
		if (!(s2[0]))
			return (1);
		if (!(s1[0]))
			return (0);
	}
	return (s1[n] == s2[n] ? compare_str(s1, s2, n + 1) : 0);
}
/**
 * wildcmp - checks if two Strings are identical
 * @s1: first String to check
 * @s2: 2nd String to check
 *
 * Return: 1 (identical), 0 (not identical)
*/
int wildcmp(char *s1, char *s2)
{
	return (compare_str(s1, s2, 0));
}
