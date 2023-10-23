#include "lists.h"
/**
 * listint_len - length of a LL
 * @h: LL to measure
 *
 * Return: length of LL
*/
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
