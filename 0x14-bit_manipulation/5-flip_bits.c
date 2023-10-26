#include "main.h"
/**
 * flip_bits - num of bits flipped
 * @n: first num
 * @m: 2nd num
 *
 * Return: num of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	int o;

	for (o = 63; o >= 0; o--)
		if (((n ^ m) >> o) & 1)
			c++;
	return (c);
}
