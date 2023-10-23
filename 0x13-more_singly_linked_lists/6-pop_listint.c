#include "lists.h"
/**
 * pop_listint - pops the head and returns its content
 * @head: head of LL
 *
 * Return: content of head
*/
int pop_listint(listint_t **head)
{
	int a;
	listint_t *m;

	if (!head || !*head)
		return (0);
	a = (*head)->n;
	m = *head;
	*head = (*head)->next;
	free(m);
	return (a);
}
