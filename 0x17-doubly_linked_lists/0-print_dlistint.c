#include "lists.h"
/**
 * print_dlistint - prints a D_LL
 * @h: D_LL to print
 *
 * Return: num of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int size;

	if (!h)
		return (0);
	for (size = 0; h; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
