#include "lists.h"
/**
 * add_node_end - adds a node at the end of LL
 * @head: Head of LL
 * @str: str of new node
 *
 * Return: LL after new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *n_it;
	int i;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	n->len = i;
	n_it = *head;
	if (!(*head))
	{
		*head = n;
		return (*head);
	}
	while (n_it->next)
		n_it = n_it->next;
	n_it->next = n;
	return (*head);
}
