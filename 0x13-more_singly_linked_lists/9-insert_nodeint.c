#include "lists.h"
#include "2-add_nodeint.c"
/**
 * insert_nodeint_at_index - adds node at a specific idx
 * @head: head of LL
 * @idx: index to put at
 * @n: num to add in node
 *
 * Return: LL after node add
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int o;

	if (!idx)
		return (add_nodeint(head, n));
	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);
	a->n = n;
	b = *head;
	for (o = 0; o < idx - 1 && b; o++)
		b = b->next;
	if (!b)
		return (NULL);
	a->next = b->next;
	b->next = a;
	return (a);
}
