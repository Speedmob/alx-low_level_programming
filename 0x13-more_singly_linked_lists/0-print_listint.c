#include "lists.h"
/**
 * print_listint - prints an int LL
 * @h: LL to print
 *
 * Return: number of nodes in LL
*/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return ((size_t)i);
}
