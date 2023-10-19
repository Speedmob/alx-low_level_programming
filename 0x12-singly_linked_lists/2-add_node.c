#include "lists.h"
/**
 * add_node - adds a node at the beginning of a LL
 * @head: Head of LL
 * @str: str to add
 *
 * Return: address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int i;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	n->len = i;
	n->next = *head;
	*head = n;
	return (*head);
}
