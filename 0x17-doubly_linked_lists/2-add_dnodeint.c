#include "lists.h"
/**
 * add_dnodeint - adds a node at the end of D_LL
 * @head: D_LL
 * @n: int to add
 *
 * Return: address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
