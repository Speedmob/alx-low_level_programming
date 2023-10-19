#include "lists.h"
/**
 * free_list - frees a LL
 * @head: LL to free
*/
void free_list(list_t *head)
{
	list_t *n;

	n = head;
	while (n)
	{
		head = head->next;
		free(n->str);
		free(n);
		n = head;
	}
}
