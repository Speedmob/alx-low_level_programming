#include "lists.h"
/**
 * sum_listint - adds all nums in LL
 * @head: LL to sum
 *
 * Return: sum of all LL nums
*/
int sum_listint(listint_t *head)
{
	int a, sum = 0;

	for (a = 0; head; a++, head = head->next)
		sum += head->n;
	return (sum);
}
