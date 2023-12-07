#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at an index
 * @head: D_LL
 * @index: index
 *
 * Return: address of node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; head = head->next, index--)
		;
	return (head ? head : NULL); }
