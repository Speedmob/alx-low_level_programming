#include "main.h"
#include "2-strlen_recursion.c"
/**
 * check_palin - checks if string is palindrome
 * @s: string to check
 * @n: iteration
 *
 * Return: string is palindrome or not
*/
int check_palin(char *s, int n)
{
	if (!(s[n]))
		return (1);
	return (s[n] == s[_strlen_recursion(s) - n - 1] ? check_palin(s, n + 1) : 0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: String to check
 *
 * Return: 1 (palindrome), 0 (not palindrome)
*/
int is_palindrome(char *s)
{
	return (check_palin(s, 0));
}
