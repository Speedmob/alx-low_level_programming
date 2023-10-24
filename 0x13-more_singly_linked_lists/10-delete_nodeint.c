#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a specific index
 * @head: head of LL
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), -1 (Failure)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int o;

	if (!head || !*head)
		return (-1);
	a = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}
	for (o = 0; o < index - 1 && a; o++)
		a = a->next;
	if (!a || !a->next)
		return (-1);
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}
