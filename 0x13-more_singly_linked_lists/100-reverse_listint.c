#include "lists.h"
/**
 * reverse_listint - reverses a string
 * @head: head of LL
 *
 * Return: LL but reversed
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (!head || !*head)
		return (NULL);
	if (!(*head)->next)
		return (*head);
	a = (*head)->next;
	b = a->next;
	(*head)->next = NULL;
	while (a)
	{
		a->next = *head;
		*head = a;
		a = b;
		b = b ? b->next : NULL;
	}
	return (*head);
}
