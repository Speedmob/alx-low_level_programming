#include "main.h"
/**
 * num_iterator - iterates until prime is checked
 * @a: num to check
 * @b: num for guessing
 *
 * Return: 1 (prime) or 0 (not prime)
*/
int num_iterator(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (a < b * 2)
		return (1);
	return (num_iterator(a, b + 1));
}
/**
 * is_prime_number - checks if num is prime
 * @n: num to check
 *
 * Return: 0 (number is not prime), 1 (number is prime)
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return ((n == 2) ? 1 : num_iterator(n, 2));
}
