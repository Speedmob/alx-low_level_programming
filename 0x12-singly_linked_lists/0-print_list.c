#include "lists.h"
/**
 * print_list - prints contents of a Ll
 * @h: LL to print contents of
 *
 * Return: number of elements
*/
size_t print_list(const list_t *h)
{
	int i, n;

	for (i = 0; h; i++)
	{
		n = h->len;
		if (!h->str)
			n = 0;
		printf("[%d] %s\n", n, h->str ? h->str : "(nil)");
		h = h->next;
	}
	return ((size_t)i);
}
