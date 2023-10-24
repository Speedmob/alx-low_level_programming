#include "lists.h"
/**
 * find_listint_loop - finds a loop in a list
 * @head: LL to scan
 *
 * Return: address of Looped node
*/
listint_t *find_listint_loop(listint_t *head)
{
	int i;
	listint_t *n;

	if (!head)
		return (NULL);
	n = head;
	for (i = 0; n; i++)
	{
		if (n - n->next <= 0)
		{
			return (n->next);
		}
		head = head->next;
		n = head;
	}
	return (NULL);
}
