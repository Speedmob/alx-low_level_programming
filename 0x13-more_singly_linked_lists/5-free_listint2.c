#include "lists.h"
/**
 * free_listint2 - frees a LL
 * @head: head of LL
*/
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (!head)
		return;
	n = *head;
	while (n)
	{
		*head = (*head)->next;
		free(n);
		n = *head;
	}
	*head = NULL;
}
