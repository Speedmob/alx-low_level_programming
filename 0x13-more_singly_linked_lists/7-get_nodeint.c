#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: head of LL
 * @index: index of wanted node
 *
 * Return: node at a specific index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head; a++)
		head = head->next ? head->next : NULL;
	return (head);
}
