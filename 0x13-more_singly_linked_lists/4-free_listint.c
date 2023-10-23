#include "lists.h"
/**
 * free_listint - frees a LL
 * @head: head of LL
*/
void free_listint(listint_t *head)
{
	listint_t *n;

	n = head;
	while (n)
	{
		head = head->next;
		free(n);
		n = head;
	}
}
