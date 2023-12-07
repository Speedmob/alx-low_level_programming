#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of D_LL
 * @head: D_LL
 * @n: num to add
 *
 * Return: new element, null
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *i;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!(*head))
		*head = node;
	else
	{
		for (i = *head; i->next; i = i->next)
			;
		i->next = node;
		node->prev = i; }
	return (node); }
