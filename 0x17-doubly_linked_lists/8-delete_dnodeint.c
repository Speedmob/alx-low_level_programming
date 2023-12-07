#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at idx
 * @head: D_LL
 * @index: index of node
 *
 * Return: 1 (Success), -1 (Failure)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i;

	if (!*head)
		return (-1);
	if (!index)
	{
		i = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL; }
		free(i);
		return (1); }
	for (i = *head; i && index; i = i->next, index--)
		;
	if (index)
		return (-1);
	if (!i->next)
	{
		i->prev->next = NULL;
		free(i);
		return (1); }
	i->prev->next = i->next;
	i->next->prev = i->prev;
	free(i);
	return (1); }
