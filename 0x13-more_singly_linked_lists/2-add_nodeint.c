#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of LL
 * @head: LL to add node to
 * @n: value of node
 *
 * Return: LL with node added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);
	a->n = (int)n;
	a->next = *head;
	*head = a;
	return (*head);
}
