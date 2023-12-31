#include "lists.h"
/**
 * free_dlistint - frees a D_LL
 * @head: D_LL to free
*/
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	if (!head->next)
	{
		free(head);
		return; }
	for (head = head->next; head->next; head = head->next)
		free(head->prev);
	free(head->prev);
	free(head); }
