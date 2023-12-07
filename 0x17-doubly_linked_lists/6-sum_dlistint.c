#include "lists.h"
/**
 * sum_dlistint - returns sum of all nums
 * @head: D_LL
 *
 * Return: sum of all nums
*/
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	for (; head; head = head->next)
		a += head->n;
	return (a); }
