#include "lists.h"
/**
 * free_listint_safe - frees a LL safely
 * @h: head of LL
 *
 * Return: num of nodes freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *n;
	int i = 0;

	if (!h)
		return (0);
	n = *h;
	while (n)
	{
		if (n - n->next <= 0)
		{
			free(n);
			*h = NULL;
			return (i + 1);
		}
		*h = (*h)->next;
		free(n);
		n = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
