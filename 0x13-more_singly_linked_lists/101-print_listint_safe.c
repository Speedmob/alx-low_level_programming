#include "lists.h"
/**
 * print_listint_safe - prints a LL
 * @head: LL to print
 *
 * Return: size of LL
*/
size_t print_listint_safe(const listint_t *head)
{
	int i;

	for (i = 0; head; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return ((size_t)i + 1);
		}
		head = head->next;
	}
	return ((size_t)i);
}
