#include "lists.h"
/**
 * dlistint_len - len of a D_LL
 * @h: D_LL
 *
 * Return: len of D_LL
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	for (size = 0; h; size++)
		h = h->next;
	return (size);
}
