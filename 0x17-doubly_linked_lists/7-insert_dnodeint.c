#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: D_LL
 * @idx: index
 * @n: num to insert
 *
 * Return: address of new node, NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *i;

	if (!*h || !idx)
		return (add_dnodeint(h, n));
	idx--;
	for (i = *h; i && idx; i = i->next, idx--)
		;
	if (idx)
		return (NULL);
	if (!i->next)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	i->next->prev = node;
	node->next = i->next;
	node->prev = i;
	i->next = node;
	return (node); }
