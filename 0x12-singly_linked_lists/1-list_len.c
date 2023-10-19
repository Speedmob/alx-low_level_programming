#include "lists.h"
/**
 * list_len - returns length of LL
 * @h: LL to measure
 *
 * Return: length of LL
*/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
