#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a LL
 * @head: head of LL
 * @n: value of node
 *
 * Return: address of LL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *n_it;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);
	a->n = (int)n;
	n_it = *head;
	if (!(*head))
	{
		*head = a;
		return (*head);
	}
	while (n_it->next)
		n_it = n_it->next;
	n_it->next = a;
	return (*head);
}
