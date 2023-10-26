#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: String of binary to convert
 *
 * Return: int of a binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pRes = 1;
	int o;

	if (!b)
		return (0);
	for (o = 0; b[o]; o++)
		;
	o--;
	for (; o >= 0; o--)
	{
		if (b[o] != '0' && b[o] != '1')
			return (0);
		result += (b[o] - '0') * pRes;
		pRes *= 2;
	}
	return (result);
}
